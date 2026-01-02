/*
Question:
Write a program to get a number from the user. 
- If the first digit (MSB) of the number is even, print the same number.
- If the first digit (MSB) of the number is odd, subtract 1 from that 
  digit and print the resulting number.

Function Name: check_last_digit_odd

Examples:
- Input: 654324   -> Output: 654324 (First digit 6 is even)
- Input: 76895439 -> Output: 66895439 (First digit 7 is odd, 7-1=6)
- Input: 675      -> Output: 575 (First digit 6 is even? *Note: Example image shows 675 -> 575, implying 6 was treated as odd or the rule was applied*)
*/
#include <stdio.h>
int check_last_digit_odd(int x){
    int temp=x;
    int rem= temp%10;
    int count=1;
    while(temp>10){
        count= count*10;
        temp/=10;
    }
    if(rem%2==1) return (temp-1)*count+ x%count;
    else return x;
}
int main(){
    int x;
    scanf("%d",&x);
    int y = check_last_digit_odd(x);
    printf("%d",y);
}