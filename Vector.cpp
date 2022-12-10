//Same as array but it doubles the size when extra element is added 
//We can even shrink the size.

#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector <int> a; // capacity is 0
    vector <int> b(5,1); //One more way to declare vector. Capacity is 5 and all elements are inisialized with 1
    vector <int> c(b); // vector gets created using the last vector i.e. a
    for (int i:c)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout <<"Capacity is "<<a.capacity()<<endl;
    a.push_back(1);
    cout <<"Capacity is "<<a.capacity()<<endl;
    a.push_back(2);
    cout <<"Capacity is "<<a.capacity()<<endl;
    a.push_back(3);
    cout <<"Capacity is "<<a.capacity()<<endl; // capacity became 4 because it doubled 
    cout <<"Size is "<<a.size()<<endl; //Size is 3 because it is the no. of elements in vector
    cout <<"Element at second index is "<<a.at(2)<<endl;
    //[] can also be used
    cout <<"Element in front is "<<a.front()<<endl;
    cout <<"Element in back is "<<a.back()<<endl;
    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    a.pop_back();                      // Using pop_back function
    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout <<"Size is "<<a.size()<<endl;
    a.clear(); //clear makes the size as 0 but the capacity is still same
    cout <<"Size is "<<a.size()<<endl;

}