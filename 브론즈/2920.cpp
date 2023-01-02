#include <bits/stdc++.h>
using namespace std;

int arr[8];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    bool checks = true;
    if (arr[0] == 1)
    {
        for (int i = 1; i < 8; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                checks = false;
            }
        }
        if (checks)
        {
            cout << "ascending" << '\n';
        }
        else
        {
            cout << "mixed" << '\n';
        }
    }
    else if (arr[0] == 8)
    {
        for (int i = 1; i < 8; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                checks = false;
            }
        }
        if (checks)
        {
            cout << "descending" << '\n';
        }
        else
        {
            cout << "mixed" << '\n';
        }
    }
    else
    {
        cout << "mixed" << '\n';
    }
}