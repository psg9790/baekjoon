#include <bits/stdc++.h>
using namespace std;

int A, B, C, X, Y, Z = 0;
int hunger, coupon = 0;
int mini = 0;
int satisfied = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B >> C >> X >> Y >> Z;

    mini = min(A, X);
    satisfied += mini;
    A -= mini;
    X -= mini;

    mini = min(B, Y);
    satisfied += mini;
    B -= mini;
    Y -= mini;

    mini = min(C, Z);
    satisfied += mini;
    C -= mini;
    Z -= mini;

    while (true)
    {
        if (X > 0)
        {
            coupon = (int)(X / 3);
            if (coupon > 0)
            {
                Y += coupon;
                X -= coupon * 3;
                mini = min(B, Y);
                satisfied += mini;
                B -= mini;
                Y -= mini;
            }
        }
        if (Y > 0)
        {
            coupon = (int)(Y / 3);
            if (coupon > 0)
            {
                Z += coupon;
                Y -= coupon * 3;
                mini = min(C, Z);
                satisfied += mini;
                C -= mini;
                Z -= mini;
            }
        }
        if (Z > 0)
        {
            coupon = (int)(Z / 3);
            if (coupon > 0)
            {
                X += coupon;
                Z -= coupon * 3;
                mini = min(A, X);
                satisfied += mini;
                A -= mini;
                X -= mini;
            }
        }
        if ((int)(X / 3) == 0 & (int)(Y / 3) == 0 & (int)(Z / 3) == 0)
        {
            break;
        }
    }

    // cout << A << ' ' << B << ' ' << C << '\n';
    // cout << X << ' ' << Y << ' ' << Z << '\n';
    cout << satisfied << '\n';
}