#include <iostream>
#include <vector>
#include <deque>

using namespace std;

void print(deque<int> d)
{
    for (int i = 0; i < d.size(); i++)
        cout << d[i] << ' ';
    cout << endl;
}

int main()
{
    int T, N;
    cin >> T;

    vector< deque<int> > v;
    deque<int> d;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        while (N != 0)
        {
            d.push_front(N);
            for (int k = 0; k < N; k++)
            {
                d.push_front(d.back());
                d.pop_back();
            }
            N--;
        }
        v.push_back(d);
        d.clear();
    }

    for (int i = 0; i < T; i++)
        print(v[i]);

    return 0;
}
