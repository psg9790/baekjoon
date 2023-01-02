#include <bits/stdc++.h>
using namespace std;

int n;
string ipt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> ipt;

    int idx = 0;
    int cntb = 0;
    int cnts = 0;
    for (int i = 0; i < n; i++)
    {
        if (ipt[idx] == 'b')
        {
            cntb += 1;
            idx += 7;
        }
        else if (ipt[idx] == 's')
        {
            cnts += 1;
            idx += 8;
        }
    }
    if (cntb >= cnts)
    {
        cout << "bigdata?" << ' ';
    }
    if (cntb <= cnts)
    {
        cout << "security!" << ' ';
    }
}