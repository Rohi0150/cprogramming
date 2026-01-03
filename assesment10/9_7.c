/*Question:

Get a string and find the length of the string*/
#include <stdio.h>
#include <string.h>
int main(){
    char name[30];
    fgets(name,30,stdin);
    name[strcspn(name,"\n")]='\0';
    int i = 0,count=0;
    while(name[i]!='\0'){
        i++;
    }
    printf("%d",i);
}