#include <stdio.h>
void check_prime(){
    int x;
    scanf("%d",&x);
    int flag = 0;
    for (int i =2 ; i<x/2 ; i++){
        if (x%i==0) {
            flag =1 ;
            break;
        }
    }
    if (flag) printf("Not prime");
    else printf("Prime");
}
int main(){
    check_prime();
}