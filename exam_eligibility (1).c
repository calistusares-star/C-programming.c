/*
Name:Ian Henry Idalinya 
Reg No: CT100/G/26284/25
Description: Exam eligibility 
*/

#include<stdio.h>

int main(){
    float attendance, average_marks;
    
    printf("Enter attendance percentage");
    scanf("%f", & attendance);
    
    printf("Enter average_marks");
    scanf("%f", & average_marks);
    
    if(attendance>=75 && average_marks>=40){
    
    printf("Eligible\n");
    }else{
    printf("Not eligible \n");
    }
    return 0;
}