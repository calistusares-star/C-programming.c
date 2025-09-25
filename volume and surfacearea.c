//Simple C program 
/*
Name: Ian Henry Idalinya 
Reg: CT100/G/26284/25
Description: Area of a circle
*/
#include<stdio.h>
#define PI 3.1416 //Define value of r

int main(){
    float radius, height, volume, surfacearea ;
    
    //Prompt user for input
    printf("Enter the radius of the cylinder");
    scanf("%f",& radius);
    
    printf("Enter the height of the cylinder");
    scanf("%f", & height);
    
    //Calculate volume and surface area 
    volume=PI *radius*radius*height;
    surfacearea= 2*PI*radius*radius + 2*radius*height;
    
    //Display results
    printf("Volume of the cylinder=%.2f\n", volume);
    printf("Surface area of the cylinder=%.2f\n", surfacearea);
    return 0;
}