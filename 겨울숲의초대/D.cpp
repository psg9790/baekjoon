#include <bits/stdc++.h>
using namespace std;

int n, b;

struct Machine
{
    float per, addper;
    int cost;
    int num;
    int used;
    Machine(float d, float a, int c, int nu) : per(d), addper(a), cost(c), num(nu), used(0) {}
};
struct cmpper
{
    bool operator()(Machine a, Machine b)
    {
        return a.per > b.per;
    }
};
struct cmpnum
{
    bool operator()(Machine a, Machine b)
    {
        return a.num > b.num;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    float percentage = 0;
    priority_queue<Machine, vector<Machine>, cmpper> machines;
    priority_queue<Machine, vector<Machine>, cmpnum> cpq;

    cin >> n >> b;
    for (int i = 0; i < n; i++)
    {
        int d, a, c;
        cin >> d >> a >> c;
        machines.push(Machine(d / 100.0, a / 100.0, c, i));
    }

    int usedcost = 0;
    while (true)
    {
        if (machines.size() < 1)
        {
            break;
        }
        Machine m = machines.top();
        machines.pop();

        if (usedcost + m.cost <= b)
        {
            usedcost += m.cost;
            if (m.per + m.addper >= 1)
            {
                m.per = 1;
                m.used += 1;
                cpq.push(m);

                if (percentage == 0)
                {
                    percentage = m.per;
                }
                else
                {
                    percentage *= m.per;
                }
            }
            else
            {
                m.per += m.addper;
                m.used += 1;
                machines.push(m);
            }
        }
        else
        {
            machines.push(m);
            break;
        }
    }

    while (machines.size() > 0)
    {
        Machine m = machines.top();
        if (percentage == 0)
        {
            percentage = m.per;
        }
        else
        {
            percentage *= m.per;
        }
        cpq.push(m);
        machines.pop();
    }
    cout << percentage * pow(10, 2 * n) << '\n';
    while (cpq.size() > 0)
    {
        cout << cpq.top().used << ' ';
        cpq.pop();
    }
}
