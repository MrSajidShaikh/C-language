#include <stdio.h>
main() 
{
    float base, height, area;
    
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("\nEnter the height of the triangle: ");
    scanf("%f", &height);
    
    area = (base * height) / 2;
    printf("\nThe area of the triangle is: %.2f\n", area);
    
}