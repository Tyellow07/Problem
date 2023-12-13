#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
//#define int long long
#define ll long long
#define F first
#define S second
#define pii pair<int, int>
#define pll pair<long, long>
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp(x, y) make_pair(x, y)
#define imp(x, y) insert(make_pair(x, y))
#define all(x) x.begin(), x.end()
using namespace std;

signed main(){
    fast;
    int n, m, d=1;
    cin >> n >> m;
    vector<int> v(n);
    stack<int> a;
    for(auto &A:v){
        cin >> A;
    }
    for(int i=0;i<n;i++){
        while(1){
            a.push(d);
            d++;
            if(a.top()==v[i]){
                a.pop();
                break;
            }
            if(a.size()>m){
                cout << "no" << endl;
                return 0;
            }
        }
    }
        if(a.size()==0)
            cout << "yes";
        else
            cout << "no" << endl;
    }
