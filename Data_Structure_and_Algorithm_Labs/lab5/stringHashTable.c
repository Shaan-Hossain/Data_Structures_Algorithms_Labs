//  
//
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char * string;
  int count; 
};
Entry hash_table[HASH_TABLE_SIZE];
int i;
void initialize()
{

 for (i = 0; i < HASH_TABLE_SIZE; i++)
  { 
    hash_table[i].count = 0;
    hash_table[i].string = malloc(sizeof(char *));
    hash_table[i].string = NULL;
    
  }


}
void print()
{

  for (i=0; i<HASH_TABLE_SIZE;i++)
    {
       if (hash_table[i].count !=0)
       printf("%d  %s\n", hash_table[i].count,hash_table[i].string); 

     }




}
void add(char * tag)
   {  int sum=0;
      int index;
     for (i=0; i<strlen(tag);i++)
    {
       sum += (int)tag[i];

    }
   
   index = sum%HASH_TABLE_SIZE;
   if (hash_table[index].string ==NULL || strcmp(hash_table[index].string,tag) ==0 )
   {
      hash_table[index].string = tag;
      hash_table[index].count +=1;
      
   }
   else 
   {
      for (i = 0; i < HASH_TABLE_SIZE; i++)
        {
          if((index + i) > 1056)
         {

            index =0;
            i=0;
         }
     if (hash_table[index+i].string == NULL||strcmp(hash_table[index+i].string,tag) ==0)
         {
            
           hash_table[index+i].string = tag;
           hash_table[index+i].count +=1;
           break;    
         }

         }

   }
  
}
