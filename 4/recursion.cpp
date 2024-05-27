#include <iostream>
#include <iomanip>
using namespace std;

float fun(int n)
{
    float res;
    int fenzi[31];
    int fenmu[31];

    fenzi[0] = 1;
    fenmu[0] = 1;
    res = (float)fenzi[0]/(float)fenmu[0];

    for(int i = 1; i < n; ++i) {
        fenzi[i] = fenmu[i - 1];
        fenmu[i] = fenmu[i - 1] + fenzi[i - 1];
        res += (float)fenzi[i]/(float)fenmu[i];
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << std::fixed << std::setprecision(3) << fun(n) << endl;
    return 0;
}