#include <iostream>
using namespace std;
int factorial(int x)
{
    cout <<"x = " << x << " at " << &x << endl;
    if(x <= 1) return 1;
    else return x*factorial(x - 1);
}
int main()
{
     int n ;
    cin >> n;
    cout << "factorial(n) = " << factorial(n) << "\n";


    return 0;
}
/*
kết quảy
n = 6
x = 6 at 0x6dfee0
x = 5 at 0x6dfec0
x = 4 at 0x6dfea0
x = 3 at 0x6dfe80
x = 2 at 0x6dfe60
x = 1 at 0x6dfe40
factorial(n) = 720
*/
