#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <string> S;
    S.push("Uday");
    S.push("Brainy");
    S.push("Sriv");
    //We only have push and pop no front or back because in Stack on Last in and First Out is followed  
    cout<<"Top element "<<S.top()<<endl;
    cout<<"Size of Stack "<<S.size()<<endl;
    cout<<"If empty "<<S.empty()<<endl;
    S.pop();
    cout<<"Top element "<<S.top()<<endl;
    // resume from 30.22
}