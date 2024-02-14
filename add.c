#include <stdio.h>

int main() {
    int a, b, add;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    add = a + b;
    
    printf("The sum of %d and %d is %d.", a, b, add);
    
    return 0;
}
