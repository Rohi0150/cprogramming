//Get multiple numbers from the user and store them in an array.
// Stop when the number is 0. Print the total numbers entered by the user and print the sum of numbers.
#include <stdio.h>
int main(){
    int n= 0,sum=0;
    int a[100];
    loop:
    scanf("%d",&a[n]);
    sum = sum +a[n];
    if(a[n]==0){
        goto end;
    }
    else {
        n++;
        goto loop;
    }
    end: printf("%d ",sum);
    printf("%d",n);
}