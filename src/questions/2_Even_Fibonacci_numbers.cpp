#include <iostream>
#include<map>
#include "solution.h"


using namespace std;

map<int, int> record;
int fib(int n) {
    cout << n << endl;
    if (record.find(n) != record.end()) {
        return record.find(n)->second;
    }

    int sum;
    sum = fib(n-1) + fib(n-2);
    record.insert(pair<int, int>(n, sum));

    return sum;
}

int solution(int number) {
    return fib(number);
}