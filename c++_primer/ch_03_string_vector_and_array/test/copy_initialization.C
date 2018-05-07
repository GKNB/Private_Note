#include<iostream>

using namespace std;

class A
{
public:
  int a;
  A(int _a) {  a = 2 * _a; }
  A(const A &_a) {  a = 2 * _a.a; }

  A &operator=(const A &_a) = default;
};

int main()
{
  A a1(1); cout << a1.a << '\n';
  A a2 = 1; cout << a2.a << '\n';
  A a3(a1); cout << a3.a << '\n';
  A a4 = a1; cout << a4.a << '\n';
  A a5(a3); cout << a5.a << '\n';
  a5 = a3; cout << a5.a << '\n';
}
