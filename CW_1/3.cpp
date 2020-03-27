#include <iostream>
#include <cmath>

using namespace std ;

long long get_n ( long long prev, long long prev2)
{
    return prev2*prev2 - prev;
}


long long * add_to_end(long long *array, int n, long long new_num)
{
    long long *temp = new long long [n+1];
    for( int i = 0; i < n; i++)
        temp[i] = array[i];
    temp[n] = new_num;
    delete[] array;
    return temp;
}

int main()
{
    
    long long sum = 0, x;
    int i = 2,k = 0;
    
    long long *arr = new long long [2];
    arr[0] = 1;
    arr[1] = 2;
    
    
    while ( k < 5)
    {
        x = get_n( arr[i-1], arr[i-2]);
        
        long long *temp = new long long [i+1];
        for( int j = 0; j < i; j++)
            temp[i] = arr[i];
        temp[i] = x;
        delete[] arr;
        arr = temp;
        
        i++;
        if( x%2 == 0)
        {
            sum += x ;
            k++;
        }
            
    }
    
    cout << sum ;
    
    
    return 0;
}
