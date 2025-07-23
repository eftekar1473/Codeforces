#include<stdio.h>
int main()
{
   long long int n,m,a,k,l;
 
    scanf("%lld %lld %lld", &n, &m, &a);
    if (n % a!= 0)
    {
    k = (n/a) + 1;
        
    } else {
        k = n/a;
    }
 
    if (m % a != 0)
    {
      l = (m/a) + 1;
    } else {
        l = m/a;
    }
    
     printf("%lld", k*l);
}