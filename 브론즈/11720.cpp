#include <bits/stdc++.h>
using namespace std;

int n;
char arr[101] = {};
int sum = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> arr;

    for (int i = 0; i < n; i++)
    {
        sum += (arr[i] - '0');
    }
    cout << sum << '\n';
}