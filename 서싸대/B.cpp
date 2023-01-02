#include <bits/stdc++.h>
using namespace std;

int n;

struct Pair
{
    string mento;
    string menti;
    Pair(string o, string i) : mento(o), menti(i) {}
};
struct cmpstr
{
    bool operator()(Pair a, Pair b)
    {
        if (a.mento == b.mento)
        {
            int idx = 0;
            while (true)
            {
                if (a.menti[idx] == b.menti[idx])
                {
                    idx += 1;
                    continue;
                }
                return a.menti[idx] < b.menti[idx];
            }
        }
        else
        {
            int idx = 0;
            while (true)
            {
                if (a.mento[idx] == b.mento[idx])
                {
                    idx += 1;
                    continue;
                }
                return a.mento[idx] > b.mento[idx];
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<Pair, vector<Pair>, cmpstr> pq;

    string mentoo, mentii;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> mentoo >> mentii;
        pq.push(Pair(mentoo, mentii));
    }

    while (!pq.empty())
    {
        Pair popped = pq.top();
        pq.pop();
        cout << popped.mento << ' ' << popped.menti << '\n';
    }
}