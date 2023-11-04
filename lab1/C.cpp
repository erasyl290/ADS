#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '#')
        {
            s1.erase(i - 1, 2);
            i -= 2;
        }
    }

    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == '#')
        {
            s2.erase(i - 1, 2);
            i -= 2;
        }
    }

    s1 == s2 ? cout << "Yes" : cout <<  "No";

    return 0;
}