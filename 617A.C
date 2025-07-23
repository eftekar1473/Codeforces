#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d", &x);
 
     int rounded_num = ceil(x/5.0);
    printf("%d", rounded_num);
}