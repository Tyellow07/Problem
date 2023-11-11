#include <bits/stdc++.h>
#define ios ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define debug(x) cerr<<#x<<":"<<x<<endl;
#define debuq(x) cerr<<"debug:"<<x<<endl;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
using namespace std;
int a[501];
int32_t main()
{
    ios;
    int p = 0, q = 0,i,x,b;
    cin >> p >> q;
    map<int,int> m;
    for(i=0;i<p;i++)
    {
        cin >> a[i];
    }
    
    for(i=0;i<p;i++)
    {
        cin >> b;
        m[a[i]] = b;
    }
    
    return 0;
}


 
