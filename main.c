#include <stdio.h>
#include <math.h>

char simple(int n)
{
    char simple=1;
    for(int i=2;i<=sqrt(n);i++)
        if ((n%i) == 0) {simple=0; break;}
    return simple;
}

int main()
{
    int n;
    do
     {
      printf("Enter integer number in range (0-100000) =\n");
      scanf("%d", &n);
     } while ((n<0) || (n>100000));

    if (simple(n)==1) printf("Number is simple \n");
    else printf("Number is not simple \n");

    return 0;
}
