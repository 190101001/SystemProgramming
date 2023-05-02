//Program: largest_and_smallest
//Purpose: Reads three integers and prints largest and smallest 
//Author: Hatice Kubra Duran
//Date: 13/03/2022

#include <stdio.h>
int main() {
	int x,y,z,largest,smallest;
	
	printf("Enter the first value : ");
	scanf("%d", &x);
	
	printf("Enter the second value : ");
	scanf("%d", &y);
	
	printf("Enter the third value : ");
	scanf("%d", &z);
	
	smallest = x;
	largest = x;
	
	if(smallest > y)
		smallest = y;
	else if(largest < y)
		largest = y;
	
	if(smallest > z)
		smallest = z;
	else if(largest < z)
		largest = z;			
	
	printf("The smallest number is :%d\n",smallest);
	printf("The largest number is :%d\n",largest);
	
	return 0;
}	
