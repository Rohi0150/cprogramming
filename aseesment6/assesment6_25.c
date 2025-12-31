#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y =x,z,flag =0,count=0;
    while (y){
        z=y%10;
        y/=10;
        if(z<2) continue;
        int i =2;
        while(i<z){
            flag=0;
            if(z%i==0){
                flag =1;
                break;
            }
            i++;
        }
        if(!flag) count ++;
    }
    printf("%d",count);
}