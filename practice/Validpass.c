/*
Input : Password123
Output : Invaild Password

Input : Password123!
Output : Vaild Password
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void getinput(char * s){
    fgets(s,30,stdin);
    s[strcspn(s,"\n")]='\0';
}
int validpass(char * s){
    int count =0 ;
    int flag1=0,flag2=0,flag3=0,flag4=0;
    int i =0 ;
    while(s[i]!='\0'){
        if((!flag1)&&isupper(s[i])){
            flag1=1;
            count++;
        }
        else if((!flag2)&&islower(s[i])){
            flag2=1;
            count++;
        }
        else if((!flag3)&&isdigit(s[i])){
            flag3=1;
            count++;
        }
        else if(!(isupper(s[i])||islower(s[i])||isdigit(s[i]))){
            flag4=1;
            count++;
        }
        i++;
    }
    if(count==4)
    return 1 ;
    return 0;
}
int main(){
    char s[30];
    getinput(s);
    int x = validpass(s);
    if(x==1){
        printf("Vaild Password");
    }
    else printf("Invaild Password");
}