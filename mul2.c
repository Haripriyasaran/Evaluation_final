#include<stdio.h> 
int main() 
{ 
	//Illustrating multiplication of two numbers using array 
	int arr[100]; 
	int i,a,b; 
	for(i=0;i<100;i++) 
	{ 
		arr[i]=i+1; 
	} 
	printf("Which two elements of the array do you need to multiply?\n"); 
	scanf("%d%d",&a,&b); 
	printf("\nMultiplication of %d and %d : %d",a,b,(arr[a-1]*arr[b-1])); //since array index starts at 0 (Here 1st element refers to 0th index) 
	return 0; 
} 