//Simple C program (Hello C), Single line comment 
/*
Name:Ian Idalinya 
Reg: CT100/G/26284/25
Description: Hello.C
*/

#include<stdio.h>//pre-processor directive scanf ()

//main function 
int main(){
int age;
int height;
int phonenumber;
int weight;
    printf("1.Enter your age:");
    scanf("%d",& age);
    printf("Your age is %d.\n",age);
    
    printf("2.Enter your height:");
    scanf("%d",& height);
    printf("Your height is %d.\n",height);
    
    printf("3.Enter your phonenumber:");
    scanf("%d",& phonenumber);
    printf("Your phonenumber is%d.\n", phonenumber);
    
    printf("4.Enter your weight:");
    scanf("%d",& weight);
    printf("Your weight is%d.\n",weight);
    return 0;
}