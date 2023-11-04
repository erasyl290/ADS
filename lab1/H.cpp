#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    bool b = true;
    if (a == 1)
        b = false;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            b = false;
            break;
        }
    }
    
    b ? cout << "YES" : cout << "NO";

    return 0;
}