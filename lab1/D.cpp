#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int k;
    int i = 0;
    while (!S.empty() && i < S.length() - 1)
    {
        k = 0;
        if (S[i] == S[i + 1])
        {
            while (i - k > 0 && S[i - k - 1] == S[i + k + 2])
            {
                k++;
            }
            S.erase(i - k, 2 * (k + 1));
            i -= k + 1;
        }
        else if (S[i] == S[i + 2])
        {
            while (i - k > 0 && S[i - k - 1] == S[i + k + 3])
            {
                k++;
            }
            S.erase(i - k, 2 * (k + 1) + 1);
            i -= k + 1;
        }
        i++;
    }

    S.empty() ? cout << "YES" : cout << "NO";

    return 0;
}