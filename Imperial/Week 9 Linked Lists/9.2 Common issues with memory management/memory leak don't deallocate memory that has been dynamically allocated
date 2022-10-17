#include <iostream>
 
int main(){
    int* pi; 
 
    pi = new int;
    // a new memory area has been allocated
    // and pi points to it
 
    pi = new int;
    // another memory area has been allocated
    // we have lost the address of the previous one
    // so it can't be deallocated anymore
    // and it will remain unavailable
    // (modern operating systems will 
    // deallocate it at the end of the program)
}