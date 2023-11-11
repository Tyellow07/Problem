#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
using namespace std;
vector<vector<bool>> v(1001,vector<bool>(1001,0));
vector<vector<bool>> s(1001,vector<bool>(1001,0));
int n, m;
int ans=0;
void bfs(int x, int y)
{
    s[x][y]=1;
    if(y-1>=0 && s[x][y-1]==0 && v[x][y-1]==1)
        bfs(x,y-1);
    if(y+1<m  && s[x][y+1]==0 && v[x][y+1]==1)
        bfs(x,y+1);
    if(x-1>=0  && s[x-1][y]==0 && v[x-1][y]==1)
        bfs(x-1,y);
    if(x+1<n  && s[x+1][y]==0 && v[x+1][y]==1)
        bfs(x+1,y);
    if(x-1>=0 && y-1>=0 && s[x-1][y-1]==0 && v[x-1][y-1]==1)
        bfs(x-1,y-1);
    if(x+1<m && y-1>=0 && s[x+1][y-1]==0 && v[x+1][y-1]==1)
        bfs(x+1,y-1);
    if(x-1>=0 && y+1<n && s[x-1][y+1]==0 && v[x-1][y+1]==1)
        bfs(x-1,y+1);
    if(x+1<m && y+1<n && s[x+1][y+1]==0 && v[x+1][y+1]==1)
        bfs(x+1,y+1);
}
int main()
{
    IOS
    while(static_cast<void>(cin >> n >> m), m+n)
    {
        for(int i=0;i<n;i++)
            for(int k=0;k<m;k++)
                static_cast<void>(v[i][k]=0),s[i][k]=0;
        for(int i=0;i<n;i++)
        {
            string s;
            cin >> s;
            for(int k=0;k<m;k++)
            {
                v[i][k]=(s[k]-'0');
            }
        }
        ans=0;
        for(int i=0;i<n;i++)
            for(int k=0;k<m;k++)
            {
                if(v[i][k]==1&&s[i][k]==0)
                {
                    bfs(i,k);
                    ans++;
                }
            }
        cout << ans << endl;
    }
    return 0;
}
