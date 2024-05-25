#include <string>
#include <set>
#include <iostream>
#include "helpers/TimeDuration.h"

int mainFast();
int mainSlow();

int main()
{
    helpers::Timer tmr;
    mainFast();

    const double tFast = tmr.elapsed();
    std::cout << "!!! mainFast time elapsed " << tFast << std::endl;
    tmr.reset();

    mainSlow();
    const double tSlow = tmr.elapsed();
    std::cout << "!!! tSlow time elapsed " << tSlow << std::endl;

    return 0;
}