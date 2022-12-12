#include <bits/stdc++.h>
using namespace std;

int n, k;

struct Jewel
{
    int weight, value;
    Jewel(int w, int v) : weight(w), value(v) {}
};
struct cmp
{
    bool operator()(Jewel a, Jewel b)
    {
        return a.value < b.value;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<Jewel, vector<Jewel>, cmp> pq;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int w, v;
        cin >> w >> v;
        pq.push(Jewel(w, v));
    }
    while (!pq.empty())
    {
        Jewel jewel = pq.top();
        pq.pop();
        cout << jewel.weight << jewel.value << '\n';
    }
}