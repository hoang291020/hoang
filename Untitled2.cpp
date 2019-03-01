#include<iostream>
using namespace std;
int main()
{
  int *a[3];
  char *b[3];
  for(int i = 0;i < 3;i++){
    cout << &a[i] <<" ";
  }
  cout << endl;
  for(int j = 0;j < 3;j++){
    cout << &b[j] <<" ";
  }
  return 0;
}
