/*
Question: 
Write a program get number from user print the total number digits 
which are odd in the number.

Function Name : disp_total_odd_digits

Answer:
Input : 12345678  - Output : 4
Input : 987531    - Output : 5
*/
#include <stdio.h>
int disp_total_odd_digit(int x){
    int count =0 ;
    while (x){
        int y = x%10;
        x/=10;
        if (y%2==1) count++;
    }
    return count;
    
}
int main(){
    int x;
    scanf("%d",&x);
    int y = disp_total_odd_digit(x);
    printf("%d",y);
}