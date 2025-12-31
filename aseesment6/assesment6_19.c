#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int y = (x%1000)/10;
    int flag =0,i =2;
    while(i!=y){
        flag =0 ;
        if (y%i==0){
            flag =1 ;
            break;
        }
        i++;
    }
    if (flag) printf("Not prime");
    else printf("Prime");
}