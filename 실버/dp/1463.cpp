#include <iostream>
using namespace std;

int cnt = 0;

void make1(int x)
{
    cout << x << '\n';
    if (x > 1)
    {
        if (x % 3 == 0)
        {
            if (x % 2 == 0)
            {
                if (x / 2 < x / 3)
                    make1(x / 2);
                else
                    make1(x / 3);
            }
            else
            {
                make1(x / 3);
            }
        }
        else if (x % 2 == 0)
        {
            if (x % 3 == 1)
            {
                if (x / 2 > (x - 1) / 3)
                {
                    make1(x - 1);
                }
                else
                {
                    make1(x / 2);
                }
            }
            else
            {
                make1(x / 2);
            }
        }
        else
        {
            make1(x - 1);
        }

        cnt++;
    }
}

int main()
{
    int x;
    cin >> x;
    make1(x);
    cout << cnt << '\n';

    return 0;
}