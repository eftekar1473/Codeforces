#include<stdio.h>
 
int main()
{
    int i,t,a, b, c;
    scanf("%d",&t);
    for( i=0; i<t ; i++)
    {
      scanf("%d %d %d", &a, &b, &c);
      
      if( a + b == c) {
          printf("+\n");
          }
          else if ( a - b == c) {
          printf("-\n");
        }
    }
    return 0;
}