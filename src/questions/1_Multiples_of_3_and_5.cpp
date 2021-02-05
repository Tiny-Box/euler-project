#include <iostream>
#include <numeric>
#include <set>


using namespace std;

int solution_1(int number) {
    int three_num = (number - 1) / 3 + 1;
    int five_num  = (number - 1) / 5 + 1;

    set<int> sum;
    for (int i = 1; i < three_num; i++) {
        sum.insert(3 * i);
    }

    for (int i = 1; i < five_num; i++) {
        sum.insert(5 * i);
    }

    int total = 0;
    for_each(sum.begin(), sum.end(), [&](int i) {
        cout << i << " ";
        total += i;
    });

    return total;
}

void show_1_answer() {
    cout << solution_1(10) << endl;
}