#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <string> q;
    q.push("Uday");
    q.push("Brainy");
    q.push("Srivastava");
    cout<<"Front String is "<<q.front()<<endl; //Last In Last Out 
}