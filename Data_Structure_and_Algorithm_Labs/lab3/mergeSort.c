#include "mySort.h"
void mergeSort(int array[], int first, int mid, int last)
{
    int i;
    int j;
    int k; 
    int t;
    int key[10000];
    i = first;
    j = mid +1;
    k = 0;
 
    while (i <= mid && j <= last) {
        if (myCompare(array[i],array[j]) < 0) {
            key[k++] = array[i++]; 
        }
        else {
            key[k++] = array[j++];
            
        }
    }
 
    while(i<=mid)  {
        myCopy(&array[i++],&key[k++]);
    }
    while(j<=last) {
        myCopy(&array[j++],&key[k++]);
    }
    k = 0;
    for(t = first; t <= last;t++) {
        mySwap(&array[t],&key[k]);
        k++;
    }
 
 
}
void mySort(int array[], unsigned int first, unsigned int last)
{
    if (first < last) {
        int mid = (first+last) / 2;
        mySort(array,first,mid);
        mySort(array,mid+1,last);
        mergeSort(array,first,mid,last);
    }
 
} 

