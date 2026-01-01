#include <stdio.h>
void disp_odd(){
    int x=1 ;
    for (x; x<10;x+=2){
        printf("%d\n",x);
    }
}
int main(){
    disp_odd();
}