/*
 * Question: Write a program to print biggest 4-digit number which is 
 * divisible by 7 and 9.
 * Function Name: disp_biggest_4digit_div7_9
 */
#include <stdio.h>
int disp_biggeest_4digit_div7_9(int x){
    int temp= x;
    while (x){
        if (x%7==0 && x%9==0) {
            return x;
        }
        x--;
    }
}
int main(){
    int x=9999;
    int y = disp_biggeest_4digit_div7_9(x);
    printf("%d",y);
}