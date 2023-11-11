#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,i,c;
    cin >> n;
    int s[100000]{0};
    for(i=1;i<=n;i++)
    {
        cin >> c;
        s[i]= s[i-1]+c;
    }
    
}
