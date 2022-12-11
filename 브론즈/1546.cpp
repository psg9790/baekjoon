#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
int main()
{
    cin >> n;

    arr.clear();
    for (int i = 0; i < n; i++)
    {
        string token;
        cin >> token;
        arr.push_back(stoi(token));
    }

    // 가장 큰 값 인덱스 찾기
    int h = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[h] < arr[i])
        {
            h = i;
        }
    }

    // 평균을 위한 합 연산
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (double)arr[i] / arr[h] * 100;
    }
    cout << sum / n << '\n';

    return 0;
}