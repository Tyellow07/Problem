#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j, k, g;
    cin >> n >> g;
    vector<int> p;
    p.push_back(g);
    for(k=0;k<n-1;k++)
    {
        cin >> g;
        p.push_back(g);
        if (p[0] == 0)
            break;
    }
    stack<int> s;
    int h=0;
    for (i = 1; i <= n; i++)
    {
        s.push(i);
        while (s.size() && s.top() == p[h])
        {
            s.pop();
            h++;
        }
    }
    if (s.size() == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    cout << endl;
}

