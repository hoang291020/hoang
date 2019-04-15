#include<iostream>
using namespace std;
int main()
{

    int a[3];
    int c;
    char v;
    char b[3];

    for(int i = 0;i < 3;i++){
        cout << &a[i] << " ";
    }
    for(int i = 0;i < 3;i++){
         cout<<(void*)&b[i]<<" ";
    }
    cout<<endl;
    cout<<&c<<" "<<(void*)&v;
    return 0;
}
/*ket qua la 0x6dfeec 0x6dfef0 0x6dfef4 0x6dfee9 0x6dfeea 0x6dfeeb
các địa chỉ của các phần tử của mảng a liên tiếp nhau và cách đều nhau 4 byte,
các địa chỉ của các phần tử của mảng b liên tiếp nhau và cách đều nhau 1 byte,
các địa chỉ một vài biến khai báo sau có địa chỉ đứng trước các biến khai báo trước
*/
