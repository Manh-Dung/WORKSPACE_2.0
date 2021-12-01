#include <iostream>
using namespace std;

int main()
{
    int a[3] = {10, 20, 30};
    for (auto x : a)
        cout << x << " ";
    return 0;
}