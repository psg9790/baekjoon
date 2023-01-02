#include <bits/stdc++.h>
using namespace std;

struct Bank
{
    int pos;
    int time;
    int money;
    Bank(int x, int t, int c) : pos(x), time(t), money(c) {}
};

int n;
vector<Bank> banks;
int rubbed[300'000] = {
    0,
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, t, c;
        cin >> x >> t >> c;
        Bank token = Bank(x, t, c);
        banks.push_back(token);

        if ((banks[i].pos - banks[i - 1].pos) == (banks[i].time - banks[i - 1].time))
        {
            rubbed[i] = rubbed[i - 1] + banks[i].money;
        }
        else
        {
            if (banks[i].money < rubbed[i - 1])
            {
                rubbed[i] = rubbed[i - 1];
            }
        }
    }
}