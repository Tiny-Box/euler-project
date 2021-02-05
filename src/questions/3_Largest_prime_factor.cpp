#include <iostream>
#include "math_custom.h"

using namespace std;

long long solution_3(long long n) {
    long long* l = factorPollard(n);
    cout << l[0] << endl;
    return l[0];
}

void show_3_answer() {
    cout << solution_3(600851475143) << endl;
}