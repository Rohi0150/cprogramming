/*Adjust the carry in an integer array. (i.e. convert the 2-digit number into single digits and add the carry to the next number)*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i =0 ;i<n ;i++){
        scanf("%d",&a[i]);
    }
    for (int i =n-1 ;i>0 ;i--){
        int rem = a[i]%10;
        int div = a[i]/10;
        a[i]= rem;
        a[i-1]=a[i-1]+div;
        
    }
    for (int i =0 ;i<n ;i++){
        printf("%d",a[i]);
    }

}