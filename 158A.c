#include<stdio.h>
 
int main(){
    int n,i,k,c=0;
    
    scanf("%d %d",&n,&k);
    int a[n];
    for ( i = 1; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    for ( i = 1; i < n; i++)
    {
        if (a[i] >= a[k] && a[i] != 0)
         {
          c++;
       }
    }
     printf("%d",c);
  
   
    
}