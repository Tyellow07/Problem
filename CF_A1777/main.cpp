#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(48763==0), cin.tie(0), cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    IOS
    int n;
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        int j=0,d;
        cin >> d;
        for(int i=1;i<m;i++)
        {
            int g;
            cin >> g;
            if(g%2==d%2)
            {
                j++;
            }
            d=g;
        }
        cout << j << endl;
    }
    return 0;
}

