#include <bits/stdc++.h>
using namespace std;

vector <int> v[801];
bool fin[801];

void dfs (int e)
{
    fin[e]=1;
    for(int g : v[e])
        if(!fin[g])
            dfs (g);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while(cin >> n >> m)
    {
        for(int i=0;i<801;i++) v[i].clear();
        for(int i=0;i<801;i++) fin[i]=0;
        int fb, fe;
        for(int i=0;i<m;i++)
        {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
        }
        cin >> fb >> fe;
        dfs (fb);
        if(fin[fe])
            cout << "Yes!!!" << endl;
        else cout << "No!!!"<<  endl;
    }
    
}
