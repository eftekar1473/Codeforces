#include<stdio.h>
 
int main()
{
   int t, n, i, j;
    
    
    scanf("%d",&t);
    
    for(i=0;i<t;i++){
        scanf("%d",&n);
        
     int a[n];
    
        for(j=0;j<n;j++){
        scanf("%d",&a[j]);
        }
        
        int min = a[0];
        int l  = 0;
 
        for(j=1;j<n;j++){
            if(min>a[j]){
            min = a[j];
        }
        }
        for(j=0;j<n;j++){
          l +=  a[j] - min;
        }
        
        
     printf("%d\n",l);
     }
    return 0;
} 
