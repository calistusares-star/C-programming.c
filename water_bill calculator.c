/*
Name:Ian Henry Idalinya 
Reg No:CT100/G/26284/25
Description: Water Bill Calculator 
*/

#include<stdio.h>

#define RATE1 20
#define RATE2 25
#define RATE3 30

int main(){
    int units;
    double bill;
    
    //Prompt user
    printf("Enter  water units consumed:");
    scanf("%d",&units);
   
   // Validate input
    if(units<0){
       printf("Invalid input.Units cannot be negative.\n"); 
       return 1;
    }      
    
    //Calculate bill     
    if(units<=30){
           bill=units*20;
    }       
    else if(units<=60){
         bill=units*25;
    }   
    else{ 
         bill=units*30;
    }     
    //Display results of bill amount
    printf("\n...calculation results... \n");
    printf("Total water bill:%2f ksh\n",bill);
    
    return 0;
    
}