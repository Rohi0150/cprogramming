/*Input :
3
3
1 2 3
4 5 6
7 8 9
Output :
Transpose
1 4 7 
2 5 8 
3 6 9 
Rot by 90 deg
7 4 1 
8 5 2 
9 6 3 */
#include <stdio.h>

int main(){
    int m ,n ;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    for (int i =0 ;i<m ;i++){
        for (int j =0 ;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose\n");
    for (int i =0 ;i<m ;i++){
        for (int j =0 ;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    printf("Rot by 90 deg\n");
    for (int i =0 ;i<m ;i++){
        for (int j =n-1 ;j>=0;j--){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}