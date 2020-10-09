void mySort(int data[], unsigned int n)
{
   int count;
   int count2;  
   int temp;  
   for (count = 1; count<n; count++)
{   
   temp = data[count]; 
   count2 = count-1;  
   while ( count2 >= 0 && data[count2]>temp) 
   {  
     data[count2+1] = data[count2]; 
     count2--; 
   } 
    data[count2+1] = temp;    

} 

}  
