#include<bits/stdc++.h>
using namespace std;

int a[9][9];

void che(int i, int k)
{
    for(int j=-1;i>=-9;j--)
        a[i][k]=j;
    
}

void find()
{
    for(int i=0;i<9;i++)
        for(int k=0;k<9;k++)
            if(a[i][k]==0||a[i][k]<0)
                che(i,k);
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<9;i++)
        for(int k=0;k<9;k++)
            cin >> a[i][k];
    find();
    return 0;
}
