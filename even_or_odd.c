//Program: even_or_odd
//Purpose: Reads an integer and determines and prints whether it's even or odd
//Author: Hatice Kubra Duran
//Date: 13/03/2022

#include <stdio.h>
int main(){
	int number;
	printf("Enter a number :");
	scanf("%d", &number);
	
	if(number %2 == 0)
		printf("%d is even\n", number);
	else
		printf("%d is odd\n", number);
	return 0;
}			
