/*
Name: Ian Henry Idalinya 
Reg No: CT100/G/26284/25
Description: Password access
*/

#include<stdio.h>
#include<string.h>

int main(){ 
    char password[10];
    char correctPassword[]="1234";
    
    do{
    printf("Enter password");
    scanf("%s", & password);
    
    if(strcmp(password,correctPassword) != 0){
     printf("Incorrect password!Try again. \n");
     }
     
    }while(strcmp(password, correctPassword) != 0);
      printf("Access Granted\n");
      
    return 0;
}