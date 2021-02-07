#include <iostream>
#include <math.h>
#include "math_custom.h"

using namespace std;

// there is a great way
// The palindrome can be written as:
// abccba
// Which then simpifies to:
// 100000a + 10000b + 1000c + 100c + 10b + a
// And then:
// 100001a + 10010b + 1100c
// Factoring out 11, you get:
// 11(9091a + 910b + 100c)
void solution_4()
{
    bool find = false;
    for (int i = 998001; i > 10000; i--)
    {
        long long reverseI = reverseNum(static_cast<int>(i));
        if (static_cast<int>(reverseI) != i)
        {
            continue;
        }

        cout << "find palindrome: " << i << endl;

        int sqrtIntPart = static_cast<int>(sqrt(i));
        for (int j = sqrtIntPart; j > 100; j--)
        {
            if (i % j != 0)
            {
                continue;
            }

            if (i / j < 999)
            {
                cout << "find it! " << i << " = " << j << " * " << i / j << endl;
                find = true;
                break;
            }
        }

        if (find)
        {
            break;
        }
    }
}

void show_4_answer()
{
    solution_4();
}