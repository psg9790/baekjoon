#include <bits/stdc++.h>
using namespace std;

string input;
stack<char> stk;
char lastPushed;
int chunk = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        stk.push(input[i]);
        if (input[i] == ')')
        {
            stk.pop();
            stk.pop();
            if (lastPushed == '(')
            {
                chunk += stk.size();
            }
            else if (lastPushed == ')')
            {
                chunk += 1;
            }
        }
        lastPushed = input[i];
    }
    cout << chunk << '\n';
}