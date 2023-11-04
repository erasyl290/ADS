#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> B(5), N(5);
    for (int i = 0; i < 5; i++)
        cin >> B[i];
    for (int i = 0; i < 5; i++)
        cin >> N[i];
    

    int cnt = 0;
    while (!B.empty() && !N.empty() && cnt != 1000000)
    {
        if (B.front() > N.front() && (B.front() != 9 || N.front() != 0) || B.front() == 0 && N.front() == 9)
        {
            B.push_back(B.front());
            B.push_back(N.front());
        }
        else
        {
            N.push_back(B.front());
            N.push_back(N.front());
        }
        B.pop_front();
        N.pop_front();
        cnt++;
    }


    if (B.empty())
        cout << "Nursik " << cnt;
    else if (N.empty())
        cout << "Boris " << cnt;
    else
        cout << "blin nichya";


    return 0;
}