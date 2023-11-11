#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
using namespace std;
vector <int> a[10001];
int mx,m;
bool b[10001]{0};
void dfs(int x)
{
    b[x]=1;
    for(int i=0;i<a[x].size();i++)
    {
        a[x][i]
    }
}

int main()
{
    IOS
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
        while (static_cast<void>(cin >> m),m!=-1)
        {
            a[i].push_back(m);
            a[m].push_back(i);
            
        }
    mx=0;
    dfs(1);
    
    b.clear();
    g.clear();
    mx=0;
    dfs(m);
    cout << m;
}
