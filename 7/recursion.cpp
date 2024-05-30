#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    int r;
    int time;
    cin >> n >> r;
    vector<int> t;
    for(int i = 0;i < n; ++i) {
        cin >> time;
        t.push_back(time);
    }
    sort(t.begin(), t.end());

    int sum = 0;
/*
2 4 5 6 7 8
*/

    for(int i = 0;i < n;++i) {
        if (i > r -1)
            sum += t[i] + t[i - r];
        else
            sum += t[i];
    }

    cout << sum;
    return 0;
}