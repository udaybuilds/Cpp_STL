//Contagious memory location
//all functions below are O(1)
#include <array>
#include <iostream>
using namespace std;
int main()
{
    int basic[3]={1,2,3};

    array<int,4> a={1,2,3,4};

    cout<<"Size of array is "<<a.size()<<endl;
    cout<<"Element at second index "<<a.at(2)<< endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"Front Element "<<a.front()<<endl<<"Last Element "<<a.back();
    return 1;
}