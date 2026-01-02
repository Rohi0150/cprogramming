/*Get 5 numbers from the user and print the arrange in ascending order and print the same*/
#include <stdio.h>
int main(){
    int n = 5;
    int a[n];
    for (int i =0 ; i<n ;i++){
        scanf("%d",&a[i]);
    }
    for (int i =0 ; i<n ;i++){
        for (int j = 0 ;j<n;j++){
            if(a[i]<a[j])
            {
            int temp = a[i];
            a[i]= a[j];
            a[j]=temp;
            }
        }
    }
    for (int i =0 ; i<n;i++){
        printf("%d ",a[i]);
    }
}