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
        cerr << "bookNo not match\n"
    }
}
int main()
{
    Sales_data data1, data2;
    read_data(data1);
    read_data(data2);
}
