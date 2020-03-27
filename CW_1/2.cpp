#include <iostream>
#include <cmath>

using namespace std ;

int main()
{
    
    int *a = new int;
    
    cin >> *a;
    *a = abs(*a);
    cout << *a << endl;
    
    return 0;
}
