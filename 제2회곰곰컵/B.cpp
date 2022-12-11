#include <bits/stdc++.h>
using namespace std;

int n;
string person1, person2;
vector<string> gomgomgomgom;

bool dancestart;
bool on1, on2;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> person1;
        cin >> person2;

        if (!dancestart)
        {
            if ((person1 == "ChongChong") | (person2 == "ChongChong"))
            {
                gomgomgomgom.push_back(person1);
                gomgomgomgom.push_back(person2);
                dancestart = true;
            }
        }
        else
        {
            on1 = false;
            on2 = false;
            for (int j = 0; j < gomgomgomgom.size(); j++)
            {
                if (gomgomgomgom[j] == person1)
                {
                    on1 = true;
                }
                else if (gomgomgomgom[j] == person2)
                {
                    on2 = true;
                }
                if (on1 & on2)
                {
                    break;
                }
            }
            if (on1 ^ on2)
            {
                if (on1)
                {
                    gomgomgomgom.push_back(person2);
                }
                if (on2)
                {
                    gomgomgomgom.push_back(person1);
                }
            }
        }
    }

    cout << gomgomgomgom.size() << '\n';
    return 0;
}