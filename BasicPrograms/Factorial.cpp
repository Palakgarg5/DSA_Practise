#include<iostream>
using namespace std;

int main()
{
 int n, num=1 , ans=1;
  cout<<"Enter the value : ";
  cin>>n;
  while(num<=n)
    {
      ans *=num;
      num +=1;
    }
  cout<<"The factorial of "<<n<<" is : "<<ans;
}
