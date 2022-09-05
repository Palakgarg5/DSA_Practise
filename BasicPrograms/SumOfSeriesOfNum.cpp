#include<iostream>
using namespace std;

int main()
{
 int n, num=1 , sum=0;
  cout<<"Enter the value of n : ";
  cin >> n;
  cout<<"Sum of numbers from 1 to "<<n<<" : "<<endl;
  while(num<=n)
    {
      sum += num;
      num += 1;
    }
  cout<<"The sum is : "<<sum<<endl;
}
