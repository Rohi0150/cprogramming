/*Remove Leading Zeros
Question: Get a string of numbers up to 50 digits and remove all leading zeros.

Sample Input: "00008920"

Sample Output: "8920"*/
#include <stdio.h>
#include <string.h>
int main(){
    char nums[51];
    fgets(nums,51,stdin);
    nums[strcspn(nums,"\n")]='\0';
    int i = 0,flag =1;
    while(nums[i]!='\0'){
        if(nums[i]=='0'&& flag==1) {
            i++;
            continue;}
        else {
            printf("%c",nums[i]);
            i++;
            flag = 0;
        }
    }
}