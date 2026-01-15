/*4 4
10 8 10 10
14 13 12 11
15 9 11 21
16 17 19 20
*/
// 9

#include <stdio.h>
void adjmat(int m , int n , int a[m][n]){
    for (int i =1 ;i<m-1 ;i++){
        for (int j =1;j<n-1 ;j++){
            if(a[i][j]>a[i-1][j] || a[i][j] >a[i][j-1]||a[i][j] >a[i+1][j]||a[i][j]>a[i][j+1]){
                continue;
            }
            else printf("%d ",a[i][j]);
        }
    }
}
int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    for (int i =0 ; i<m ;i++){
        for (int j =0 ;j<n ;j++){
            scanf("%d",&a[i][j]);
        }
    }
    adjmat(m,n,a);
    
    return 0;
}