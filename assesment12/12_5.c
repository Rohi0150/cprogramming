#include <stdio.h>
#include <string.h>

void getnumbers(char * num1,char * num2){
    
    fgets(num1,51,stdin);
    num1[strcspn(num1,"\n")]='\0';
    
    fgets(num2,51,stdin);
    num2[strcspn(num2,"\n")]='\0';
}
void mul(char * num1,char * num2,int * result){
    int n1 = strlen(num1);
    int n2 = strlen(num2);
    for (int i = n1 -1 ; i>=0 ;i--){
        for(int j = n2 -1 ;j>=0 ;j--){
            int prod = (num1[i]-'0')*(num2[j]-'0');
            int sum = prod +result[i+j+1];
            result[i+j+1]=sum%10;
            result[i+j]= result[i+j]+sum/10;
        }
    }
}
void print(int * result,int size ){
    int i =0 ;
    while (i<size && result[i]==0) i++;
    if(i==size){
        printf("0");
        return;
    }
    while (i < size)
        printf("%d", result[i++]);
    
}
int main()
{
    char num1[51];
    char num2[51];
    int result[102]={0};
    getnumbers(num1,num2);
    mul(num1,num2,result);
    print(result,strlen(num1)+strlen(num2));
    return 0;
}