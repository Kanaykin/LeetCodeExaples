#include <vector>
#include <algorithm>
#include "helpers.h"
#include "helpers/TimeDuration.h"

int main()
{
    helpers::Timer tmr;

    mainFast();
    
    const double tFast = tmr.elapsed();
    std::cout << "!!! mainFast time elapsed " << tFast << std::endl;
    tmr.reset();
    
    mainStd();

    const double tStd = tmr.elapsed();
    std::cout << "!!! tStd time elapsed " << tStd << std::endl;

    return 0;
}