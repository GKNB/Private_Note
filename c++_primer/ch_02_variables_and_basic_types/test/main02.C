#include<iostream>



void fun(double i)
{
  int a1 = i;
  int a2{i};
  int a3 = {i};
  char b1 = i;
  char b2{i};
  char b3 = {i};
  float c1 = i;
  float c2{i};
  float c3 = {i};
}
int main(int argc, char **argv)
{
  fun(10.4);
}
