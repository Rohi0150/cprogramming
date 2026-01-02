/* LCM of Three Numbers

Question: Write a program to get three numbers from the user and print the LCM of those numbers.

Function Name: disp_LCM3.*/
#include <stdio.h>
int max(int x , int y,int z){
    int a ;
    if(x>y && x>z)a=x;
    else if (y>z && y>x) a=y;
    else a=z;
    return z;
}
int disp_LCM3(int x,int y,int z){
    int a= max(x,y,z);
    for (a; x*y*z ;a++){
        if (a%x==0 &&a%y==0 && a%z==0){
            return a;
            break;
        }
    }
}
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int a = disp_LCM3(x,y,z);
    printf("%d",a);
}