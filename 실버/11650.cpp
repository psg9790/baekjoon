#include <bits/stdc++.h>
using namespace std;

struct Posi
{
    int x;
    int y;

    Posi(int _x, int _y) : x(_x), y(_y) {}
};
struct cmpPosi
{
    bool operator()(Posi a, Posi b)
    {
        return a.x > b.x ? true : (a.x == b.x) & (a.y > b.y);
    }
};

int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<Posi, vector<Posi>, cmpPosi> pq;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int _x, _y;
        cin >> _x >> _y;
        pq.push(Posi(_x, _y));
    }

    while (!pq.empty())
    {
        cout << pq.top().x << ' ' << pq.top().y << '\n';
        pq.pop();
    }
}