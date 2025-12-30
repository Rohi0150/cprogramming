#include <stdio.h>
int main(){
     /*1. Write a program to print 1 to 5 on one by one 
    for (int x=1 ; x<=5;x++){
        printf("%d\n",x);
    }*/
    /*2. Write a program to print 1 to 5 on one by one 
    for (int x=5 ; x>=1;x--){
        printf("%d\n",x);}
    */
   //3.Write a loop program to print the sum from 1 to 5
   /*int x,sum=0;
   x=5;
   for (int i = 1 ; i<=x ;i++){
    sum= sum +i;
   }
   printf("%d",sum);*/
   /* 4. Write a program to print the sum of nukbers from 6 to 1
   int x ,sum =0;
   for (x=6;x>=1;x--){
    sum = sum +x;

   }
   printf("%d",sum);*/
   /*5.Write a program to print the odd nu,bers upto 10
   for (int x= 1 ; x<10 ;x+=2)printf("%d\n",x);*/

   /*6.Write a loop program to print the two-digit odd numbers, below 20.
   for (int x=11 ;x<20;x+=2){
    printf("%d\n",x);
   }*/
  /*7.Write a loop program to print the two-digit odd numbers, who's sum of digits are 7.
  int y ,z;
   for (int x = 10; x<70 ;x++){
    y = x/10;
    z = x%10;
    if ( z+y==7 && z%2==1 ){
        printf("%d\n",y*10+z);
    }
   }*/
   /*8.Write a loop program to print the two-digit even numbers, who's sum of digits are 6.
   int x,y,z;
   for (x=10;x<=60;x++){
    y= x/10;
    z= x%10;
    if ( y+z==6 && z%2==0){
        printf("%d\n",y*10+z);
    }
   }*/
  /*9.Write a loop program to print the sum of two-digit numbers whose one's digit is 5.
  int y,sum=0;
  for (int x =10;x<100;x+=5){
    y = x%10;
    if (y==5)
    sum = sum +x;
  }
  printf("%d",sum);*/
  /*10.Write a loop program to print the sum of two-digit odd numbers, whose ten's digit is 7.
  int sum =0;
  for (int x = 70 ; x<=79;x++){
    if(x%2==1){
        sum = sum + x;
    }
  }
  printf("%d",sum);*/
  /*11.Write a program to get a number from user print the total number of digits in that number.
  int x,count=0;
  scanf("%d",&x);
  for (x ; x>0 ;x/=10){
    count++;
  }
  printf("%d",count);*/
  /*12.Write a program to get a number from user and print the sum of all digits.
  int x,y,sum=0;
  scanf("%d",&x);
  for(x ;x>0; x/=10){
    y =  x%10;
    sum = sum + y;
  }
  printf("%d",sum);*/
  /*13.Write a program to get a number from user and print the reverse of that number.
  int x,y;
  scanf("%d",&x);
  for (x;x>0;x/=10){
    y = x%10;
    printf("%d",y);
  }*/
 /*14.Write a program to get a number from user and interchange the first and last digits and print the result.
 int x ,a=1;
 scanf("%d",&x);
 int y =x;
 int z = x%10;
 for(x;x>=10;x/=10){
    a=a*10;
 }
   int m = (y)%a/10;
   printf("%d",a*z+m*10+x);*/

   /*15.Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd, then subtract 1 from the last digit and print the number.
   int x,a=1,c=0;
   scanf("%d",&x);
   int y = x%10;
   int z = x;
   for (x;x>10;x/=10){
    a=a*10;
    c++;
   }
   if (y%2==0) printf("%d",z);
   else printf("%d",(x-1)*a+z%a);*/
/*16.Write a program to check if a number is prime
   int x ,flag =0;
   scanf("%d",&x);
   for (int i = 2 ; i<x/2 ; i++){
    if(x%i==0){
      flag=1;
      break;
    }
    
   }
   if (flag ==1 ) printf("Not prime");
   else printf("prime");*/

   /*17.Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14
   int x,flag =0;
   scanf("%d",&x);
   for (int i = 2 ; i< x ; i++){
    if (x%i==0) flag =1; 
   }
   int y = x/10;
   int z = x%10;
   if((y+z)==14&& flag ==0){
    printf("prime & Sum of digit is 14");
   }
   else if ((y+z)==14&& flag ==1)
    printf("Not prime but, Sum of digit is 14");
   else if ((y+z)!=14&& flag ==1)
    printf("Not prime and Sum of digit is not 14");
   else 
    printf("Prime and Sum of digit is not 14");*/
  /*18.Write a program to get number from user, print whether that number's first two digits (ten's digits and one's digit) is prime.
  int x,flag =0 ;
  scanf("%d",&x);
  int y = x%100;
  for (int i =2 ; i<x/2 ; i++ ){
    if (x%i==0) {
      flag =1;
      break;
    }
  }
  if (flag ==1) printf("Not a prime number");
  else printf("Prime");*/
  /*19.Write a program to get a 4-digit number from user, print whether that number's middle two digits (hundred's digit and ten's digit) is prime.
  int x,flag=0;
  scanf("%d",&x);
  int y =(x/10)%100;
  for (int i =2 ; i<y/2 ; i++ ){
    if (y%i==0) {
      flag =1;
      break;
    }
  }
  if (flag ==1) printf("Not a prime number");
  else printf("Prime");*/
  /*20.Write a program print total number of single digit Prime numbers
  int sum =0,flag ,count ;
  for (int x = 2 ; x< 10 ; x++){
    for (int i = 2 ; i<x ;i++){
       flag =0;
      if (x!=i && x%i==0){
        flag =1;
        break;
      }
    }
    if (flag ==1 ) ;
    else count++;
  }
  printf("%d",count);*/

  /*21.Write a program get number from user print the total number digits which are odd in the number.
  int x ,y,count =0 ;
  scanf("%d",&x);
  for (x ; x>0 ;x/=10)
  {
    y = x%10;
    if (y %2==1)count++;

  }
  printf("%d",count);
  */
 /*22.Write a program get number from user print the total number of two-digit odd numbers in the number.
 int x ,y,count=0;
 scanf("%d",&x);
 for (x; x>0;x/=10){
  y = x%10;
  if (y%2==1) count++;
 }
 printf("%d",count-1);*/
 /*23.Write a program get number from user print the total number of single-digit perfect square numbers in the number.
  int x,count =0 ;
  scanf ("%d",&x);
  for (x ; x>0;x/=10){
    int y = x%10;
    if (y == 1 ||y == 4 ||y==9){
      count ++;
    }
  }
  printf("%d",count);*/
  /*24.Write a program get number from user print the total number of two-digit perfect square numbers in the number
  int y,x ;
  scanf("%d",&x);
  int z = x,count =1;
  for (x; x>10 ;x/=10){
    count = count *10;
  }
  int m =count /10;
  int l, c=0 ;
  for (int i =1 ; i<10;i++){
    y=i*i;
    for(l = 1; l<=m ;l=l*10){
        if (y==(z/(m/l))%100) c++;
    }
  }
  printf("%d",c);*/

  /*25.Write a program get number from user print the total number of single-digit prime numbers in the number.
  int x,flag;
  scanf("%d",&x);
  int y,count=0;
  for (x; x>0 ; x/=10){
    y = x%10;
    if (y==1) continue;
    for (int i =2 ; i < y ;i++){
      flag =0;
      if(y%i==0 ){
        flag =1;
        break;
      } 
    }
    if (flag == 1 ){;
    }
    else {count++;
    printf("%d",count;)}
  }*/
 /*26.Write a program to print biggest 4-digit number which is divisible by 7 and 9.
 for (int i = 9999; i>=1000 ;i--){
  if (i%7==0 && i%9==0){
    printf("%d",i);
    break;
  }
 }*/

 /*27.Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.
 int x ,sum ,count=0 ;
 for (int i = 1 ; i<99999;i++){
  x=i;
  sum =0 ;
  for (;x>0;x/=10){
    sum = sum+(x%10);
  }
  if (sum == 14){
    count++;
  }

 }
 printf("%d",count);
  */
    /*28.Write a program to get two numbers from user and print the LCM of those numbers.
    int x,y,z,lcm;
    scanf("%d",&x);
    scanf("%d",&y);
    z= (x>y)?x:y;

    for (int i = z ; i<=x*y ;i++){
      if(i%x==0 && i%y==0 ){
        lcm = i;
        break;
      }
    }
    printf("%d",lcm);
    */
   /*29.Write a program to get three numbers from user and print the LCM of those numbers
   int x,y,z,max,lcm =0;
   scanf("%d",&x);
   scanf("%d",&y);
   scanf("%d",&z);
   if(x>y&& x>z) max = x;
   else if (y>x && y>z) max = y;
   else max = z;

   for (int i =max ; i< x*y*z ; i++){
    if (i%x==0 && i%y==0 && i%z==0){
      lcm =i;
      break;
    }
   }
   printf("%d",lcm);*/
   /*30.Write a program to get two numbers from user and print the HCF of those numbers*
   int x,y,lcm=0;
   scanf("%d",&x);
   scanf("%d",&y);
   int max = x>y ? x:y;
   for (int i =max ; i<= x*y ;i++ ){
    if(i%x==0 && i%y==0){
      lcm =i;
      break;
    }
   }
   int gcd = x*y /lcm;
   printf("%d",gcd);
*/

}