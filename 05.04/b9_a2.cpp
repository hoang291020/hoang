#include <bits/stdc++.h>
using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    //delete p;
    //*p2 = 100;
    cout << *p2;
    delete p;
    delete p2;

    //do giải phóng bộ nhớ qua sớm
    return 0;
}
