#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> arr;
char row[1500];

int nearest_corn, nearest_dist;

int *find_nearest_corner(int size, int row, int column)
{
    int rtn[2];
    int dist;
    int mindist = (size - 1) * 2;

    dist = row + column;
    if (dist < mindist)
    {
        mindist = dist;
        rtn[0] = 0;
        rtn[1] = dist;
    }
    dist = abs(row - (n - 1)) + column;
    if (dist < mindist)
    {
        mindist = dist;
        rtn[0] = 1;
        rtn[1] = dist;
    }
    dist = row + abs(column - (n - 1));
    if (dist < mindist)
    {
        mindist = dist;
        rtn[0] = 2;
        rtn[1] = dist;
    }
    dist = abs(row - (n - 1)) + abs(column - (n - 1));
    if (dist < mindist)
    {
        mindist = dist;
        rtn[0] = 3;
        rtn[1] = dist;
    }
    return rtn;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    nearest_dist = 2 * (n - 1);

    for (int i = 0; i < n; i++)
    {
        string token;
        cin >> token;
        arr.push_back(token);
    }

    for (int i = 0; i < n; i++)
    {
        strcpy(row, arr[i].c_str());
        for (int j = 0; j < 1500; j++)
        {
            if (row[j] != 0)
            {
                if (row[j] == 'G')
                {
                    int *rst = find_nearest_corner(n, i, j);
                    if (nearest_dist > rst[1])
                    {
                        nearest_corn = rst[0];
                        nearest_dist = rst[1];
                    }
                }
            }
            else
            {
                break;
            }
        }
    }
}