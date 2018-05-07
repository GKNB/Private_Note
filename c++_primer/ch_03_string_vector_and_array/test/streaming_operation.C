#include<string>
#include<iostream>

using namespace std;
int main()
{
  string s1("Good\0Job");
  cout << s1.size() << "  " << s1 << endl;
  s1.push_back('\0');
  s1.push_back('a');
  cout << s1 << endl;
  string s2("Good job\n goubida");
  cout << s2 << endl;
  string s3[5];
  string s0;
  while(getline(cin,s0))
    cout << s0 << endl;
//  for(int i=0; i<5; i++)
//    cin >> s3[i];
//  for(int i=0; i<5; i++)
//    cout << s3[i] << endl;

}
