//Program: circle
//Purpose: Reads the radius and computes and prints the diameter, the circumference and the area
//Author: Hatice Kubra Duran
//Date: 13/03/2022


#include <stdio.h>
int main(){
	float r; 
	int diameter, circumference, area;
	const float PI = 3.14159;
	
	printf("Enter the radius :");
	scanf("%f", &r);
	
	diameter = 2 * r;
	circumference = 2 * PI * r;
	area = PI * r * r;
	
	printf("%d\n%d\n%d\n", diameter, circumference, area);
	
	return 0;
}	
