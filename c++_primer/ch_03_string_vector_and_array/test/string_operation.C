#include<string>
#include<iostream>
using namespace std;

int main()
{
  string s1("abc"), s2("def");
  string s3 = s1+s2;
  cout << s3 << endl;
  cout << s3.empty() << endl;
  cout << (s1 < s2) << endl;
  cout << s3.size() << endl;
  cout << s3[3] << endl;
  s3.clear();
  cout << s3.size() << endl;
  decltype(s3.size()) t = 0;
  auto tt = 0;
  cout << (t-1) << "   " << (tt-1) << endl;

}
