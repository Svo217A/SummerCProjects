/* 
FileName: diceRoll.c 
Author: Summer 
Date: 11/17/16 
Description: The user will input the number of dice 
   that they want to roll. Then the program will 
   print out the rolled values and whether they win 
   the game or not. They will win if the sum of the 
   dice values is greater than four times the number 
   of dice. 
*/ 

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void TossDie(int *ptr, int *num); 

void main() 
{ 
   //Initializing values 
   int num = 0; 
   int *num_ptr = &num; 

   //Array 
   int *dice_ptr; 
   
   //Set the seed 
   srand(time(NULL)); 

   //A loop to go through until the user wins the game 
   int win = 0; 
   while (win == 0) 
   {
      //Get the user's input for the number of dice 
      printf("\nPlease enter the number of dice you want to roll:\n"); 
      scanf("%i", num_ptr); 

      //Allocating the space for the arra 
      dice_ptr = malloc(*num_ptr * (sizeof(*dice_ptr))); 

      //Call the TossDie function  
      TossDie(dice_ptr, num_ptr); 

      //Print out the values of the arra 
      int m = 0; 
      int sum = 0; 
      for (int k = 0; k < *num_ptr; k++) 
      {
         m = k+1; 
         printf("Dice %i: %i\n", m, dice_ptr[k]);  
         sum += dice_ptr[k]; 
      } 

      printf("The sum of the values is %i\n", sum); 
      if (sum > 4*(*num_ptr)) 
      { 
         printf("You Win!!!\n"); 
         win = 1; 
      } 
      else 
      { 
         printf("You Lose :(\n"); 
      } 
      //Freeing the memory 
      free(dice_ptr); 
   }
} 

void TossDie(int *ptr, int *num) 
{ 
   int irand = 0;
   for (int x = 0; x < *num; x++) 
   { 
      irand = (rand()%6) + 1; 
      ptr[x] = irand;  
   }  
} 
