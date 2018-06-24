#include<iostream>
#include<string>
#include"Sales_data.h"

using namespace std;

void read_data(Sales_data &data)
{
    double price = 0.0;
    cin >> data.bookNo >> data.units_sold >> price;
    data.revenue = price * data.units_sold;
}

Sales_data add_data(Sales_data data1, Sales_data data2)
{
    if(data1.bookNo == data2.bookNo)
    {
        Sales_data data;
        data.bookNo = data1.bookNo;
        data.units_sold = data1.units_sold + data2.units_sold;
        data.revenue = data1.revenue + data2.revenue;
        return data;
    }
    else
    {
        cerr << "bookNo not match\n";
    }
}
int main()
{
  Sales_data book;
  if(cin >> book)
  {
    int num = 1;
    Sales_data book2;
    while(cin >> book2)
    {
      if(book.isbn() == book2.isbn())
        num++;
      else
      {
        cout << book.isbn() << " shows up " << num << " times\n";
        book = book2;
        num = 1;
      }
    }
    cout << book.isbn() << " shows up " << num << " times\n";
  }
}


//int main()
//{
//  int val;
//  if(cin >> val)
//  {
//    int num = 1;
//    int next;
//    while(cin >> next)
//    {
//      if(next == val)
//        num++;
//      else
//      {
//        cout << val << " shows up " << num << " times\n";
//        val = next;
//        num = 1;
//      }
//    }
//    cout << val << " shows up " << num << " times\n";
//  }
//  else
//  {
//    cout << " Error: no input\n";
//  }
//}
