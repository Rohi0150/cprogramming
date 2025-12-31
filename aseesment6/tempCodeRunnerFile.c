#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
        if (b==0){
            printf("%d",a);
            break;
        }
    }
}