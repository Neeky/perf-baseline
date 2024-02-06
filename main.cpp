#include <iostream>
#include <string.h>
#include <fmt/core.h>
#include <argparse/argparse.hpp>

using std::cout;
using std::endl;
using std::string;

argparse::ArgumentParser args("perf-baseline");

void parse_args(int argc, char **argv)
{
    args.add_argument("-v", "--verbose").default_value(false).implicit_value(true);
    args.parse_args(argc, argv);
}

int main(int argc, char **argv)
{
    parse_args(argc, argv);
    auto input = args.get<bool>("verbose");
    fmt::print("hello perf-base {} \n", input);
    return 0;
}
