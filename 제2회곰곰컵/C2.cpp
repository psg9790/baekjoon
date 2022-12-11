#include <bits/stdc++.h>
using namespace std;
int gom[3];
int gomgom[3];
int maxgom, mingom;
int subgom;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> gom[0] >> gom[1] >> gom[2] >> gomgom[0] >> gomgom[1] >> gomgom[2];
    maxgom = gom[0] + gom[1] + gom[2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            subgom = gom[j] - gomgom[j];
            if (subgom >= 0)
            {
                gom[j] = subgom;
                gomgom[j] = 0;
            }
            else
            {
                gom[j] = 0;
                if (j != 2)
                {
                    gomgom[j + 1] += (int)(-subgom / 3);
                }
                else
                {
                    gomgom[0] += (int)(-subgom / 3);
                }
                gomgom[j] = -subgom % 3;
            }
        }
    }
    mingom = gom[0] + gom[1] + gom[2];
    cout << maxgom - mingom << '\n';
}