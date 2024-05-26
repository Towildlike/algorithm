//等比数列
//f(n) = f(n-1) * 2

#include <iostream>
using namespace std;

int fun(int n)
{
    int res;
    if (n == 1) {
        return 2;
    }

    res = fun(n -1) * 2;
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}