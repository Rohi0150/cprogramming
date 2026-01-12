
#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    fgets (name,30,stdin);
    name[strcspn(name,"\n")]='\0';
    
    char sub[30];
    fgets (sub,30,stdin);
    sub[strcspn(sub,"\n")]='\0';
    
    int n = strlen(name);
    int m = strlen(sub);
    int j = 0;
    int flag = 0;
    int count = 1;
    int x = 0;
    for (int i = 0;i<n ;i++){
        if(name[i]==sub[j]){
            if(count){
                x=i;
                count--;
            }
            j++;
            if (sub[j]=='\0'){
                flag =1;
                break;
            }
        }
        
    }
    if(flag == 1){
        printf("%d",x);
    }
    return 0;
}