/*Question:

Get a number string up to 50 digits and convert it to an integer array.*/
#include <stdio.h>
#include <string.h>
int main(){
    char nums[50];
    fgets(nums,51,stdin);
    int n = strlen(nums)-1;
    int a[n];
    for(int i =0 ;i<n;i++){
        a[i]=nums[i]-48;
    }
    for(int i =0 ;i<n;i++){
        printf("%d ",a[i]);
    }
} 