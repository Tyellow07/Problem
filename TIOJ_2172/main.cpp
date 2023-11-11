#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
using namespace std;
vector <int> a[100001];

int main()
{
    IOS
    int n, m;
    cin >> n >> m;
    for (int i=0;i<n-1;i++)
    {
        int x ,y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin >> x >> y;
        
    }
    return 0;
}

