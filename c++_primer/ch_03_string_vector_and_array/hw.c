#include<iostream>
#include<string>
#include<assert.h>
#include<cctype>
#include<vector>
#include<iterator>
#include<cstring>
using namespace std;
template<class T>
int bin_search(vector<T> vec, T tar)
{
    auto st = vec.begin(), ed = vec.end(), mid = st;
    while(st!=ed)
    {
        mid = st + (ed - st)/2;
        if(*mid == tar)
        {
            return mid - vec.begin();
        }
        else if(*mid < tar)
        {
            st = mid+1;
        }
        else
        {
            ed = mid;
        }
    }
    return -1;
}

template<class T>
void print_adv(vector<T> vec)
{
    auto bg = vec.begin(), ed = vec.end()-1;
    while(bg <= ed)
    {
        cout << (*bg) + (*ed);
        bg++;
        ed--;
    }
    cout <<'\n';
    bg = vec.begin();
    while(bg < vec.end()-1)
    {
        cout << (*bg) + (*(bg+1));
        bg +=2;
    }
}

template<class T, int n1, int n2>
int cmp_arr(T (&a)[n1], T (&b)[n2])
{
    auto aed = end(a), bed = end(b);
    if((aed - a) != (bed - b))
        return ((aed-a)>(bed-b)? 1 : -1);
    for(auto abg = a, bbg = b; abg!=aed && bbg !=bed; abg++, bbg++)
    {
        if(*abg != *bbg)
            return (*abg>*bbg? 1 : -1);
    }
    return 0;


}

void cmp_carr()
{
    string str1("goubi");
    string str2("yebidaxiong");
    if(str1 == str2)
        cout<< "same\n";
    else
        cout<<(str1 < str2)<< '\n';
    char arr1[] = "goubi";
    char arr2[] = "yebidaxiong";
    auto result = strcmp(arr1,arr2);
    cout << result << '\n';
}
int main(int argv, char **argc)
{
    int a[] = {2,2,3,4,5,6,7};
    int b[] = {1,2,3,4,5,6,7};
    cout << cmp_arr(a,b)<<'\n';
    cmp_carr();
}
