#include<iostream>
#include<string>

using namespace std;

template<typename T>
void readAndOutput()
{
  T tmp;
  while(cin >> tmp)
    cout << "This is tmp: " << tmp << endl;
}

void readAndOutputString()
{
  string str;
  while(getline(cin,str))
    cout << "This is str: " << str << endl;
}

int main()
{
  readAndOutput<string>();
}
