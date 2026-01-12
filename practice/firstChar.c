
#include <stdio.h>
#include <string.h>

int main()
{
    int n ;
    printf("Enter the number of string :");
    scanf("%d ",&n);
    char name[n][30];
    int arr[n];
    for (int i = 0 ; i< n ;i++){
       fgets (name[i],30,stdin);
       name[i][strcspn(name[i],"\n")]='\0';
       arr[i]=strlen(name[i]);
    }
    printf("%c",name[0][0]);
    printf("%c",name[1][0]);
    printf("%c",name[2][0]);
    printf("%c",name[3][0]);
    
    
    return 0;
}