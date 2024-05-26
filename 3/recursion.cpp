//阶乘
//f(n) *= f(n-1)

#include <iostream>
using namespace std;

int fun(int n)
{
    int res = n;
    if (n == 1) {
        return 1;
    }
    res = res * fun(n - 1);
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}