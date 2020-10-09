#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct State 
{ 
  char name;  
  struct State *nextState0; 
  struct State *nextState1;
  int id; 
};
char letter(int index)
{ switch(index)
   {
                      case 0 :
                        return 'A';
                       
                      case 1 :
                        return 'B';
                      
                      case 2 :
                        return 'C';
                      case 3 :
                        return 'D';
                      case 4 :
                        return 'E';
                      case 5 :
                        return 'F';
                      case 6 :
                       return 'G';
                      case 7 :
                       return 'H';
                      default :
                        return 'x'; 
                   }

}

int idLetter(char letter) {
	switch(letter)
   {
                      case 'A' :
                        return 0;
                       	
                      case 'B' :
                        return 1;
                      
                      case 'C' :
                        return 2;
                      case 'D' :
                        return 3;
                      case 'E' :
                        return 4;
                      case 'F' :
                        return 5;
                      case 'G' :
                       return 6;
                      case 'H' :
                       return 7;
                      default :
                        return 9; 
                   }

}
void checkStates(int *found, struct State *currentState)
{

 if(found[currentState->id] == 0)
  {
    found[currentState->id] = 1;
  } 
 else
  {      
   return; 
  } 
 checkStates(found, (currentState->nextState1));
 checkStates(found, (currentState->nextState0));
}

int main(int argc, char * argv[]) 
   
{  struct State A; 
   struct State B; 
   struct State C; 
   struct State D; 
   struct State E; 
   struct State F; 
   struct State G; 
   struct State H; 
   struct State *arr[8];
   int found[8] = {0,0,0,0,0,0,0,0};
   int deleted[8] = {1,1,1,1,1,1,1,1};
   int i;
   arr[0] = &A;
   arr[1] = &B;
   arr[2] = &C;
   arr[3] = &D;
   arr[4] = &E;
   arr[5] = &F;
   arr[6] = &G;
   arr[7] = &H;
   int sum;
   A.name = 'A'; 
   B.name = 'B'; 
   C.name = 'C'; 
   D.name = 'D'; 
   E.name = 'E'; 
   F.name = 'F'; 
   G.name = 'G';
   H.name = 'H'; 
   A.id = 0; 
   B.id = 1; 
   C.id= 2; 
   D.id = 3; 
   E.id = 4; 
   F.id = 5; 
   G.id= 6;
   H.id = 7; 
   A.nextState0 = &E; 
   A.nextState1 = &H;
   B.nextState0 = &F;
   B.nextState1 = &E;
   C.nextState0 = &C;
   C.nextState1 = &B;
   D.nextState0 = &C;
   D.nextState1 = &A;
   E.nextState0 = &F;
   E.nextState1 = &G;
   F.nextState0 = &D;
   F.nextState1 = &A;
   G.nextState0 = &H;
   G.nextState1 = &C;
   H.nextState0 = &G;
   H.nextState1 = &D;
   struct State *currentState;
   currentState = &D; 
   printf("current state: %c\n", (currentState->name));  
     while(1)
{       
        char argument[20];
        gets(argument);
        if (argument[0] == '0'){
        printf("Next state: %c \n",(currentState->nextState0->name));
        currentState = (currentState->nextState0);
        }
        if(argument[0] == '1')
        {
           printf("Next state: %c \n",(currentState->nextState1->name));
           currentState = (currentState->nextState1);
        } 
        if (argument[0] == 'p'){
            for(i =0; i<8;i++)
           {
             if(deleted[i] ==1) 
              {
               printf("%c %c %c \n",arr[i]->name, arr[i]->nextState0->name,arr[i]->nextState1->name);  
              }
           }
            
        } 
        
       if ((argument[0] == 'c') && (argument[2] == '0')){ 
                if(deleted[idLetter(argument[4])] ==1)
                   {                
                 switch(argument[4]) {
                      case 'A' :
                        currentState -> nextState0 = &A;
                        break;
                      case 'B' :
                        currentState -> nextState0 = &B;
                      break;
                      case 'C' :
                        currentState -> nextState0 = &C;
                        break;
                      case 'D' :
                        currentState -> nextState0 = &D;
                        break;
                      case 'E' :
                        currentState -> nextState0 = &E;
                        break;
                      case 'F' :
                        currentState -> nextState0 = &F;
                        break;
                      case 'G' :
                        currentState -> nextState0 = &G;
                        break;
                      case 'H' :
                        currentState -> nextState0 = &H;
                        break;
                      default :
                        printf("Not Valid State \n");
                   } 
                  
	   }
else {

         printf("Cannot change to a deleted state"); 
}
	}
       if ((argument[0] == 'c') && (argument[2] == '1'))
            {    if(deleted[idLetter(argument[4])] ==1)
                 {
                 switch(argument[4]) {
                      case 'A' :
                        currentState -> nextState1 = &A;
                        break;
                      case 'B' :
                        currentState -> nextState1 = &B;
                      break;
                      case 'C' :
                        currentState -> nextState1 = &C;
                        break;
                      case 'D' :
                        currentState -> nextState1 = &D;
                        break;
                      case 'E' :
                        currentState -> nextState1 = &E;
                        break;
                      case 'F' :
                        currentState -> nextState1 = &F;
                        break;
                      case 'G' :
                        currentState -> nextState1 = &G;
                        break;
                      case 'H' :
                        currentState -> nextState1 = &H;
                        break;
                      default :
                        printf("Not Valid State \n");
                   } 
} 
       else {
             printf("Cannot change to a deleted state"); 
            }
             }
       if(argument[0] == 'g')
    {   sum =0;
        for (i=0;i< 8; i++)
        {    
           found[i] = 0;
          
        }   
        checkStates(found,currentState); 
         for (i=0;i< 8; i++)
        {    
          if(found[i]== 1)
          { 
            sum+=1;

          }
          
        }   
          if(sum !=8)
          {   
         printf("Garbage: "); 
        for (i=0;i< 8; i++)
        {   
          if(found[i]== 0)
          { 
            
            printf("%c, ",letter(i)); 

          }
        } 
           } 
          else {
              printf("No garbage");

             }
      	sum = 0;
	for (i = 0; i < 8; i++) {
		found[i] = 0;
	}
        } 
     if(argument[0] == 'd' && strlen(argument)==1)
    {   
	for (i = 0; i<8 ; i++) {
		deleted[i] = 0;
	}
	checkStates(deleted,currentState);
	for (i=0;i< 8; i++)
        {    
          if(found[i]== 1)
          { 
            sum+=1;

          }
      if(sum ==8)
          {   
             printf("No states deleted");
           }
      else 
       { 
        printf("Deleted: ");
        for (i=0;i< 8; i++)
        {   
          if(deleted[i]== 0)
          {   
            printf("%c, ",letter(i)); 
          }
        } 
        }
    }
}
else if (argument[0] == 'd') {
	checkStates(found,currentState);
	if (found[idLetter(argument[2])] == 0) {
		deleted[idLetter(argument[2])] = 0;
		printf("Deleted.");
	}
	else{
		printf("Not Deleted.");
	}
}
    }
exit(0); 
}
    



