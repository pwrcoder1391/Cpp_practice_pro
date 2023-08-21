// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.

void reverse_array(int* arr, int size) {
    //-- Write your code below this line 
    
    //-- Write your code above this line
    
    int storage{};
    
    /*The idea is to push the last number in a temporary storage and 
    then shift the numbers to right*/
    if(size>1)
    {
    if(size%2 == 0)
    {
       for(int i{size-1},j{};i>=(size/2)&&j<(size/2);i--,j++)
       {
           storage = arr[i];
           arr[i] = arr[j];
           arr[j] = storage ;
       }
    }
    else{
         for(int i{size-1},j{};i>(size/2)&&j<(size/2);i--,j++)
       {
           storage = arr[i];
           arr[i] = arr[j];
           arr[j] = storage ;
       }
        
    }
    }
    else
    {
        
    }
    
    
    
    
    
}

