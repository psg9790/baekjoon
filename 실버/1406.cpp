#include <bits/stdc++.h>
using namespace std;

int n;                // ����
string inputstr;      // �Է¹��ڿ�
stack<char> before;   // ���ڿ� char�迭(�ʱ�)
stack<char> after;    // �ӽ�ó���� ����
vector<string> fixes; // ���ĵ�
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    // ���ڿ� �Է�
    cin >> inputstr;
    char chars[inputstr.length() + 1];
    inputstr.copy(chars, inputstr.length() + 1);
    // ���� ���� �Է�
    cin >> n;

    // ���ڿ� ��������
    for (int i = 0; i < inputstr.length(); i++)
    {
        before.push(chars[i]);
    }

    // ���� N�� �Է�
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string token;
        getline(cin, token);
        fixes.push_back(token);
    }

    // ���� char�迭�� ó��
    char ins[3];
    for (int i = 0; i < n; i++)
    {
        strcpy(ins, fixes[i].c_str());
        if (ins[0] == 'L')
        {
            // Ŀ�� ��������
            if (before.size() > 0)
            {
                after.push(before.top());
                before.pop();
            }
        }
        else if (ins[0] == 'D')
        {
            // Ŀ�� ����������
            if (after.size() > 0)
            {
                before.push(after.top());
                after.pop();
            }
        }
        else if (ins[0] == 'B')
        {
            // Ŀ�� ���� ���� ����
            if (before.size() > 0)
            {
                before.pop();
            }
        }
        else if (ins[0] == 'P')
        {
            // Ŀ�� ���ʿ� ���� �߰�
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