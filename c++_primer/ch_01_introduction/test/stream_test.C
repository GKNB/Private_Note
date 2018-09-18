#include<iostream>

void basic()
{
  int x;
  std::cin >> x;    
  // if input is 5a, x will be 5 and a\n is left in buffer
  // if input is a, extraction will fail
  std::cout << "x = " << x << std::endl;
}

void extraction_fail(bool fix_failure = false)
{
  int x; 
  char a;
  std::cin >> x;
  if(fix_failure)
    std::cin.clear();
  std::cin >> a;
  if(fix_failure)
    std::cin.clear();
  //if input is 5a, output will be 5a
  //if input is a5, ouput won't be 0a!! (because cin failed when dealing with a, then cin is now in failure mode)
  std::cout << "x = " << x << " a = " << a << std::endl;
}

int main()
{
  extraction_fail(true);
}
