/*Input : Focus 
3
Output : cusFo*/
#include <stdio.h>
#include <string.h>

int main(){
    char name[30];
    fgets (name,30,stdin);
    name[strcspn(name,"\n")]='\0';
    int n = strlen(name);
    int m ;
    scanf("%d",&m);
    for (int i = n-m ; i<n ;i++){
        printf("%c",name[i]);
    }
    for (int i = 0 ;i<n-m;i++){
        printf("%c",name[i]);
    }
}