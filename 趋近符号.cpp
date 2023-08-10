#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum{0};
    int i{n};
code:
    sum += i;
    // i趋近于0
    if (i --> 0)
    {
        cout<<i;
        goto code;
    }
        cout << sum;
    return 0;
}