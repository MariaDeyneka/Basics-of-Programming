#include <iostream>

using namespace std;
int main()
{

int M[]={1,1,1,3,4}; 
int i; 
int k; 
int indexes[5]; 
int n; 

cout<<"Введіть число: "<<endl;
cin>>k;

n = 0;
for (i=0; i<5; i++)
    if (k==M[i])
    {
        
        n++;
        indexes[n-1] = i;
    }
for (i=0; i<n; i++)
cout<<"Індекси: "<<indexes[i]<<endl;
}
/* Вивід: 0 1 2
2.Ввід: 2 5 6 2 2
Вивід: 0 3 4
3.Ввід: 7 6 6 6 6
Вивід: 1 2 3 4
*/

//були пробеми з комп'ютером,тому трохи пізніше здала це завдання
