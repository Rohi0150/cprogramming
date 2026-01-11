
#include <stdio.h>
#include <string.h>

int main()
{
    char name [100]="jananijamunakarthikaakanigasreekavipriyakavyadharshini";
    int count = 0;
    int inc=1;
    char sam;
    int n = strlen(name);
    for (int i =0 ;i<n ;i++){
        inc =1 ;
        for (int j =i+1 ; j<n;j++){
            if (name[i]==name[j]){
                inc++;
                if (inc>count){
                    count = inc ;
                    sam=name[i];
                }
            }
        }
    }
    printf("%d",count);
    printf("%c",sam);
    return 0;
}