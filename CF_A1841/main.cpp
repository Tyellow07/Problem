#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
using namespace std;

int main()
{
    IOS
    int n,m;
    cin >> n;
    while(n--)
    {
        cin >> m;
        if(m>4)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}

