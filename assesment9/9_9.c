/*Get 5 numbers from user, remove the even numbers and create a new array then print the same*/
#include <stdio.h>
int main(){
    int n =5;
    int a[n];
    for (int i = 0;i<n ;i++){
        scanf("%d",&a[i]);
    }
    int l=0,m=1;
    int b[l];
    while (l!=n){
        if(a[l]%2==1){
            b[m-1]=a[l];
            m++;
        }
        l++;
    }
    for (int i = 0; i< m-1 ;i++){
        printf("%d\n",b[i]);
    }
}