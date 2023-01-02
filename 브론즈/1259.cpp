#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string token;
    while (cin >> token)
    {
        if (token == "0")
        {
            return 0;
        }

        bool ispel = true;
        int sliced = (int)(token.length() / 2);
        for (int i = 0; i < sliced; i++)
        {
            if (token[i] != token[token.length() - i - 1])
            {
                ispel = false;
                break;
            }
        }
        cout << (ispel ? "yes" : "no") << '\n';
    }
}