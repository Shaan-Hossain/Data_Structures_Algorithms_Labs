#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern void addHeap(int);
extern int heapDelete();  
extern void printTree(int);
extern void maxHeapify (int);
extern int isEmpty(); 
int main(int argc, char * argv[])
{
  int value;
  int i;
  int j =0;
  int x;
  while (scanf("%d", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
    addHeap(value); 
    j++;
  }
  printTree(1);
  printf("\nThe following are the elements deleted from the Heap and pushed to the stack");
  for (i=0;i<j;i++)
  { x = heapDelete();
    printf("\n%d",x); 
    push(x); 
  } 
  printf("\nThe following are the elements popped from the stack");  
  while(isEmpty() !=1)
  { x = pop();
    printf("\n%d",x);  
  } 
  exit(0);
}
