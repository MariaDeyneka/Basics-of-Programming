#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n,m;
  cin>>n;
  cin>>m;
  std::cout<<"n^m= "<< pow (n, m)<< std::endl;
  do{
    int sum=0;
    sum==pow(n, 2)+pow(n, m);
  }while(n==m);
  cout<<"Сумма дорівнює "<< sum << endl;
  return 0;
}
