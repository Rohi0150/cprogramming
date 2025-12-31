#include <stdio.h>
int main () {
	int x=2;
	int i,flag,count=0;
	while (x<10) {
		flag=0;
		i=2;
		while (x>i) {
			if(x%i==0) {
				flag =1 ;
				break;
			}
			i++;
		}
		if(!flag) {
			count = count +1;
		}
		x++;
	}
	printf("%d",count);
}