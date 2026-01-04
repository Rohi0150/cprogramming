/*Question: Get a main string and substring. Check the sub-string in the main string and print the position.

Example:

string: helloetalvislearning

sub-string: etal

Answer: 6
#include <stdio.h>
#include <string.h>
int sliceString(char * name,char *ss){
    int i = 0 ;
    int j = 0 ;
    int res = 0;
    int flag = 0;
    while(name[i]!=0){
        if(name[i]==ss[j]){
            while(ss[j]!='\0'){
                if (name[i]==ss[j]){
                    flag = 1;
                    i++;
                    j++;
                }
            }
        }
        i++;
    }
}
int main(){
    char name[30];
    fgets(name,30,stdin);
    name[strcspn(name,'\n')]='\0';
    
    char ss[30];
    fgets(ss,30,stdin);
    ss[strcspn(ss,'\n')]='\0';

    sliceString(name,ss);
}*/