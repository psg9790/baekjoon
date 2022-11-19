#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int count = 0;

    while (x != 1)
    {
        if (x % 6 == 0)
        {
            if (x / 3 > x / 2)
            {
                x = x / 2;
            }
            else
            {
                x = x / 3;
            }
        }
        count += 1;
        cout << x << endl;
    }
    cout << count << endl;
}