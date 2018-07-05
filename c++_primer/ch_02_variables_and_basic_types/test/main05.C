#include<iostream>

using namespace std;

int a = 2;
int main()
{
  {
    int &ra = a;
    cout << "Outer a via reference " << ra << endl;
    int a = 3;
    cout << "After introduce inner a, ra is still bound with outer a " << ra << endl;
    cout << "Now a refers to inner a " << a << endl;
    cout << "access global a by :: operator " << ::a << endl;
  }
}
