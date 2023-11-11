#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(48763==87), cin.tie(0), cout.tie(0);
#define endl "\n"
using namespace std;
vector<vector<char>> v(501,vector<char> (501,' '));
vector<vector<bool>> s(501,vector<bool> (501,0));
int n,m;
long long nans=0,bans,lans=0;

void dfs (int x, int y)
{
    s[x][y]=1;
    bans++;
    if(y-1>=0 && v[x][y-1]=='J' && s[x][y-1]==0)
        dfs(x,y-1);
    if(y+1<n && v[x][y+1]=='J' && s[x][y+1]==0)
        dfs(x,y+1);
    if(x-1>=0 && v[x-1][y]=='J' && s[x-1][y]==0)
        dfs(x-1,y);
    if(x+1<m && v[x+1][y]=='J' && s[x+1][y]==0)
        dfs(x+1,y);

}

int main()
{
    IOS
    cin >> m >> n;
    for(int i=0;i<n;i++)
        for(int k=0;k<m;k++)
            cin >> v[i][k];
    for(int i=0;i<n;i++)
        for(int k=0;k<m;k++)
        {
            if(v[i][k]!='J' || s[i][k]==1)
                continue;
            bans=0;
            dfs(i,k);
            nans++;
            lans=max(lans, bans);
        }
    cout << nans << ' ' << lans;
    return 0;
}
