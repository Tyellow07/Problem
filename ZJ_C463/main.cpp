#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define pb push_back
using namespace std;

vector<int> a[100005];
vector<int> b(100005,0);
vector<int> u(100005,0);
long long  hh;

int dfs(int x)
{
    int m=0;
    if (a[x].size()==0)
    {
        u[x]=0;
        hh+=0;
        return 0;
    }
    else
    {
        for(int i=0;i<a[x].size();i++)
        {
            m=max(m, dfs(a[x][i]));
        }
        u[x]=m+1;
        hh+=m+1;
        return m+1;
    }
}

int main()
{
    IOS
    int n,x;
    cin >> n;

    for(int i=1;i<=n;++i)
    {
        cin >> x;
        for(int k=0;k<x;k++)
        {
            int g;
            cin >> g;
            a[i].pb(g);
            b[g]=i;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        if(b[i]==0)
        {
            cout << i << endl;
            dfs(i);
            break;
        }
    }
    
    cout << hh;
    return 0;
}
