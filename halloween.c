/* 
File name: halloween.c 
Author: Summer 
Date: 10/31/16 
Description: The user will input a distance 
	The code determines the time it takes a witch 
	who flies at 13 mph but delays by 25 minutes 
	and a ghost who flies at 6 mph to travel that 
	inputted distance. The code also sees if the 
	skeleton will win when it travels at 8 mph 
	with a delay of 9 minutes.  
	Then the program will tell the user which 
	monster wins. 
*/ 

#include <stdlib.h> 
#include <stdio.h> 

float ghost(float dist); 
float witch(float dist); 
float skel(float diist); 

void main() 
{
   //Prompt the user for the distance travelled 
   printf("Please enter a distance the witch and ghost will aim to reach:\n"); 
   float dist = 0; 
   scanf("%f", &dist);
  
   //Printing out the times it takes the monsters 
   printf("\nThe Ghost will take %f hours to travel %f\n", ghost(dist), dist); 
   printf("The Witch will take %f hours to travel %f\n", witch(dist), dist); 
   printf("The Skeleton will take %f hours to travel %f\n\n", skel(dist), dist); 

   //Check who will win 
   if (ghost(dist) >= witch(dist)) 
   {
      if (skel(dist) >= witch(dist)) 
      {
         printf("The Witch will win\n"); 
      } 
      else if (ghost(dist) >= skel(dist)) 
      {
         printf("The Skeleton will win\n"); 
      }
   }
   else 
   { 
      if (ghost(dist) >= skel(dist)) 
      {
         printf("The Skeleton will win\n"); 
      }
      else 
      {
         printf("The Ghost will win\n");  
      }
   } 
}

float ghost(float dist)
{
   float time = 0; 
   time = dist/6; 
   return time; 
}

float witch(float dist) 
{
   float time = 0; 
   time = 0.4166667 + (dist/13); 
   return time; 
}
float skel(float dist) 
{
   float time = 0; 
   time = 0.15 + (dist/8); 
   return time; 
}
