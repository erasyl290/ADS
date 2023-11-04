#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 1;
    int n = 2;
    bool b;
    while (cnt != N)
    {   
        n++;
        b = true;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                b = false;
                break;
            }
        }
        if (b)
            cnt++;
    }
    
    cout << n;

    return 0;
}