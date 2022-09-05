#include<iostream>
using namespace std;

int main()
{
 int n;
  cout<<"Enter the number : ";
  cin >> n;
  if( n > 0)
    cout<<"The number is positive : "<< n;
  else if(n < 0)
    cout<<"The number is negative : "<< n;
  else
    cout<<"The number is zero : "<< n;
}
