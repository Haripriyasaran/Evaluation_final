<<<<<<< HEAD
#include <stdio.h>
 
void main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n ", n);
    printf("--------------------------\n");
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
            }
=======
#include<stdio.h>
int main()
{
	int num1,num2,product;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	product=num1*num2;
	printf("Product of two numbers: %d",product);
	return  0;
}
>>>>>>> 3c0d633b8067b7530447796b5102bd78fd6ec1b8
