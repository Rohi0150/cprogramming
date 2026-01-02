/*Question: Write a program print total number of single digit Prime numbers.

Function Name: disp_2digit_even_sum6

Answer: 4 */

#include <stdio.h>
int disp_2digit_even_sum6(int x){
    int count=0;
    while(x<10){
        int flag =0;
        for (int i=2 ;i<x;i++){
            if(x%i==0){
                flag =1;
                break;
            }
        }
        if(x<=1) flag =1;
        if(flag) ;
        else count++;
        x++;
    }
    return count;
}

int main(){
    int x=1;
    int y = disp_2digit_even_sum6(x);
    printf("%d",y);
}