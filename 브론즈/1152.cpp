#include <bits/stdc++.h>
using namespace std;

string input;
string token;
int cnt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    getline(cin, input);

    istringstream ss(input);
    while (getline(ss, token, ' '))
    {
        if (token != "")
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
}