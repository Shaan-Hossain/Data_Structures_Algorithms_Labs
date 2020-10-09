#include <stdio.h>
/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */
int heapTree[101] = {-1}; 
static int root =0;
int rightChildIndex;
int leftChildIndex; 


/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
 return root;  
}
void maxHeapify (int rootIndex)
{int key;
 int sizeTree = heapSize(); 
 int maximumIndex; 
 leftChildIndex = (2*rootIndex); 
 rightChildIndex = (2*rootIndex)+1;
 if(rootIndex == 0)
 { 
   rootIndex = 1;
  }
 maximumIndex = rootIndex; 
 if((heapTree[maximumIndex] < heapTree[leftChildIndex]) && (leftChildIndex <= sizeTree))
  {
   
   maximumIndex = leftChildIndex; 
  }
 if((heapTree[maximumIndex] < heapTree[rightChildIndex]) && (rightChildIndex <= sizeTree))
  { 
   
   maximumIndex = rightChildIndex; 
  }
  if (maximumIndex != rootIndex)
  {
   
   //swapping
   key = heapTree[rootIndex]; 
   heapTree[rootIndex] = heapTree[maximumIndex]; 
   heapTree[maximumIndex] = key; 
   maxHeapify(maximumIndex); //recursively heapifying to retain tree structure
  }
   
   
}
/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
int heapDelete()
{
    int biggest = heapTree[1]; 
    heapTree[1] = heapTree[heapSize()];//setting the root to the last index of tree
    root--; 
    maxHeapify(1);
    return biggest; 
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{  int parentIndex; 
   root++;
   heapTree[root] = thing2add;
   parentIndex = (root)/2;//formula to find parent of added node to maxHeapify the Tree
   maxHeapify(parentIndex);
}

void printTree(int index) 
{  
    
    printf("<node id=\"%d\">", heapTree[index]);
    if((2*index) <= heapSize())
{
    printTree(2*index); 
}
   if((2*index) +1 <= heapSize())
{
    printTree((2*index)+1); 
}
   
    printf("</node>"); 
 

}

