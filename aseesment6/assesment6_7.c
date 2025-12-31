#include <stdio.h>
int main (){
    int y =11;
    int z , a;
    while(y<70){
        z = y%10;
        a = y/10;
        if (a+z==7 && y%2==1){
            printf("%d\n",y);
        }
        y++;
    }
}