#include <stdio.h>
#include <string.h>

int main()
{
    char name [30]= "I am Santhosh";
    int  n = strlen(name);
    int m =0;
    for (int i =n-1 ;i>=0;i--){
        if(name[i]==' '){
            m = i+1;
            break;
        }
    }
    for (int i =m  ;i<n;i++){
        printf("%c",name[i]);
    }
    return 0;
}