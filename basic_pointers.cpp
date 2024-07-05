#include <iostream>
using namespace std;



int main(){
    int x = 2024;
    cout << "variable x = " << x << endl; // we print the value 2024, using it variable name x
    cout << "variable x address = " << &x << endl; // we print the address where 2024 is stored, using it variable address
    
    
    // declare a pointer called px;
    int *px; // data type is int since it will pointe to x variable who has data type int.
    
    // now we initialize this pointer with the address of x
    px = &x;

    cout << "pointer px value = " << px << endl; // we print the pointer value. You can observe that it's the same value as the address of x variable
    cout << "variable x through pointer px = " << *px << endl; // we print the value of x through px

    return 0;
}