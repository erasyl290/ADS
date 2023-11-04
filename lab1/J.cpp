#include <iostream>
#include <deque>
using namespace std;

int main()
{
    char symb;
    int num;

    deque<int> deq;
    deque<int> res;
    while (cin)
    {
        cin >> symb;
        if (symb == '!')
            break;
        if (symb == '+')
        {
            cin >> num;
            deq.push_front(num);
        }
        else if (symb == '-')
        {
            cin >> num;
            deq.push_back(num);
        }
        else if (symb = '*')
        {
            if (!deq.empty())
            {
                res.push_front(deq.front() + deq.back());
                deq.pop_front();
                if (!deq.empty())
                    deq.pop_back();
            }
            else
                res.push_front(-987);
        }
    }

    while (!res.empty())
    {
        if (res.back() == -987)
            cout << "error" << endl;
        else
            cout << res.back() << endl;
        res.pop_back();
    }

    return 0;
}