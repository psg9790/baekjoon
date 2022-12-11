#include <bits/stdc++.h>
using namespace std;

int *sort(int *arr, int cnt)
{
    int swap;
    for (int x = 0; x < cnt - 1; x++)
    {
        for (int y = 0; y < cnt - 1; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                swap = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = swap;
            }
        }
    }
    return arr;
}
int main()
{
    int cnt;
    cin >> cnt;
    int *num = new int[cnt];
    for (int x = 0; x < cnt; x++)
    {
        cin >> num[x];
    }
    num = sort(num, cnt);

    int ret = 0;
    for (int x = cnt - 1; x >= 0; x--)
    {
        for (int y = 0; y <= x; y++)
        {
            ret += num[y];
        }
    }
    cout << ret << '\n';
}