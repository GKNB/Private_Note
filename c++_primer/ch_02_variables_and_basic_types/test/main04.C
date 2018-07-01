#include<iostream>


using namespace std;
int main()
{
  char a = 'a';
  char b = 'b';
  char c = 'c';
  cout << a << ' ' << b << ' ' << c << endl;
  cout <<static_cast<void*>(&a) << ' ' << static_cast<void*>(&b) << ' ' << static_cast<void*>(&c) << endl;
  cout << "Notice now we are in stack, so address is decreasing\n";
  double i=1;
  double j=2;
  cout << i << ' ' << j << endl;
  cout <<&i << ' ' << &j << endl;
  cout << "Notice now i doesn't start with what next char is supposed to start (&c-1), instead start with multiple of 8, this is memory alignment and is related to word\n" << endl;

  char *pa = new char;
  char *pb = new char;
  char *pc = new char;
  cout <<static_cast<void*>(pa) << ' ' << static_cast<void*>(pb) << ' ' << static_cast<void*>(pc) << endl;
  double *pi= new double;
  double *pj= new double;
  cout <<pi << ' ' << pj << endl;

}
