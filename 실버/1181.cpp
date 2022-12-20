#include <bits/stdc++.h>
using namespace std;

struct cmpstr
{
    bool operator()(string a, string b)
    {
        if (a.length() == b.length())
        {
            return a > b;
        }
        return a.length() > b.length();
    }
};

int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<string, vector<string>, cmpstr> pq;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string token;
        cin >> token;
        pq.push(token);
    }

    string bfstr;
    while (!pq.empty())
    {
        if (bfstr != pq.top())
        {
            cout << pq.top() << '\n';
        }

        bfstr = pq.top();
        pq.pop();
    }
}