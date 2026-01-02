/*Question: Write a program to get a number from the user and print the total number of single-digit perfect square numbers in the number.

Function Name: disp_single_digit_square

Examples:

Input: 123456789 → Output: 3

Input: 987531 → Output: 2*/
#include <stdio.h>
int disp_single_digit_square(int x) {
	int temp = x,c=0;
	while (temp) {
		int y = temp%10;
		int i =1 ;
		for (i=1; i<=3;i++){
            if (i*i==y) {
				c++;
				i++;
			}
		}
		temp/=10;
	}
	return c;
}
int main() {
	int x;
	scanf("%d",&x);
	int y = disp_single_digit_square(x);
	printf("%d",y);
}
