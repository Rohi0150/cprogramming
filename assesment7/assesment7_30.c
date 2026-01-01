#include <stdio.h>
void disp_hcf2(){
    int x,y,lcm=0;
    scanf("%d",&x);
    scanf("%d",&y);
    int max= (x>y) ?x:y;
    for (max ; max <=x*y;max++){
        if(max%x==0 && max%y==0 ){
            lcm = max;
            break;
        }
    }
    int hcf = x*y/lcm;
    printf("%d",hcf);
}
int main(){
    disp_hcf2();
}
