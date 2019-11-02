#include <mylib/sum.hpp>

#include <cstdlib>

void check(bool b)
{
    if (!b) exit(1);
}

using namespace mylib;

int main()
{
    check(sum(1, 2) == 3);
    check(sum(5, 6) == 11);
    return 0;
}
