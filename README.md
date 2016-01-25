# C Arrays

Usage:  
Array array;  
initArray(&array, StartCapacity, sizeof(Element));  
  
...  
   
Object o;  
addArray(&a, &o); //pushes object to the end of the array.  
  
...  
  
removeArray(&a, indexToDelete); //traditional first index is 0  
  
...  
  
freeArray(&a); //cleans up the array  
