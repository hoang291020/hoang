#include <iostream>
#include <cstring>
using namespace std;
char* concat(char* t, char* h)
{
    int n=strlen(t)+strlen(h);
    char *p = new char[n];
    strcpy(p, t);
    strcat(p, h);
    return p;
}
int main()
{
    char* a="Hello";
    char* b="World";
    char* c=concat(a,b);
    cout<<c;
}
