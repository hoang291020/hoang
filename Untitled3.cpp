#include<iostream>
using namespace std;
int factorial(int n){
  cout << "n = " << n << " at " << &n << endl;
  if(n != 1){
    return n* factorial(n - 1);
  } else {
    return 1;
  }
}
int main()
{
  int m;
  cin >> m;
  cout << factorial(m);
  return 0;
}
