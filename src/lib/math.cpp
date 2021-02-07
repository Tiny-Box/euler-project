#include <iostream>
#include <map>
#include <numeric>
#include "math_custom.h"

using namespace std;

// fib cal way by record
map<int, int> fibRecord = {{1, 1}, {2, 2}, {3, 3}};
int fib(int n)
{
    if (fibRecord.find(n) != fibRecord.end())
    {
        return fibRecord.find(n)->second;
    }

    int sum;
    sum = fib(n - 1) + fib(n - 2);
    fibRecord.insert(pair<int, int>(n, sum));

    return sum;
}

// no check overflow
long long reverseNum(long long n)
{
    bool sign = false;
    if (n < 0)
    {
        n *= -1;
        sign = true;
    }
    long long res = 0;
    while (n != 0)
    {
        int item = n % 10;
        res = res * 10 + item;
        n /= 10;
    }
    return sign ? -1 * res : res;
}