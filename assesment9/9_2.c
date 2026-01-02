/*Get 5 numbers from user and print the average of all numbers*/
#include <stdio.h>
int main(){
    int n = 5,sum = 0 ;
    int arr[n];
    for (int i =0 ; i<n ;i++) scanf("%d",&arr[i]);
    for (int i =0 ; i<n ;i++) sum = sum + arr[i];
    int avg = sum /n;
    printf("%d",avg);
}