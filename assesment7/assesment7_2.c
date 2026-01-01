#include <stdio.h>
void disp_descend(){
    int x= 5;
    while (x){
        printf("%d\n",x);
        x--;
    }
}
int main(){
    disp_descend();
}