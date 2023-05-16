#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        long long power = 1;
        
        for (int j = 1; j <= i; j++) {
            power *= i;
        }
        
        sum += power;
    }
    
    printf("Sum of the powers from 1 to %d is %lld\n", n, sum);
    
    return 0;
}

