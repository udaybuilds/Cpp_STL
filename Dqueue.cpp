//Implemented using several Static arrays
//Dynamic , Random access
//Push , Pop from start and end
#include<deque>
#include<iostream>
using namespace std;
int main()
{
    deque <int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    for (int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    for (int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Element at 1st index "<<d.at(1)<<endl;
    cout<<"Checking if empty "<<d.empty()<<endl;

    d.erase(d.begin(),d.begin()+1); // It will delete from begin to only 1 element
    cout<<"Size after delete "<<d.size()<<endl;// Size reduces but not the total memory allocted
    for (int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 1;
}