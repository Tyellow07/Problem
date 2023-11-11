#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define endl "\n"
using namespace std;
int n;
int g;
vector<vector<char>> a(g,vector<char>(g,'.'));

void round(int x)
{
    
}

void center(int x)
{
    for(int i=g/3;i<(g/3)+(g/3);i++)
    {
        for(int k=g/3;k<(g/3)+(g/3);k++)
        {
            a[i][k]='#';
        }
    }
}

int main()
{
    IOS
    cin >> n;
    g=pow(3,n);
    center(1,)
    return 0;

}
