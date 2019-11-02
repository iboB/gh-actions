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
    check(sum(15, 16) == 31);
    return 0;
}
