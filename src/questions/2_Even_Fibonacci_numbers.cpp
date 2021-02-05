#include <iostream>
#include<map>
#include "math_custom.h"


using namespace std;

int solution_2(int number) {
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
    return sum;
}

void show_2_answer() {
    cout << solution_2(4000000) << endl;
}