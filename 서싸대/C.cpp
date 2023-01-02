#include <bits/stdc++.h>
using namespace std;

string words;
string encrypts;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> words >> encrypts;

    string wholeKeys = "";
    for (int i = 0; i < words.length(); i++)
    {
        int diff = 0;
        if (encrypts[i] <= words[i])
        {
            diff = (encrypts[i] + 26) - words[i];
        }
        else
        {
            diff = encrypts[i] - words[i];
        }

        wholeKeys.push_back((char)(diff + 64));
    }

    int slice_amount = words.length();
    for (int i = 1; i <= ceil(wholeKeys.length() / 2); i++)
    {
        int times = (int)(wholeKeys.length() / i);
        if (times * i == wholeKeys.length()) // 나눠 떨어지면
        {
            string token = "";
            for (int j = 0; j < i; j++)
            {
                token.push_back(wholeKeys[j]);
            }

            string wholetoken = "";
            for (int j = 0; j < times; j++)
            {
                wholetoken.append(token);
            }

            if (wholeKeys == wholetoken)
            {
                slice_amount = i;
                break;
            }
        }
    }
    cout << wholeKeys.substr(0, slice_amount) << '\n';

    return 0;
}