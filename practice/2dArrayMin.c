
#include <stdio.h>
int sum(int m ,int n,int arr[m][n]){
    int i=0 ,j =0 ;
    int s = arr[i][j];
    while (i!=m-1 || j!=n-1){
        if(i==m-1)       j++;
        else if(j==n-1)  i++;
        else if(arr[i+1][j]<arr[i][j+1]) i++;
        else j++;
        s =s+ arr[i][j];
    }
    return s;
}
int main()
{
    int m ,n ;
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];
    for (int i =0 ;i<m ;i++){
        for (int j =0 ;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int res = sum(m,n,arr);
    printf("%d",res);
    return 0;
}