/*
 * Question: Write a program to get a number from the user and print the total 
 * number of single-digit prime numbers in the number.
 * * Function Name: disp_single_digit_prime
 * * Answer:
 * Input : 163496481 -> Output : 1 (Prime digit identified: 3)
 * Input : 364925    -> Output : 3 (Prime digits identified: 3, 2, 5)
 */
#include <stdio.h>
int disp_single_digit_prime(int x){
    int temp =x,c=0;

    while (temp){
        int flag =0;
        int y = temp%10;
        if(y>2){
            for (int i =2 ;  i< y;i++){
            if (y%i==0) {
                flag =1 ;
                break;
                }
            }
        }
    if (y<2) flag =1;
        if(flag ==0) c++;
        temp/=10;
    }
    return c;
}
int main(){
    int x;
    scanf("%d",&x);
    int y = disp_single_digit_prime(x);
    printf("%d",y);
}