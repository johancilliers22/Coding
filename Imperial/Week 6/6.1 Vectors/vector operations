#include <iostream>
#include <vector>
// this header is needed to use vectors
 
int main(){
    std::vector<int> v; 
    // we declare a vector
    // the <> contain the type
    // for each cell of the vector
    // initially the vector is empty:
    // v: []
 
    // we can then start adding elements to the vector
    // this can be done using function push_back:
 
    v.push_back(10);
 
    // so now the vector contains one element:
    // v: [10]
 
    // let's add another element:
 
    v.push_back(20);
 
    // now the vector contains two elements:
    // v: [10, 20]
 
    // a key intuition about vectors is that the elements can be *indexed*
    // the first element has index 0, and so on 
    // up to (size of the vector - 1)
    // v:
    // value: |10|20|
    // index: | 0| 1|
 
    // we can index using square brackets, for example
    // if we want to print the first element we do the following:
 
    std::cout << v[0] << std::endl;
    // this will print 10
 
    // if we want to print the second element we do the following:
 
    std::cout << v[1] << std::endl;
    // this will print 20
 
    // we can also use indexing to overwrite the value of cells:
 
    v[0] = 15;
 
    // v:
    // value: |15|20|
    // index: | 0| 1|
 
    std::cout << v[0] << std::endl;
    // this will print 15
 
    // however we can't use indexing
    // to access or store values in cells that don't exist
    // for example in this case writing:
 
    // v[2] = 30;
 
    // or
 
    // std::cout << v[4] << std::endl;
 
    // would be a mistake
    // because there are no cells for indices 2 or 4 
    // (confusingly enough the program may or may not crash)
 
    // the vector grows using push_back as seen above
 
    v.push_back(30);
 
    // v:
    // value: |15|20|30|
    // index: | 0| 1| 2|
 
    // we can always check how many cells there are
    // by using function size():
 
    std::cout << v.size() << std::endl;
    // this will print 3
 
    // we can't print the whole vector at once!
    // the following line:
    // std::cout << v << std::endl; 
    // would not work!
 
}