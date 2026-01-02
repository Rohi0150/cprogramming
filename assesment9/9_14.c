/*Get multiple numbers from the user and store them in an array. Stop getting numbers when the number is 0.
if the total numbers is odd then print the middle number, otherwise print the average of the middle two numbers.*/
#include <stdio.h>
int main(){
    int a[100];
    int n=0,sum =0;
    loop:
    scanf("%d",&a[n]);
    if (a[n]==0){
        goto end;
    }
    else{
        n++;  
        goto loop;}
    end: 
    for (int i =0 ; i<n ;i++){
        sum = sum +a[i];
    }
    if (n%2==1){
        printf("%d",a[n/2]);
    }
    else {
        printf("%d",sum/n);
    }
}