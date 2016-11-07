/* 
File name: pointerPract.c 
Author: Summer 
Date: 11/02/16 
Description: A program with a menu that allows the user 
	to print out a pointer value, pointer address, 
	or an integer value of the integer that they 
	input into the program. 
*/ 

#include <stdio.h> 
#include <stdlib.h> 

void main() 
{
   //Create a loop for the user 
   int check = 1; 
   while (check == 1) 
   {
      //Checking for what the user want to do 
      int in = 0; 

      printf("\nPlease enter 1 if you would like to print out your input\n"); 
      printf("Please enter 2 if you would like to print out the pointer value\n"); 
      printf("Please enter 3 if you would like to print out the pointer address\n"); 
      printf("Please enter 0 if you would like to exit the program\n"); 
     
      scanf("%i", &in); 

      //Quit if the value of input is zero 
      if (in == 0) 
      {
         printf("Terminating program.\n"); 
         check = 0; 
      } 
      else if (in == 1 || in == 2 || in == 3)
      { 
         //Get the integer input of the user 
         printf("\nPlease enter an integer value:\n"); 
         int val = 0; 

         //Set the pointer for val 
         int*val_ptr = &val; 
         scanf("%i", val_ptr); 

         if (in == 1) //Print out the integer value 
         { 
            printf("Integer value: %i\n", val); 
         } 
         else if (in == 2) //Print out the pointer address  
         { 
            printf("Pointer address: %p\n", &val_ptr);  
         } 
         else //Print out the pointer value  
         { 
            printf("Pointer value: %p\n", val_ptr); 
         } 
      } 
      else 
      { 
         printf("Input invalid. Terminating program.\n"); 
      } 
   }
}
