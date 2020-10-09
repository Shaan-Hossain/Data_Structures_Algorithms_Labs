#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
{
  int i,j,temp;
  for(i = first + 1;i <= last;i++){
    myCopy(&array[i],&temp);
    j = i-1;
	
    while(( j >= first) && (myCompare(array[j],temp)) > 0){
      mySwap(&array[j],&array[j+1]);
      j = j -1; 
    }
    myCopy(&temp,&array[j+1]);
  }
}


