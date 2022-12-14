//Direct Access is not possible . We have to traverse
//Implemented using 

#include <list>
#include <iostream>
using namespace std;
int main()
{
    list <int> l;
    list <int> n(l);//copying l to n
    list <int> m(5,100);//Other ways to inisialize ,5 elements all by zero
    l.push_back(1);//pop_back and pop_back is also available
    l.push_front(2);
    for (int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //begin,end,empty are used in same way with o(1) complexity
    //erase is o(n) because of traversal
    l.erase(l.begin());//erase deletes the pointer which is passed to it
    cout<<"after Erase"<<endl;
    for (int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size is "<<l.size()<<endl;
}

