/*Get 5 numbers from user and print the smallest number*/
#include <stdio.h>
int main(){
    int n =5;
    int arr[n];
    for (int i =0 ;i<n;i++) scanf("%d",&arr[i]);
    int min = arr[0];
    for (int i =0 ;i<n ;i++) {
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
}