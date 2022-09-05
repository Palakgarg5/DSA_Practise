#include<iostream>
using namespace std;

int main()
{
 int a , b , c ;
  cout<<"Enter the values of a , b and c : ";
  cin >> a >> b >> c;
  if(a+b >c && b+c >a && c+a >b)
    cout<<"Valid Triangle, if sum of 2 sides will be greater than 3rd one";
  else
    cout<<"Invalid Triangle";
  
}
