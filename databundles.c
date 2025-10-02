/*
Name: Ian Henry Idalinya 
Reg No: CT100/G/26284/25
Description: Mobile Data Bundle Purchase
*/

#include<stdio.h>

int main(){
    int choice;
    float cost;
    
    //Display data bundles 
    printf("... INTERNET DATA BUNDLES...\n");
    printf("1. 100MB data bundles- 50 KES\n");
    printf("2. 500MB data bundles -200 KES\n");
    printf("3. 1GB data bundles - 350 KES\n");
    printf("4. 2GB data bundles -600 KES\n");
    
    printf("Enter your choice (1-4):");
    scanf("%d", &choice);
    
    if(choice == 1){
      cost=50;
      printf("You selected 100MB data bundles- Cost: KES %.2f\n",cost);
    }  
    else if(choice == 2){
           cost= 200;
       printf("You selected 500MB data bundles- Cost: KES %.2f\n",cost);
    }     
    else if(choice == 3){
          cost= 350;
       printf("You selected 1GB data bundles -Cost: KES %.2f\n",cost);
    }   
    else if(choice == 4){
          cost= 600;
       printf("You selected 2GB data bundles -Cost: KES %.2f\n",cost);
    }   
    else{
       printf("Invalid choice! Please selected a valid bundle option.\n");
    return 0; //End program if invalid option 
    }
    printf("Thank you for purchasing the bundle!\n");
    
    return 0;
    
}