#include <stdio.h>
int main (){
    int x=10;
    int y ,z;
    while(x<=60){
        y = x/10;
        z = x%10;
        if  (z+y==6 && x%2==0) printf("%d\n",x);
        x++;
    }
}