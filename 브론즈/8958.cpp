#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int stkscore = 1;
        int fscore = 0;
        string token;
        cin >> token;
        for (int j = 0; j < token.length(); j++)
        {
            if (token[j] == 'O')
            {
                fscore += stkscore;
                stkscore += 1;
            }
            else if (token[j] == 'X')
            {
                stkscore = 1;
            }
        }
        cout << fscore << '\n';
    }
}