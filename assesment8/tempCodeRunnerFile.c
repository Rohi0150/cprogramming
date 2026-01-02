#include <stdio.h>
int count =1 ;
int disp_reverse_number(int x){
    int temp=x;
    while(temp){
        count=count*10;
        temp/=10;
    }
    count=count/10;
    int rem=0,y=0;
    for (count ; count >=0; count/=10){
        rem = x%10;
        x = x/10;
        y=y+rem*count;
    }
    return y;
}
int main(){
    int x;
    scanf("%d",&x);
    int y = disp_reverse_number(x);
    printf("%d",y);
}