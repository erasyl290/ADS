#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    int k;
    for (int i = 0; i < N; i++)
    {
        k = i - 1;
        while (k != -1 && a[i] < a[k])
            k--;
        k == -1 ? cout << k : cout << a[k];
        cout << ' ';
    }

    return 0;
}
