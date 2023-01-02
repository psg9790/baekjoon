#include <bits/stdc++.h>
using namespace std;

int n, m;
int GCD, LCM;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    int divides = 1;
    int mini = min(n, m);
    while (mini > 0)
    {
        if ((mini % divides) == 0)
        {
            if (n % (mini / divides) == 0 & m % (mini / divides) == 0)
            {
                GCD = (mini / divides);
                break;
            }
        }
        divides += 1;
    }

    int times = 1;
    while (true)
    {
        LCM = GCD * times;
        if (LCM % n == 0 & LCM % m == 0)
        {
            break;
        }
        times += 1;
    }
    cout << GCD << '\n'
         << LCM << '\n';
}