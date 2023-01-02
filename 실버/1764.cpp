#include <bits/stdc++.h>
using namespace std;

int n, m;
set<string> sset;

struct cmpstr
{
    bool operator()(string a, string b)
    {
        return a > b;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string token;
        cin >> token;
        sset.insert(token);
    }
    priority_queue<string, vector<string>, cmpstr> spq;

    for (int i = 0; i < m; i++)
    {
        string token;
        cin >> token;
        // find 반환값이 iterator임
        auto it = sset.find(token);
        // 찾지 못하면 sset.end() 나옴
        if (it != sset.end())
        {
            spq.push(token);
        }
    }
    cout << spq.size() << '\n';
    while (!spq.empty())
    {
        cout << spq.top() << '\n';
        spq.pop();
    }
}