#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
#define int long long
using namespace std;

int32_t main()
{
    IOS
    int n;
    cin >> n;
    int g=1,i;
    for(i=1;i<n;i++)
    {
        g=(g*(i+1))+(n*i);
    }
    cout << g/;
    return 0;
}

