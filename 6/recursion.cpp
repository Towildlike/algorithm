#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    cin >> m;
    int juxing = 0;
/*
当长=1，宽=1时，矩形的数量为n*m
当长=1，宽=2时，矩形的数量为n*(m-1)
当长=1，宽=3时，矩形的数量为n*(m-2)
...
以此类推， 当长=1，宽=m时，矩形的数量为n*1
所以长为1的时候，矩形的总数是n*m+n*(m-1)+n*(m-2)...n*1=n*(m+m-1+m-2+...+1)=n*(m+1)*m/2
同样，长从1...n,所以n*(m+1)*m/2里的n应该是n*(n+1)/2
所以所有的矩形总数就是n*m*(m+1)*(n+1)/4

对于正方形，可以采用一样的思路，假定m>n，由于正方形长和宽总是相等，
所以正方形的总数就是m*n+(m-1)*(n-1)+...+(m-n+1)*1
*/
    juxing = n*m*(m+1)*(n+1)/4;
    
    int hang = n;
    int lie = m;
    int zhengfangxing = 0;
    while(hang > 0 || lie > 0) {
        zhengfangxing += hang * lie;
        hang--;
        lie--;
    }

    cout << zhengfangxing << endl;
    cout << juxing - zhengfangxing << endl;
    return 0;
}