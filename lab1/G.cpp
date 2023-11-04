#include <iostream>
using namespace std;

int prime_index(int N){
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
    return n;
}

int main()
{
    int N;
    cin >> N;

    cout << prime_index(prime_index(N));

    return 0;
}