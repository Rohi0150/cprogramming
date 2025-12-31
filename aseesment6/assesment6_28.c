#include <stdio.h>
int main(){
    int a,b,lcm =0;
    scanf("%d",&a);
    scanf("%d",&b);
    int max=a>b?a:b;
    while(max=a*b){
        if(max%a==0 && max%b==0){
            lcm = max;
            break;
        }
        max++;
    }
    printf("%d",lcm);
}