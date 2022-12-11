#include <bits/stdc++.h>
using namespace std;

int n;                // 개수
string inputstr;      // 입력문자열
stack<char> before;   // 문자열 char배열(초기)
stack<char> after;    // 임시처리용 스택
vector<string> fixes; // 수식들
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    // 문자열 입력
    cin >> inputstr;
    char chars[inputstr.length() + 1];
    inputstr.copy(chars, inputstr.length() + 1);
    // 수식 개수 입력
    cin >> n;

    // 문자열 스택으로
    for (int i = 0; i < inputstr.length(); i++)
    {
        before.push(chars[i]);
    }

    // 수식 N개 입력
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string token;
        getline(cin, token);
        fixes.push_back(token);
    }

    // 수식 char배열로 처리
    char ins[3];
    for (int i = 0; i < n; i++)
    {
        strcpy(ins, fixes[i].c_str());
        if (ins[0] == 'L')
        {
            // 커서 왼쪽으로
            if (before.size() > 0)
            {
                after.push(before.top());
                before.pop();
            }
        }
        else if (ins[0] == 'D')
        {
            // 커서 오른쪽으로
            if (after.size() > 0)
            {
                before.push(after.top());
                after.pop();
            }
        }
        else if (ins[0] == 'B')
        {
            // 커서 왼쪽 문자 삭제
            if (before.size() > 0)
            {
                before.pop();
            }
        }
        else if (ins[0] == 'P')
        {
            // 커서 왼쪽에 문자 추가
            before.push(ins[2]);
        }
    }
    if (after.size() > 0)
    {
        while (after.size() > 0)
        {
            before.push(after.top());
            after.pop();
        }
    }

    while (before.size() > 0)
    {
        after.push(before.top());
        before.pop();
    }

    while (after.size() > 0)
    {
        cout << after.top();
        after.pop();
    }
}