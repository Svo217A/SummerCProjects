/* 
Filename: favAnimal.c 
Author: Summer 
Date: 11/15/16 
Description: This program will ask the user for their 
   favorite number to determine their favorite animal. 
   Then the program will return what their favorite 
   animal is as well as a fun fact. 
*/ 

#include <stdio.h> 
#include <stdlib.h> 

void funFact(char animal[]); 

void main() 
{
   //Declaring variables 
   int favNum = 0; 
   int *num_ptr = &favNum; 
   
   char animal[20] = ""; 
   char *a_ptr = animal; 

   //Get the user's favorite number 
   printf("Please enter your favorite number between 1 and 100, inclusive:\n"); 
   scanf("%i", num_ptr); 
   
   //Return the animal based on the input 
   if (*num_ptr >= 1 && *num_ptr <= 34) 
   { 
      printf("Your favorite animal is a dog.\n"); 
      a_ptr = "dog"; 
   } 
   else if (*num_ptr > 34 && *num_ptr < 66) 
   { 
      printf("Your favorite animal is a frog.\n"); 
      a_ptr = "frog"; 
   } 
   else if (*num_ptr >= 66 && *num_ptr <= 100) 
   { 
      printf("Your favorite animal is a bird.\n"); 
      a_ptr = "bird"; 
   } 
   else 
   {
      printf("Invalid input.\n"); 
   } 
   funFact(a_ptr); 
}

void funFact(char animal[]) 
{ 
   if (animal == "dog") 
   {
      printf("Dogs are in the same species although there are different breeds.\n"); 
   } 
   else if (animal == "frog") 
   { 
      printf("Frogs swallow by blinking their eyes.\n"); 
   } 
   else if (animal == "bird") 
   {
      printf("Birds lived before dinosaurs.\n");  
   } 
   else 
   { 
      printf("No fun fact.\n"); 
   } 
} 
