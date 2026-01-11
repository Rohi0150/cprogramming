#include <stdio.h>
#include <string.h>

int main(){
    char name[30]= "I AM GOOD";
    int n = strlen(name);
    int min = 0;
    int max = n;
    for (int i = n-1 ; i>=0 ;i--){
        if(name[i]==' '){
            min = i+1;
            max = n;
            for (int j = min ; j<max;j++){
                printf("%c",name[j]);
            }
            n=min-1;
            printf(" ");
        }
    }
    for (int i =0 ;i<n ;i++) printf("%c",name[i]);

}
