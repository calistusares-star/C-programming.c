/*
Name: Ian Henry Idalinya 
Reg no: CT100/G/26284/25
Description:Arrays:Hotel tracker
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   //---1D Array: Weekly Revenue Tracker 
    float revenue[7];
    float total=0 ,average; 
    
    printf("---Weekly Revenue Tracker---");
    for(int i = 0; i < 7; i++){
        printf("Enter revenue for day %d:", i+1);
        scanf("%f",&revenue[i]);
        total += revenue[i];
    }    
        average =total/7.0;
        
        printf("\n Total weekly revenue: %2.f\n",total);
        printf("Average daily income: %2.f\n\n",average);
        
   //---2D Array: Room Occupancy for one Branch 
        int occupancy[5][10];
        int occupied, vacant;
        
        printf("---Room Occupancy (One Branch)---\n");
        srand(time(0)); //Seed random number generator 
        
        for(int floor = 0; floor < 5; floor++){
           occupied=0;
           vacant=0;
           for(int room = 0; room < 10; room++){
              occupancy[floor][room] = rand() % 2 ;//Randomly assign 0 or 1
           if (occupancy[floor][room] == 1)
                  occupied++;
           else
                 vacant++;
           }    
           printf("Floor %d -> Occupied: %d | Vacant %d\n",floor+1, occupied,vacant);  
        }   
        
   //---3D Array: Multiple Branches--- 
   int chain[3][5][10];
   int totalOccupied=0;
   
   printf("\n&---Occupancy Across All Branches---\n");
   for( int branch =0; branch <3; branch++){
        int branchOccupied =0 ;
        for(int floor=0; floor<5;floor++){
           for(int room=0; room<10;room++){
          chain[branch][floor][room]=rand() % 2;
        if (chain[branch][floor][room] == 1)
                branchOccupied++; 
           }     
        }   
        printf("Branch %d -> Occupied rooms ,%d\n",branch +1, branchOccupied);
        totalOccupied += branchOccupied;
   }   
   
   printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);
   
    return 0;
}