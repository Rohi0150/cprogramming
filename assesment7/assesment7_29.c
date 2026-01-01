#include <stdio.h>
void disp_lcm3(){
    int x,y,z,lcm=0;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int max;
    if (x>y && x>z) max =x;
    else if (y>x&&y>z) max =y;
    else max =z;
    for (max ; max <=x*y*z;max++){
        if(max%x==0 && max%y==0 && max%z==0 ){
            lcm = max;
        }
    }
    printf("%d",lcm);
}
int main(){
    disp_lcm3();
}
