#include <iostream>
#include <gflags/gflags.h>
#include <string.h>

DEFINE_string(name, "tom", "test arg name");

using gflags::ParseCommandLineFlags;
using gflags::SetUsageMessage;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv)
{

    SetUsageMessage("hello world");
    ParseCommandLineFlags(&argc, &argv, true);
    cout << "hello my name is " << FLAGS_name << " .\n";
    return 0;
}
