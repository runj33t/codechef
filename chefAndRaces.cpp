#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<math.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define tc(t) \
    long long int t;    \
    cin >> t; \
    while (t--)
#define loop(var, n) for (int var = 0; var < n; var++)
#define ll long long int
using namespace std;
void solve()
{
    int x,y,a,b,ans;
    cin>>x>>y>>a>>b;
    if(x != a && y != b && x != b && y != a){
        ans = 2;
    }else if(x+y == a+b){
        ans = 0;
    }else{
        ans = 1;
    }
    cout<<ans<<endl;
}
int main()
{
    fast
    tc(t)
    {
        solve();
    }
    return 0;
}