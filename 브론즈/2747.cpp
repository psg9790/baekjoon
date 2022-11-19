#include <iostream>
using namespace std;

int con[46];

int fibo(int n)
{
    if (n >= 2)
    {
        if (con[n] == 0)
        {
            con[n] = fibo(n - 1) + fibo(n - 2);
        }
    }
    return con[n];
}

int main()
{
    con[0] = 0;
    con[1] = 1;

    int n;
    cin >> n;
    cout << fibo(n) << '\n';
    return 0;
}