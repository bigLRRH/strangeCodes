#include <iostream>
#include <filesystem>
#include <thread>
#include <array>
using namespace std;
void boom(int n)
{
    long long i = 0;
    while (true)
    {
        cout << ".\n";
        filesystem::create_directory("boom" + to_string(n) + to_string(i++));
    }
}
int main()
{
    array<thread, 4> threads;
    for (int i = 0; i < 4; ++i)
    {
        threads[i] = thread(boom,i);
    }
    for(auto &t:threads)
    {
        t.join();
    }
    return 0;
}