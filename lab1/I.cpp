#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    

    int i, k;
    i = 0;
    while (a.size() != 1)
    {
        if (k == a.size())
            k = 0;
        if (a[i] == 'S')
        {
            while (a[k] != 'K' && k != a.size())
                k++;
        }
        else if (a[i] == 'K')
        {
            while (a[k] != 'S' && k != a.size())
                k++;
        }
        if (k == a.size() && i == k - 1)
            break;
        if (k == a.size())
            i = k - 2;
        else
            a.erase(a.begin() + k);
        i++;
        if (i >= a.size())
            i = 0;
    }


    if (a[0] == 'S')
        cout << "SAKAYANAGI";
    else if (a[0] == 'K')
        cout << "KATSURAGI";

    return 0;
}