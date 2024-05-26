//等差数列
//f(n) = f(n-1) + 3

#include <iostream>
using namespace std;

int fun(int n)
{
    int res;
    if (n == 1) {
        return 1;
    }
 
    res = fun(n - 1) + 3;

    return res;
}

int main()
{
    int n;
    cin >> n;
    cout <<  fun(n) << endl;
    return 0;
}