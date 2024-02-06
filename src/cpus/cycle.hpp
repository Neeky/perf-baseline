/**
 * 用于测试在当前的机器环境下多少个 CPU 周期才能完成一次加法运算
 *
 * 作者: neeky
 * 时间: 2024-01
 */

#include <x86intrin.h>
#include <iostream>
#include <fmt/core.h>

#ifndef PBL_CPU_CYCLE
#define PBL_CPU_CYCLE

// 迭代 1700w 次
const int ITER_TIMES = 1700 * 10000;

/**
 * 执行 + 1 操作 times 次，打印这个过程中消耗的 CPU 时钟周期
 *
 * times: 要执行 +1 操作的次数
 */
void bench_cpu_cycle(const int times)
{
    uint64_t start_cycle{0};
    uint64_t stop_cycle{0};
    u_int64_t sum{0};

    // 记录测试开始时的周期数
    start_cycle = __rdtsc();

    // 累加 times 次
    for (int i = 0; i < times; i++)
    {
        sum = sum + 1;
    }

    // 记录完成时的周期数
    stop_cycle = __rdtsc();

    fmt::print("execute {} times add operator cost {} cycles \n", times, stop_cycle - start_cycle);
    fmt::print("avg {} cycle(s) per add operator \n", (stop_cycle - start_cycle) / 1.0 / times);
}

#endif
