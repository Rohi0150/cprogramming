/*
 * Question: Write a program to get a number from the user and print the total 
 * number of two-digit odd numbers within the number.
 * Function Name: disp_total_2digit_odd
 * * Examples:
 * Input : 12345678  -> Output : 3 (e.g., 12, 34, 56, 78 parsed as 2-digit sets)
 * Input : 987531    -> Output : 4
 */
#include <stdio.h>
int disp_total_2digit_odd(int x){
    int temp=x,count=1,c=0;
    while(temp){
        count *=10;
        temp/=10;
    }
    count/=100;
    while (count){
        int y= (x/count)%100;
        count/=10;
        if (y%2==1){
            c++;
        }
    }
    return c;
}
int main(){
    int x;
    scanf("%d",&x);
    int y =  disp_total_2digit_odd(x);
    printf("%d",y);
}