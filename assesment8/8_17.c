/*
 * Question: Write a program to print the total count of numbers 
 * which are less than 100000 and whose sum of digits is 14.
 * Function Name: disp_count_sum14
 */
#include <stdio.h>
int disp_count_sum_14(int x){
    int temp=x, sum =0 ,z;
    int y =0 ,count=0;
    while (temp<100000){
        z=temp;
        sum =0;
        while (z){
            y=z%10;
            sum = sum+y;
            z/=10;
        }
        if(sum==14) count++;
        temp++;
        if (temp==0) break;
    }
    return count;
}
int main (){
    int x=1;
    int y = disp_count_sum_14(x);
    printf("%d",y);
}