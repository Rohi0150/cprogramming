#include<stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    int y = x%10,z,count=1,a=x;
    while (x>10){
        z=x%10;
        x=x/10;
        count*=10;
    }
    if (y%2==1){
    printf("%d",(x-1)*count+((a%count)/10)*10+y);
    }else
    printf("%d",a);
}