#include <iostream>
 
int main(){
    int a;
    int* pi; 
 
    a = 2;
 
    // std::cout << *pi << std::endl;
    // not ok, pi is uninitialised
    // so it points to some random memory address
 
    pi = &a;
 
    std::cout << *pi << std::endl;
    // ok, pi points to memory allocated to variable a
    // (this will print the value in variable a)
 
    pi = new int;
 
    *pi = 3;
    // ok, pi points to dynamically allocated memory
    std::cout << *pi << std::endl;
    // ok, pi points to dynamically allocated memory
 
    delete pi;
 
    // *pi = 4;
    // not ok, pi points to memory that is not allocated anymore
 
    // pi = NULL;
    // NULL is a special value for a pointer that doesn't indicate
    // an address in memory, we will see its use later on
 
    // std::cout << *pi << std::endl;
    // not ok, dereferencing a NULL pointer
 
}