
#include <hello.hpp>

#include <cassert>

int main()
{
    const auto out = hello::say_hello("Tom");
    assert(out == "Hello, Tom");
}