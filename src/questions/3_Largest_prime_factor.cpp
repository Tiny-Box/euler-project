#include <iostream>
#include "math_custom.h"

using namespace std;

long long solution_3(long long n)
{
    factorResult l = factorPollard(n);
    for (int i = 0; i < l.tol; i++)
    {
        cout << l.factorList[i] << " ";
    }

    cout << endl;
    return l.factorList[0];
}

void show_3_answer()
{
    cout << solution_3(600851475143) << endl;
}