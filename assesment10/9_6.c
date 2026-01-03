/*Question:

Get an integer and print each digit as a character. Print one character on one line.*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp = n;
    int i =0 ,count=1;
    char num[30];
    while(n){
        count*=10;
        n/=10;
    }
    count/=10;
    while(count){
        num[i]=((temp/count)%10)+48;
        i++;
        count/=10;
    }
    num[i]='\0';
    for(int j =0 ;j<i ;j++){
        printf("%c\n",num[j]);
    }
    
}