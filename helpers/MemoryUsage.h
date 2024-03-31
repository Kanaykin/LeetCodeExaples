#pragma once

#include <string>
#include <cstring>
#include <sys/resource.h>

namespace helpers
{

long get_mem_usage()
{
    struct rusage usage;
    int ret{0};
    ret = getrusage(RUSAGE_SELF, &usage);
    return usage.ru_maxrss; // in KB
}

class MemoryUsage
{
private:
    long _memUsageStart = {0};
public:
    MemoryUsage();
    ~MemoryUsage();
};

}
