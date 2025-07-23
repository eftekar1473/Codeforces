#include <stdio.h>
 
int main() {
    int n;
    int coins[101] = {0};  
    int total = 0;
 
   
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        coins[val]++;     
        total += val;     
    }
 
    int mySum = 0;
    int count = 0;
 
    
    for (int i = 100; i >= 1; i--) {
        while (coins[i] > 0) {
            mySum += i;       
            coins[i]--;       
            count++;          
 
            if (mySum > total - mySum) {
                printf("%d\n", count); 
                return 0;
            }
        }
    }
 
    return 0;
}
