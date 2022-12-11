#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int arr[n + 1]; // 결국 범위 내에 2*2 타일이 몇 개 들어갈 수 있냐임

    arr[1] = 1; // 2*1 기본
    arr[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10'007;
    }

    // 1:1, 2:2, 3:3, 4:5, 5:8
    cout << arr[n] << '\n';
}