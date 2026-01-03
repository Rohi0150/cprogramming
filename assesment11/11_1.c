/*Question:

Get a number from the user and print the same. Change the value without directly changing it and print the same.*/
#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int* y;
    y = &x;
    *y= *y + 2;
    printf("%d",x);
}