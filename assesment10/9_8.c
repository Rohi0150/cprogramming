/*Question

Get a string of numbers up to 50 digits and validate the number.*/
#include <stdio.h>
#include <string.h>
int main(){
    char nums[51];
    fgets(nums,51,stdin);
    nums[strcspn(nums,"\n")]='\0';
    int flag =1;
    for (int i = 0 ; nums[i]!='\0';i++){
        if(nums[i] < 48 || nums[i] > 57){
            flag=0;
            break;
        }
    }
    if (flag) printf("Vaild");
    else printf("Invaild");
}