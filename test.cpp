#include <iostream>
#include <chrono>
#include <format>
using namespace std;
int main()
{
    cout << chrono::system_clock::now().time_since_epoch().count() << endl;
    cout << chrono::system_clock::now().time_since_epoch().count() << endl;
    cout << chrono::system_clock::now().time_since_epoch().count() << endl;
    cout << chrono::system_clock::now().time_since_epoch().count() << endl;
    cout << chrono::system_clock::now().time_since_epoch().count();
    cout << chrono::system_clock::now().time_since_epoch().count();
    cout << chrono::system_clock::now;
    cout << chrono::system_clock::now;
    int i = 0;
    cout << format("{}",100);
}