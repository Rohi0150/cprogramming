
#include <stdio.h>
#include <string.h>
int main()
{
    char name[30]="optos";
    int n = strlen(name);
    char ch;
    int flag =0 ;
    for (int i = 0 ;i< n-1 ;i++){
        for (int j = 0 ;j<n ;j++){
            if (i !=j && name[i]==name[j]){
                flag = 0;
                break;
            }
            else {flag =1 ;
            }
        }
        if(flag) {printf("%c",name[i]);break;}
    }
    if (!flag) printf("No non rep char");
}