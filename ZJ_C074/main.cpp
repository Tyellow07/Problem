//#include <bits/stdc++.h>
//#define ios ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//#define endl "\n"
//#define debug(x) cerr<<#x<<":"<<x<<endl;
//#define debuq(x) cerr<<"debug:"<<x<<endl;
//#define ff first
//#define ss second
//#define all(x) x.begin(),x.end()
//using namespace std;
//
//
//int32_t main()
//{
//    int y=0;
//    int n;
//    
//    while(cin >> n,n)
//    {
//        y++;
//        vector<int> a;
//        for(int i=0;i<n;i++)
//        {
//            int b;
//            cin >> b;
//            a.push_back(b);
//        }
//        int h=0;
//        int z, x, c, v, b, m;
//        for(z=0;z<n-5;z++)
//            for(x=z+1;x<n-4;x++)
//                for(c=x+1;c<n-3;c++)
//                    for(v=c+1;v<n-2;v++)
//                        for(b=v+1;b<n-1;b++)
//                            for(m=b+1;m<n;m++)
//                            {
//                                h++;
//                                if(y==1 && h==1)
//                                    cout << a[z] << " " << a[x] << " " << a[c] << " " << a[v] << " " << a[b] << " " << a[m];
//                                else if (h==1 && y!=1)
//                                    cout << '\n' << '\n' << a[z] << " " << a[x] << " " << a[c] << " " << a[v] << " " << a[b] << " " << a[m];
//                                else cout << '\n' << a[z] << " " << a[x] << " " << a[c] << " " << a[v] << " " << a[b] << " " << a[m];
//                                
//                            }
//        
//    }
//    return 0;
//}
