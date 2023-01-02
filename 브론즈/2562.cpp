#include <bits/stdc++.h>
using namespace std;

int arr[11] = {};
int maxi = 0;
int maxii = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i < 10; i++)
    {
        cin >> arr[i];
        if (maxi < arr[i])
        {
            maxi = arr[i];
            maxii = i;
        }
    }
    cout << maxi << '\n';
    cout << maxii << '\n';
}