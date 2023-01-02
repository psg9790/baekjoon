#include <bits/stdc++.h>
using namespace std;

int n;
int sstime = 0;
int setime = 0;
int cuT = 0;

struct ResTime
{
    int start;
    int end;
    ResTime(int s, int e) : start(s), end(e) {}
};
struct rescmp
{
    bool operator()(ResTime a, ResTime b)
    {
        if (a.end == b.end)
        {
            return a.start > b.start;
        }
        return a.end > b.end;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;
    priority_queue<ResTime, vector<ResTime>, rescmp> pq;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int stime, etime;
        cin >> stime >> etime;
        pq.push(ResTime(stime, etime));
    }
    while (!pq.empty())
    {
        ResTime rt = pq.top();
        pq.pop();
        int stime = rt.start;
        int etime = rt.end;

        if (stime < setime)
        {
            if (etime < setime)
            {
                if (stime >= cuT)
                {
                    sstime = stime;
                    setime = etime;
                }
            }
        }
        else
        {
            cuT = setime;

            sstime = stime;
            setime = etime;
            cnt += 1;
        }
    }

    cout << cnt << '\n';
}