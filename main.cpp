#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Plss give a value";
    cin>>x;
    int steps = 0;
    while(x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
        }
        else {
            x = 3 * x + 1;
        }
        cout<<"->"<<x;
        steps++;

    }
    cout<<endl;
    cout<<"Steps :"<<steps<<endl;
}