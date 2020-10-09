#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();
int main(int argc, char * argv[])
{ 
  int ch; 
  static int x =0; 
  static int y =0; 
  int temp = -99; 
  while ((ch = getchar()) != EOF) {
    if 	(!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
     {
      continue;
     }
    if((char)temp == '<')
     { x++; 
       if(isalpha(ch))
      {
      push(ch); 
      }
      
     }
   if((char)temp == '/')
     {
   
      if (pop() != ch)
   {
       fprintf(stdout,"Invalid"); 
       exit(1); 

   } 

     }
   if((char)ch== '>')
   {
    
    y++; 
   }
    
    temp = ch; 
    
  }
 if(!(isEmpty())|| !(x==y))
  {
   fprintf(stdout,"Invalid"); 
   exit(1); 
  }
  else

  {
   fprintf(stdout,"Valid"); 
  }
  exit(0);
}
