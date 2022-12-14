#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack <string> S;
    S.push("Uday");
    S.push("Brainy");
    S.push("Sriv");
    
    cout<<"Top element "<<S.top()<<endl;
    cout<<"Size of Stack "<<S.size()<<endl;
    cout<<"If empty "<<S.empty()<<endl;
    S.pop();
    cout<<"Top element "<<S.top()<<endl;
}