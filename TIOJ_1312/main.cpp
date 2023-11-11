// 並查集
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define pb push_back
using namespace std;
int  boss[10001];
int finding(int x)
{
    if (boss[x]==x)
        return x;
    return boss[x]=finding(boss[x]);
}

void c(int x, int y)
{
    int i=finding(x);
    int j=finding(y);
    if (j>i) swap(i,j);
    boss[i]=boss[j];
}
int main()
{
    IOS
    int n, m;
    while(cin >> n >> m)
    {
        for (int i=1;i<=n;i++)
        {
            boss[i]=i;
        }
        for (int i=0;i<m;i++)
        {
            int x, y;
            cin >> x >> y;
            c(x, y);
        }
        int k;
        cin >> k;
        cout << finding(k) << endl;
    }
}

