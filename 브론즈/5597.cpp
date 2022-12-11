#include <bits/stdc++.h>
using namespace std;

int token;
int arr[30] = {0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 28; i++)
    {
        cin >> token;
        arr[token - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if (arr[i] < 1)
        {
            cout << i + 1 << '\n';
        }
    }
}