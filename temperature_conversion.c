/*
Name:Ian Henry Idalinya 
Reg no: CT100/G/26284/25
Description: Function to convert Fahrenheit to Celsius 
*/

#include<stdio.h>

//Function to convert Fahrenheit to Celsius
float converttoCelcius(float fahrenheit){
      float celcius;
      celcius= (fahrenheit-32)*5/9;
      return celcius;
}      

int main(){
    float fahrenheit,celcius;
    
    printf("Enter temperature in Fahrenheit ");
    scanf("%f", &fahrenheit);
    
    celcius= converttoCelcius(fahrenheit);
    
    printf("Temperature in celcius: %2.f°C\n", celcius);
    
    return 0;
}