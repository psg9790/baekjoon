#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, n;
    cin >> m;
    cin >> n;

    int sum = 0;
    float sm = sqrt(m);
    float sn = sqrt(n);

    for (int x = ceil(sm); x <= floor(sn); x++)
    {
        sum += pow(x, 2);
    }

    if (sum == 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << sum << '\n';
        cout << pow((int)ceil(sm), 2) << '\n';
    }

    return 0;
}