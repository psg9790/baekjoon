#include <bits/stdc++.h>
using namespace std;

int n;

bool CheckBeut(int _num)
{
    int idx = 2;
    int joint = _num;

    int summation = 1;
    while (true)
    {
        if (idx >= joint)
        {
            break;
        }
        if (_num % idx == 0)
        {
            if (idx != _num / idx)
            {
                summation += idx;
                summation += _num / idx;
            }
            else
            {
                summation += idx;
            }
            joint = _num / idx;
        }
        idx += 1;
    }

    if (summation <= _num)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        bool isbeut = true;
        int token;
        cin >> token;

        if (CheckBeut(token))
        {
            int idx = 2;
            int joint = token;
            while (true)
            {
                if (idx >= joint)
                {
                    break;
                }
                if (token % idx == 0)
                {
                    if (CheckBeut(idx))
                    {
                        isbeut = false;
                        break;
                    }
                    if (CheckBeut(token / idx))
                    {
                        isbeut = false;
                        break;
                    }
                }
                idx += 1;
            }

            if (isbeut)
            {
                cout << "Good Bye" << '\n';
            }
            else
            {
                cout << "BOJ 2022" << '\n';
            }
        }
        else
        {
            cout << "BOJ 2022" << '\n';
        }
    }
}