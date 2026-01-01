#include <stdio.h>
void middle_2digits_prime(){
    int x;
    scanf("%d",&x);
    int y = (x/10)%100;
    int flag =0 ;
    for (int i =2 ; i<y/2;i++){
        if (y%i==0){
            flag =1 ;
            break;
        }
    }
    if (!flag) printf("Prime");
    else printf("Not prime");
}
int main(){
    middle_2digits_prime();
}