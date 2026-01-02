/*
 * Question 9: Write a program to get two numbers from user and 
 * print the LCM of those numbers.
 * Function Name: disp_LCM2
 */
#include <stdio.h>
int max(int x , int y){
    int z= (x>y)? x: y;
    return z;
}
int disp_LCM2(int x,int y){
    int z= max(x,y);
    for (z; x*y ;z++){
        if (z%x==0 &&z%y==0){
            return z;
            break;
        }
    }
}
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int z = disp_LCM2(x,y);
    printf("%d",z);
}