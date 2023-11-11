#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main()
{
    IOS
    int i=0;
    string s;
    while(cin >> s)
    {
        i++;
        if(i!=1)
            cout << endl;
        vector<char> v;
        for(char a: s)
            v.push_back(a);
        sort(v.begin(),v.end());
        do
        {
            for(char a: v)
                cout << a;
            cout << endl;
        } while (next_permutation(v.begin(),v.end()));
    }
}
