/* 
File name: crapsSim.c 
Author: Summer 
Date: 10/24/16 
Description: This code simulates a gme of craps 
	The user will run it to roll two dice 
	Then the value of the two dice will be 
	added together and analyzed per the 
	rules of the game. 
	After analysis, the user may win, lose 
	or roll again. 
*/ 

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <ctype.h> 

void main() 
{
   //Create the seed for the random number generator 
   srand(time(NULL)); 

   //Create a save variable where the bets will accumulate based on wins and losses
   int save = 0; 
   
   //Loop to conduct the simulation until they enter an invalid input
   int j = 1; 
   while (j == 1) 
   {
      //Prompt the user for their bet 
      printf("\nPlease enter how much you want to bet (Without the dollar symbol):\n"); 
      char bet[10]; 
      scanf("%s", bet); 

      //Variable for whether the user will roll the dice  
      int t = 1; 

      //Check if the input is a number 
      int k; 
      k = isdigit(bet[0]); 
       
      if (k != 0) 
      {
          printf("Rolling dice\n");   
      }
      else 
      {
         printf("Input invalid\n"); 
         j = 0; 
         t = 0; 
      }
      if (t == 1) 
      { 
         //Variable for if the user rolls a point 
         int l = 0; 
 
         //Rolling dice 
         int dieOne = 1+(rand()%6);  
         int dieTwo = 1+(rand()%6); 
         printf("Value one: %i  Value two: %i\n", dieOne, dieTwo); 
      
         //Checking the sum and result 
         int sum = dieOne + dieTwo; 
         if (sum == 7 || sum == 11)
         {
            printf("You win!\n"); 
            save += atoi(&bet[0]);  
            printf("Amount of Money: %i\n", save); 
         }
         else if (sum == 2 || sum == 3 || sum == 12) 
         {
             printf("You lose!\n"); 
             save -= atoi(&bet[0]); 
             printf("Amount of Money: %i\n", save); 
         } 
         else 
         {
            printf("Your value is a point\n"); 
            l = 1; 
         }
         
         while (l == 1) 
         {
            dieOne = 1+(rand()%6); 
            dieTwo = 1+(rand()%6); 
            int point = sum; 
            sum = dieOne + dieTwo; 

            if (sum == point) 
            {
               printf("Value one: %i  Value two: %i\n", dieOne, dieTwo); 
               printf("You Win!\n"); 
               l = 0; 
               save += atoi(&bet[0]); 
               printf("Amount of Money: %i\n", save); 
            } 
            else if (sum != 7) //If the value is not the same as the point or 7, roll again 
            {
               printf("Value one: %i  Value two: %i\n", dieOne, dieTwo); 
               printf("\nRolling again\n"); 
            }
            else if (sum == 7)  
            {
               printf("Value one: %i  Value two: %i\n", dieOne, dieTwo); 
               printf("You Lose!\n"); 
               l = 0; 
               save -= atoi(&bet[0]); 
               printf("Amount of Money: %i\n", save); 
            }
         }
         printf("\nIf you would like to quit, type 'Quit'\n"); 
      }
   }  
}
