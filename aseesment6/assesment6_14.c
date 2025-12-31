#include <stdio.h>
int main (){
    int x,count =1 ;
    scanf("%d",&x);
    int y = x%10,z=x;
    while(x>10){
        count= count *10;
        x/=10;
    }
    printf("%d",+y*count +((z%count)/10)*10+x);

}