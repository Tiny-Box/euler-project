#include <iostream>
#include<map>
#include "math.h"


using namespace std;

// fib cal way by record
map<int, int> fibRecord = {{1, 1}, {2, 2}, {3, 3}};
int fib(int n) {
    if (fibRecord.find(n) != fibRecord.end()) {
        return fibRecord.find(n)->second;
    }

    int sum;
    sum = fib(n-1) + fib(n-2);
    fibRecord.insert(pair<int, int>(n, sum));

    return sum;
}
