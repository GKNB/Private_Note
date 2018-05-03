#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using namespace std;
int trial1()
{
    string s1;
    string s2 = "mom";
    string s3 = s2;
    string s4(1,'a');
    string s5 = "";
    s5.push_back('\0');
    cout<<s1<<'\n'<<s2<<'\n'<<s3<<'\n'<<s4<<'\n'<<s5<<'\n';
    cout<<s1.size()<<'\n';
    cout<<s2.size()<<'\n';
    cout<<s3.size()<<'\n';
    cout<<s4.size()<<'\n';
    cout<<s5.size()<<'\n';
//    while(cin >> s1 >> s2 >> s3)
//        cout << s1 << s2 << s3 << endl;
    while(getline(cin,s4))
        cout << "s4 = " << s4 << endl;
//    string s7 = "a"  + "b" + "c";
//    cout <<s7;
    return 1;

}

void trial2()
{
    string str("abcdefgGFEDCBA");
    for(auto &c : str)
    {
        c = toupper(c);
//        cout << c << '\t';
    }
    cout << str;
}

void trial3()
{
    vector<vector<int> > vec;
    vec.resize(3);
    for(vector<int>::size_type i =0; i<vec.size(); i++)
    {
        vec[i].resize(i+3);
        for(vector<int>::size_type j =0; j<vec[i].size(); j++)
            vec[i][j] = 10 * i + j;
    }
    for(auto i : vec[2])
    {
        cout << "times\n";
    }
}

void trial4()
{
    double a[5][10];
    for(auto c:a[6])
        cout<<"times\n";
}

void trial5()
{
    char a[] = "doubi";
    for(auto c: a)
        cout << "times\n";
}

void trial6()
{
//    vector<const int> a;
    vector<int *> pa;
//    vector<int &> ra;
}

void trial7()
{
    vector<string> a(10);
    string str{'a','b'};
    for(auto c:a)
        cout << c << endl;
}

void trial8()
{
    string str("a");
    cout << str.size() <<'\n';
    str += "b";
    cout << str.size() <<'\n';
    str = str + "g" + "d";
    cout << str.size() <<'\n';
}

void trial9()
{
    string str("home");
    for(auto it = str.begin(); it!=str.end(); it++)
        *it = toupper(*it);
    for(auto it = str.begin(); it!=str.end(); it++)
        cout << *it;
    cout <<'\n';
}

void trial10()
{
    vector<int> vec={10,20};
    vec.push_back(30);
    for(auto it = vec.begin(); it!=vec.cend(); it++)
    {

        *it += 10;
        cout << *it << '\n';
    }
}

int add(int x, int y)
{   return x+y; }
void trial11()
{
    int c =10;
    int arr[10];
    int crr[c];
    int brr[add(3,4)];
}

void trial12()
{
    int arr1[]= {1,2,3};
//    int arr2[3] = arr1;
}

void trial13()
{
    int a[] = {1,2,3,4,5,6};
    int *p = a;
    cout << sizeof(p);
    cout << sizeof(p[0]);
    cout << sizeof(a);

    p[0] = 2;
}

void trial14()
{
    int a[] = {1,4,7,10,13,16,19};
    for(auto it = a; it < &a[sizeof(a)/sizeof(int)]; it++)
        cout << *it << '\n';
    for(auto it = begin(a); it != end(a); it++)
        cout << *it << '\n';
}

void trial15()
{
    int a[] = {1,2,3,4,5,6,7};
    for(auto p(a); p!=end(a); p++)
        *p = 0;
    for(auto i:a)
        cout << i << '\n';
}

void trial16()
{
    char a[] = "string";
    int int_arr[] = {1,2,3};
    int *int_arr2 = int_arr;
    string str = "surface";
//    const char c[30] = str.c_str();
    const char *c = str.c_str();
    char *d = a;
}

void arrpt()
{
    char arr1[4] = {'a', 'b', 'c','\0'};
    char arr2[4] = {'d', 'e', 'f','\0'};
    int arr3[] = {1,2,3,4};
    int arr4[4] = {5,6,7,8};
//    arr1 = arr2;    
//    arr1 = &arr2[0];
    char strc1[] = "gobida";
    char strc2[9] = "dagoubi";
//    int *arr = {1,3,5,7};
    const char *arrc = "goubida";
//    int *arraa = {1,2};        //error
//    char *arrbb = {'a', 'b'};  //error
    char *arrcc = "ab";        //ok
}
int main()
{
    arrpt();
}
