#include "MemoryUsage.h"

namespace helpers
{

MemoryUsage::MemoryUsage(/* args */)
{
    _memUsageStart = get_mem_usage();
}

MemoryUsage::~MemoryUsage()
{
    std::printf("usage: %ld + %ld\n", _memUsageStart, get_mem_usage() - _memUsageStart);
}

}