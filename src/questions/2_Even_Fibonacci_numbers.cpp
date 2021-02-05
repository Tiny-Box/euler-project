#include <iostream>
#include<map>
#include "solution.h"


using namespace std;

map<int, int> record = {{1, 1}, {2, 2}, {3, 3}};
int fib(int n) {
    if (record.find(n) != record.end()) {
        return record.find(n)->second;
    }

    int sum;
    sum = fib(n-1) + fib(n-2);
    record.insert(pair<int, int>(n, sum));

    return sum;
}

int solution(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        int fibN = fib(i);
        if (fibN >= number) {
            break;
        } else if (fibN % 2 == 0) {
            sum += fibN;
        } else {
            continue;
        }
    }
    
    for_each(record.begin(), record.end(), [](pair<int, int> i) {
        cout << "key: " << i.first << " value: " << i.second << endl;
    });
    return sum;
}