#include <stdio.h>
int main (){
    int x=1;
    while(x<20){
        if(x%2==1 && x>10 ) printf("%d\n",x);
        x+=2;
    }
}