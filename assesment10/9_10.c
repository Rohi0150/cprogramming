/*Reverse a Large Number
Question: Get a number up to 50 digits and reverse it.

Sample Input: "123456789"

Sample Output: "987654321"*/
#include<stdio.h>
#include<string.h>
int main(){
    char nums[51];
    fgets(nums,51,stdin);
    nums[strcspn(nums,"\n")]='\0';
    int n = strlen(nums);
    for(int i = n-1;i>=0;i--){
        printf("%c",nums[i]);
    }
}