//Simple C program
/*
Name:Ian Henry Idalinya 
Reg:CT100/G/26284/25
Description:Program to compute loan eligibility 
*/

#include<stdio.h>

int main(){

//variable declaration 
int age;
float annualincome;

//prompt the user to display age
printf("Enter your age");
scanf("%d", &age);
    
//prompt the user to display annual income
printf("Enter your annualincome");
scanf("%f", &annualincome);
    
if(age>= 21&& annualincome>= 21000){
printf("Congratulations, you qualify for the loan.\n");
}  
  
else{
printf("unfortunately, we are unable to offer a loan at this time.\n");
}

return 0;
}