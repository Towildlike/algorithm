#include <iostream>
using namespace std;

int main()
{
    int m,n,x,y;
    cin >> n;
    cin >> m;
    cin >> x;
    cin >> y;

//没有马的时候
//array[i][j] = array[i][j - 1] + array[i - 1][j]
/*
    int array[n][m] = {0}; 
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
                if (i == 0 || j == 0)
                    array[i][j] = 1;
                else
                    array[i][j] = array[i][j - 1] + array[i - 1][j];
        }
    }
*/

//有马的时候
//全部初始化为1
    int array[n + 1][m + 1];

    for(int i = 0; i <= n; ++i) {
        for(int j = 0; j <= m; ++j){
            array[i][j] = 1;
        }
    }

//标记点位，马本身和马的控制点标记为0
    if (x + 2 <= n && y - 1 >= 0) array[x + 2][y - 1] = 0;
    if (x + 2 <= n && y + 1 <= m) array[x + 2][y + 1] = 0;
    if (x + 1 <= n && y + 2 <= m) array[x + 1][y + 2] = 0;
    if (x - 1 >= 0 && y + 2 <= m) array[x - 1][y + 2] = 0;
    if (x - 2 >= 0 && y + 1 <= m) array[x - 2][y + 1] = 0;
    if (x - 2 >= 0 && y - 1 >= 0) array[x - 2][y - 1] = 0;
    if (x - 1 >= 0 && y - 2 >= 0) array[x - 1][y - 2] = 0;
    if (x + 1 <= n && y - 2 >= 0) array[x + 1][y - 2] = 0;
    array[x][y] = 0;

    for(int i = 0; i <= n; ++i) {
        for(int j = 0; j <= m; ++j) {
                if(i == 0 && j == 0)
                    continue;
                if(array[i][j] == 0)
                    continue;

                if (i == 0)
                    array[i][j] = array[i][j - 1];//上边界的前一个点如果已经被控制，后面的点一定无法到达
                else if (j == 0)
                    array[i][j] = array[i - 1][j];//左边界的上一个点如果已经被控制，下面的点一定无法到达
                else
                    array[i][j] = array[i][j - 1] + array[i - 1][j];
                
                cout << "array[" << i << "][" << j << "] = " <<  array[i][j] << endl;
        }
    }

    for(int i = 0; i <= n; ++i){
        for(int j = 0; j <= m; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << array[n][m];
    return 0;
}