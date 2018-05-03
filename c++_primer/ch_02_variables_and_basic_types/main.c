#include<iostream>
using namespace std;
template<class T>
void prs()
{
    std::cout<<sizeof(T)<<'\n';
}

void declare()
{
    int i=1234567; 
    std::cout<<"i= "<<i<<'\n';
    extern int j;
    std::cout<<"j= "<<j<<'\n';
}
int i=233;
int j=2;
class declare_class
{
};
int x=999;
int main()
{
    prs<int>();
    prs<double>();
    prs<char>();
    prs<wchar_t>();
    prs<long double>();
    std::cout<<020<<'\t'<<20<<'\t'<<0x2A<<'\t'<<0XF<<'\n';
    int x=1;
    {
        int x=2;
        {
            int x=3;
            ::x=4;
            cout<<"x= "<<x<<'\n';
        }
        cout<<"x= "<<x<<'\n';
    }
    cout<<"x= "<<x<<'\n';
//    int a=3.3;
//    double pi=3.14;
//    int b={pi};
//    int c{pi};
//    int d(pi);
//    std::cout<<"a= "<<a<<'\n';
//    std::cout<<"b= "<<b<<'\n';
//    std::cout<<"c= "<<c<<'\n';
//    std::cout<<"d= "<<d<<'\n';
    int i=1;
    int j=23333;
    declare();
//    extern int i;
    void *p;
    p=&j;
    double *q;
    q=(double*)p;
    cout<<"pointer"<<*q<<'\n';
}
