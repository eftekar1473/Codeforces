#include<stdio.h>
int main ()
{ 
	   long long int k,n,w,l,i,count=0 ;
        scanf("%lld %lld %lld", &k, &n, &w);
        
        for(i=1;i<=w;i++)
        {
           count = count + k*i;
        }
        
         l=count-n;
         if (count < n)
         {
            printf("0");
        } else{
          printf("%lld",l);
        }
         
          return 0;
        
         }