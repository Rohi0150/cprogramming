/*Question:

Get a number as a String and print the integer value of the string.
Input: 007 (As String) ; Output: 7(as decimel)
Input: 707 (As String) ; Output: 707(as decimel)
Input: 12345 (As String) ; Output: 12345(as decimel)*/
#include <stdio.h>
#include <string.h>
int main(){
    char num[30];
    fgets(num,30,stdin);
    num[strcspn(num,"\n")]=='\0';
    int n = strlen(num);
    int flag = 1;
    for (int i =0 ; i<n-1;i++){
        if (num[i]=='0' && flag ==1){
            continue;
        }else{
            flag=0;
        printf("%d",(num[i]-48));}
    }
}