#include <stdio.h>
int main(){
    int a,b,c,max,lcm =0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b) max =a ;
    else if (b>c) max =b;
    else max =c ;

    while(max <= a* b*c){
        if (max%a==0 && max%b==0 && max%c==0){
            lcm = max;
            break;
        }
        max++;
    }
    printf("%d",lcm);
}