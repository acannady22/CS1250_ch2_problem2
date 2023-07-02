/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    // display variables
    int a, x, z, z1;
    
    // display values for variables
    a = 25,
    x = 4, 
    z = a / x,
    z1 = a % x;
    
    // display string for end user with calculations
    cout << "The division of " << a << " by " << x << " is " << z << endl;
    cout << "The remainder of this division is " << z1 << endl;

    return 0;
}
