#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a[11];
    for (int i=0;i<m;i++)
    {
        int j ,k;
        cin >> j >> k;
        a[j].push_back(k);
        a[k].push_back(j);
    }
    for (int i=1;i<=n;i++)
    {
        sort(a[i].begin(), a[i].end());
        cout << i << ':';
        for(int d : a[i])
            cout << ' ' << d;
        cout << endl;
    }
}
