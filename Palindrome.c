#include <stdio.h>
int main ()
{
int n, reversed=0, temp, digit;
scanf("%d",&n);
temp=n;
while (temp!=0) {
digit= temp% 10;
reversed=reversed*10+ digit;
temp/=10;
}
if(n==reversed)
   printf ("Palindrome\n");
else
   printf ("NOt a  plaindrome\m");
return 0;
}
