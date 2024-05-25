#pragma once
#include <iostream>
#include <chrono>

namespace helpers
{

class Timer
{
public:

    Timer() : _beg(clock::now()) {}
    void reset() { _beg = clock::now(); }

    double elapsed() const { 
        return std::chrono::duration_cast<second>
            (clock::now() - _beg).count(); }

    using clock = std::chrono::high_resolution_clock;
    using second = std::chrono::duration<double, std::ratio<1>>;

    // clock _clock;
    // second _second;
    std::chrono::time_point<clock> _beg;
};

}
