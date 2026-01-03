/*Question: 

Get the string and print the same */
#include<stdio.h>
#include<string.h>
int main(){
    char n[30];
    fgets(n,30,stdin);
    n[strcspn(n,"\n")]=='\0';
    printf("%s",n);
}