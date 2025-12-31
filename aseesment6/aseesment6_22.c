#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y = x,z=1,count=0,c1=0,flag =1,a;
    while (y>0){
        y/=10;
        z=z*10;
        count++;
    }
    while (count){
        if(flag ==1){
          a= (x/(z/(10*10))) %100;
        flag =0;}
        else{
            a= (x/(z/10)) %100;
        }

        if(a%2==1){
            c1++;
        }
        z/=10;
        count--;
    }
    printf("%d",c1);
}