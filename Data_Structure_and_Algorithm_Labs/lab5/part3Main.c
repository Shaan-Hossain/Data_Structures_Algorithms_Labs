#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
extern char *pop();
extern void push(char *);
extern void initialize();
extern void add(char * tag);
extern int isEmpty();
extern void print(); 

int main(int argc, char * argv[])
{
  int ch,size;
  char temp2[100];
  char str[100];
  char * s; 
  int i,j;
  initialize();
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/')){
    continue;}
  
    if(ch == '<'){
        ch = getchar();
        if(isalpha(ch)){
            i = 0;
            while (ch != '>') {
                
                str[i] = ch;
                i++;
                ch = getchar();
                
            }
            str[i] = 0;
            size = (i+1)*sizeof(char);
            s = malloc(size);
            strcpy(s,str); 
            push(s);
            add(s);
        }else if(ch == '/'){
            
            j = 0;
            ch = getchar();
            
            while (ch != '>') {
                temp2[j] = ch;
                j++;
                ch = getchar();
                
            }
            temp2[j] = 0;
            size = (j+1)*sizeof(char);
            s = malloc(size);
            strcpy(s,temp2); 
            if(strcmp(pop(),s)!=0){
               printf("Not Valid");
               exit(1);
            }
           else { 
               
             continue; 
                }
        }
    } 

  }
  if(isEmpty() == 0){
      printf("Not Valid\n");
      exit(1);
  }else{
      printf("Valid\n");
      print();
      exit(0);
  }
}