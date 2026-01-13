#include <stdio.h>
#include <string.h>
int vowel(char * s ){
    int n = strlen(s);
    int c =0 ;
    for (int i =0 ;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            c++;
        }
    }
    return c;
}
int main()
{
    char name[30];
    fgets(name, 30 ,stdin);
    name[strcspn(name,"\n")]='\0';
    int count = vowel(name);
    printf("%d",count);
    return 0;
}