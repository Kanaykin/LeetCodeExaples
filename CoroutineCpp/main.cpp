#include <concepts>
#include <experimental/coroutine>
#include <exception>
#include <iostream>
// #include "__generator.hpp"

// Coroutine gets called on need
// generator<int> generateNumbers(int begin, int inc = 1) 
// {
  
//   for (int i = begin;; i += inc) {
//     co_yield i;
//   }
// }

int main()
{
    // std::experimental::coroutine_handle<> h;

    // h.destroy();
    // while (true) 
    // {
    //   co_await generateNumbers(10);
    // }
    // std::experimental::

    std::experimental::coroutine_handle<void> tmpl;//.resume();

    // generateNumbers(10); 
    return 0; 
}