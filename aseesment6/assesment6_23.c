#include<stdio.h>
int main() {
	int x,y,c=1,count=0;
	scanf("%d",&x);
	while (x) {
		y=x%10;
		while (y<10) {
			if(y==c*c) {
				count++;
				break;
			}
			else if(c>3) {
				c=1;
				break;
			}
			else {
				c++;
			}
		}
		x/=10;
	}
	printf("%d",count);
}