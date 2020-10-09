#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

void order(int key, int *p,int *c)
{   int index;
    if(key>=65 && key <=95)
    {
     index = key-65;
     }
    if(key>=97 && key <=122)
    {
     index = key-71;
     }
   p[index] +=1; 
   c[index] = key;
}
int main(int argc, char * argv[])
{ 
  int ch; 
  static int x =0; 
  static int y =0; 
  int p[52] = {0}; 
  int c[52]; 
  int i;
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
      order(ch,p,c); 
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
   
   fprintf(stdout,"Valid\n"); 
   for(i=0;i<52;i++)
   {
       if(p[i] !=0)
       {

         printf("%c %d\n",c[i],p[i]); 
       }
  
   }
   
  }
  exit(0);
}
