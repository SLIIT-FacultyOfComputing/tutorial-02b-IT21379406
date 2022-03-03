//Exercise 4 - Functions

//Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
using namespace std;
long Fc(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  cout << "Enter a value n: ";
  cin >> n;
  cout << "Enter a value for r ";
  cin >> r;
  cout << "nCr = ";
  cout << nCr(n,r);

  }
  long Fc(int no)
  {
    long Fc=1;
    for(int r=no;r>=1;r--)
    {
      Fc=Fc*r;
    }
  return Fc;
}
long ncr(int n,int r)
{
  long ncr=Fc(n)/Fc(r)*Fc(n-r);
  return ncr;
}