using namespace std;

int fib(int n);

vector<int> fibList(int n);

struct factorResult
{
    long long *factorList;
    int tol;
};

factorResult factorPollard(long long int n);

long long reverseNum(long long n);
