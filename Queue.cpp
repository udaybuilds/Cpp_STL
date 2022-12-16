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
    cout<<"Back String is "<<q.back()<<endl;
    q.pop();
    cout<<"Front String after pop is "<<q.front()<<endl; 
    cout<<"SIze after pop "<<q.size()<<endl;
    //empty method also works
    //all functions have O(1) complexity 
}