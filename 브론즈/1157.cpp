#include <bits/stdc++.h>
using namespace std;

string input;
char arr[1'000'001];
int rst[26];
int idx;
int maxval;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> arr;
    // strcpy(arr, input.c_str());
    for (int i = 0; i < 1'000'001; i++)
    {
        if (arr[i] != 0)
        {
            if (arr[i] >= 97)
            {
                idx = arr[i] - 97;
                rst[idx] += 1;
            }
            else
            {
                idx = arr[i] - 65;
                rst[idx] += 1;
            }
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (maxval == rst[i])
        {
            idx = 95;
        }
        if (maxval < rst[i])
        {
            maxval = rst[i];
            idx = i;
        }
    }
    if (idx != 95)
    {

        cout << (char)(idx + 65) << '\n';
    }
    else
    {
        cout << '?' << '\n';
    }
}