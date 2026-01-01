#include <stdio.h>
void check_last_digit_odd(){
    int x;
    scanf("%d",&x);
    int y = x%10;
    int z=x,count=1;
    while(z>10){
        z/=10;
        count=count*10;
    }if(y%2==1)
    printf("%d",(z-1)*count+x%count);
    else printf("%d",x);
}
int main(){
    check_last_digit_odd();
}