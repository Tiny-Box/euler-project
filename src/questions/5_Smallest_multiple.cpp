#include <iostream>
#include <vector>
#include "math_custom.h"

using namespace std;

void solution_5()
{
    vector<int> res = fibList(10);
    for_each(res.begin(), res.end(), [](int i) {
        cout << i << " ";
    });
    cout << endl;
}

void show_5_answer()
{
    solution_5();
}
