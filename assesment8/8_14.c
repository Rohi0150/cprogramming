/*
 * Question: Write a program to get a number from the user and print the total 
 * number of two-digit perfect square numbers in the number.
 * Function Name: disp_two_digit_square
 * * Examples:
 * Input : 163496481 -> Output : 4
 * Input : 364925    -> Output : 4
 */
#include <stdio.h>
int disp_two_digit_square(int x){
    int temp=x,count=1,c=0;
    while(temp){
        count *=10;
        temp/=10;
    }
    count/=100;
    while (count){
        int y= (x/count)%100;
        count/=10;
        for (int i =1 ; i<=9 ;i++){
            if(i*i==y){
                c++;
            }
        }
    }
    return c;
}
int main(){
    int x;
    scanf("%d",&x);
    int y = disp_two_digit_square(x);
    printf("%d",y);
}