/*
Name:Ian Henry Idalinya 
Reg no: CT100/G/26284/25
Description: Function to calculate Electricbill
*/

#include<stdio.h>

float calculateElectricBill(int units){
      float bill=0;
      
      if (units<=100){
      bill=units*10;
      }
      else if(units<=200){
      bill=(100*10)+((units-100)*15);
      }
      else{
      bill=(100*10)+(100*15)+((units-200)*20);
      }
      
      return bill;
      
}      

int main(){
    int units;
    float totalBill;
     
    printf("Enter the number of units consumed ");
    scanf("%d",&units);
    
    totalBill= calculateElectricBill(units);
    
    printf("Total ElectricBill: KSHS. %.2f/n",totalBill);
    
    return 0;
}