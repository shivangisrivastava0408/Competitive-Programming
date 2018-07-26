/*
 ____________________________________________________________
|                                                            |
|                   Author: ay2306                           |
|____________________________________________________________|

*/
#include <bits/stdc++.h>
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define MAXN 25
using namespace std;
ll dp[9];


int main(){
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    V<ll> v;
    for(int i = 3; i < 10; ++i)dp[i]=i*dp[i-1];
    for(ll i = 10; i < 10000000; ++i){
        ll sum = 0;
        ll n = i;
        while(n){
            sum+=dp[n%10];
            n/=10;
        }
        if(sum == i)v.pb(i);
    }
    ll ans = 0;
    for(int i = 0; i < v.size(); ++i){cout << v[i] << " ";ans+=v[i];}
    cout << endl << ans << endl;
    return 0;
}