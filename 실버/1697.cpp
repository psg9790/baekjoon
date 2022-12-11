#include <bits/stdc++.h>
using namespace std;

int n, k;
queue<int> lft;
int arr[200'001] = {
    0,
};

int push_q(int idx)
{
    int ret = 0;
    if (idx - 1 >= 0)
    {
        if (arr[idx - 1] != 1)
        {
            lft.push(idx - 1);
            arr[idx - 1] = 1;
            ret += 1;
        }
    }
    if (idx + 1 <= 100'000)
    {
        if (arr[idx + 1] != 1)
        {
            lft.push(idx + 1);
            arr[idx + 1] = 1;
            ret += 1;
        }
    }
    if (idx * 2 <= 200'000)
    {
        if (arr[idx * 2] != 1)
        {
            lft.push(idx * 2);
            arr[idx * 2] = 1;
            ret += 1;
        }
    }
    return ret;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n >> k;

    lft.push(n);
    arr[n] = 1;

    int qfront;
    int cost = 0;
    int layer = 1;
    int next_layer = 0;
    bool found = false;

    while (true)
    {
        for (int i = 0; i < layer; i++)
        {
            qfront = lft.front();
            lft.pop();
            if (qfront == k)
            {
                found = true;
                break;
            }
            next_layer += push_q(qfront);
        }
        if (found)
        {
            break;
        }
        layer = next_layer;
        next_layer = 0;
        cost += 1;
    }
    cout << cost << '\n';
}