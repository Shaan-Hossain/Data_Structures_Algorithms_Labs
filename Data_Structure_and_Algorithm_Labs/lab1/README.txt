********************************************
Course: COE-428
Lab#: Lab_1
Name: Shaan Hossain
Student# : 500882569
********************************************

Requirement_1: 
mySort.c, Everything Works. 

Requirement_2:
sortMain2.c, Everything Works.

Lab Question:

To better exploit the betterSort function in mySort(), use the parameters from mySort(), particularly, the array passed
and its size to indicate where to sort the array. In this case, it is desired to sort the entire array, so we start from
index 0 to index of length-1 in order to pass and sort every element within the passed array. The following code represents this
practice.  

void mySort(int data[], unsigned int n)
{
    betterSort(data, 0, n-1);		
}