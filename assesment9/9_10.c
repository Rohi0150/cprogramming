//Get 5 numbers from the user, remove the prime numbers, and create a new array, then print the same
#include <stdio.h>
int main(){
    int n=5,k=0;
    int a[n];
    int b[k];
    for (int i =0 ; i<n ;i++){
        scanf("%d",&a[i]);
    }
    for (int i =0 ; i<n ;i++){
        int flag =0 ;
        for (int j =2 ;j<a[i] ;j++){
            if(a[i]%j==0){
                flag =1;
                break;
            }
        }
        if (!flag ) {
            b[k]=a[i];
            k++;
        }
    }
    for (int i =0 ; i<k ;i++){
        printf("%d",b[i]);
    }
}