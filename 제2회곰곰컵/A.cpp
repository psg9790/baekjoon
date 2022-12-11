#include <bits/stdc++.h>
using namespace std;

int n;
string token;
string stringBuffer;
int rst;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> token;
        istringstream ss(token);
        while (getline(ss, stringBuffer, '-'))
        {
            if (stringBuffer != "D")
            {
                if (stoi(stringBuffer) <= 90)
                {
                    rst++;
                }
            }
        }
    }
    cout << rst << '\n';
    return 0;
}