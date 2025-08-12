#include <stdio.h>
#include <math.h>
int main ()

{
int ll, ul;
scanf("%d %d",&ll ,&ul);
int n=ll;
while (n<=ul){
int fact; int div;
fact=0; div=2;
if (n<2){
fact=1;
} else {
while (div<=sqrt(n))
{ if (n%div==0){
fact=1;
break;
}
div++;
}
}
if (fact==0)
printf("%d is prime\n",n);
else
printf ("%d is not Prime\n",n);
n++;

}
return 0;
}
