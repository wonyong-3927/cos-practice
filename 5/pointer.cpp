#include <iostream>
using namespace std;
#define BUFLEN 10

int main(int argc, char *argv[])
{
    int arr[BUFLEN];
    int *p;
    int a, i;

    for (i=0; i<BUFLEN ;i++)
    {
        arr[i] = 10 - i;
    }
    // a = 5;
    // p = &a;

    p = arr + 2;

    // cout << "a = " << a << endl;
    // cout << "p = " << p <<endl;
    // cout << "&a = " << &a <<endl;
    // cout << "*p = " << *p <<endl;
    // cout << "arr = " << arr <<endl;

    cout << "arr[2] = " << arr[2] << endl;
    cout << "arr+2 = " << arr +2 << endl;
    cout << "*(arr+2) = " << *(arr +2) << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p <<endl;

    // *p = 10;
    // cout << "a = " << a << endl;
    // cout << "p = " << p <<endl;

    return 0;
}