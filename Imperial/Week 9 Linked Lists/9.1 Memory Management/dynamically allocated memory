#include <iostream>
 
int main(){
    int* pi;
    pi = new int;
    // allocates a new memory area of type int
    // and stores its address in pi
 
    *pi = 2;
    std::cout << *pi << std::endl;
 
    delete pi;
    // deallocates the dynamic memory area
 
    // important: it doesn't "delete the pointer"
    // we can still use the pointer for other memory areas
    // for example we can point to a variable again:
 
    int a;
    pi = &a;
 
    // or another dynamically allocated memory area
 
    pi = new int;
 
    // but when we allocate dynamically 
    // we must remember to deallocate too
    // when we don't need the memory area anymore
 
    delete pi;
 
}