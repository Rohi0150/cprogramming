#include <stdio.h>
#include <string.h>
#include <limits.h>
int myAtoi(char* s) {
    int i =0  ;
    int sign =1  ;
    int data = 0 ;
    while(s[i]==' '){
        i++;
    }
    if(s[i]=='-'){
        sign=-1;
        i++;
    }
    else if(s[i]=='+'){
        sign =1;
        i++;
    }
    while(s[i]>='0'&&s[i]<='9'){
        int digit = s[i]-'0';
        if (data > INT_MAX / 10 ||
           (data == INT_MAX / 10 && digit > 7)) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        data = data *10+ digit ;
        i++;
    }
    return data*sign;
}
int main(){
    char name[30];
    fgets(name,30,stdin);
    name[strcspn(name,"\n")]='\0';
    int my_atoi = myAtoi(name);
    printf("%d",my_atoi);
}