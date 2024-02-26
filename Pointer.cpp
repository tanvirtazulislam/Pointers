#include <iostream>
using namespace std;

int main() {
    
    int a = 5;
    
    cout << a << endl;
    
    int *ptr = &a; // pointer "ptr" is pointing variable "a"
    
    // cout << ptr << endl;
    // cout << *ptr << endl;
    
    *ptr = 50; // changing the value of variable "a" 
    
    cout << a << endl;
    
    int **ptr1 = &ptr; // "ptr1" is a pointer which is pointing to an existing pointer "ptr" (pointer to pointer)
    
    // cout << &ptr << endl;
    // cout << ptr1 << endl;
    // cout << a << endl;

    **ptr1 = 500; // updating the value of "a" again
  
    cout << a << endl;
        
    return 0;
}
