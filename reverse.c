// C program to reverse a number
#include <stdio.h>
 
int main()
{
   int n, reverse = 0,m;
 
   printf("Enter a number to reverse\n");
   scanf("%d", &n);
   m = n;
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }
 
   printf("Reverse of entered number is = %d\n", reverse);
   
   if( m == reverse )
	printf("It is a Palindrome");
   else
	printf("It is not a Palindrome");
       
   
      return 0;
}

