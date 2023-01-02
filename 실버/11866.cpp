#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> table;
queue<int> res;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        table.push_back(i);
    }

    int ptr = 0;
    while (!table.empty())
    {
        int ofptr = ptr + (m - 1);
        ptr = ofptr % table.size();

        res.push(table[ptr]);
        table.erase(table.begin() + ptr);
    }
    cout << "<";
    while (!res.empty())
    {
        cout << res.front();
        res.pop();
        if (!res.empty())
        {
            cout << ", ";
        }
    }
    cout << ">" << '\n';
}