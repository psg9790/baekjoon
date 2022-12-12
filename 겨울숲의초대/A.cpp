#include <bits/stdc++.h>
using namespace std;

int oneday = 60 * 24;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int> pq;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int snowing;
        cin >> snowing;
        pq.push(snowing);
    }

    int cnt = 0;
    while (true)
    {
        int fst = pq.top();
        pq.pop();
        fst -= 1;

        int snd = 0;
        if (!pq.empty())
        {
            snd = pq.top();
            pq.pop();
            snd -= 1;
        }
        if (fst != 0)
        {
            pq.push(fst);
        }
        if (snd != 0)
        {
            pq.push(snd);
        }

        cnt += 1;
        if (pq.empty())
        {
            break;
        }
    }
    cout << (cnt <= oneday ? cnt : -1) << '\n';
}