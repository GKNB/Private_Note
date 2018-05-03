#include<iostream>
int main()
{
    int x[5] = {1,2,3,4,5};
    for(auto it = std::begin(x); it != std::end(x); it ++)
        std::cout << *it << std::endl;
    

}
