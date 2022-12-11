#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int token;
        cin >> token;
        arr.push_back(token);
    }

    int hIndex = 0, lIndex = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[lIndex])
        {
            lIndex = i;
            hIndex = i;
        }
        if (arr[i] > arr[hIndex])
        {
            hIndex = i;
            if (max < arr[hIndex] - arr[lIndex])
            {
                max = arr[hIndex] - arr[lIndex];
            }
        }
    }
    if (max > 0)
    {
        cout << max << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }
}