#include <bits/stdc++.h>
using namespace std;

int n, m;
set<int> nums;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int token;
        cin >> token;
        nums.insert(token);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int token;
        cin >> token;
        auto it = nums.find(token);
        if (it != nums.end())
        {
            cout << '1' << '\n';
        }
        else
        {
            cout << '0' << '\n';
        }
    }
}