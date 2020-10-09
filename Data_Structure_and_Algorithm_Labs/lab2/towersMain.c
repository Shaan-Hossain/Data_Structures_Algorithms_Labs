#include <stdlib.h>
#include "towers.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int n =3;   
    int from = 1; 
    int dest = 2; 
    int i = 0;
    if(argc > 4)
{  
   fprintf(stderr,"Invalid input(Too many arguments)" );
   exit(0); 
} 
for (i = 0; i<argc; i++) 
{
  if(atoi(argv[i]) < 0)
   {
      fprintf(stderr,"Invalid input(Negative)");    
      exit(1);
   }  
}
if (argc > 1) {
        n = atoi(argv[1]);
if (argc > 2) 
    {
     from = atoi(argv[2]);  
     dest = atoi(argv[3]) ;  
     } 

    }  
if(from!=dest && ((from==1) || (from == 2) || (from ==3))&&(dest==1)|| (dest==2)|| (dest ==3)) 
{
 towers(n,from,dest); 
}
 
  exit(0);
}

