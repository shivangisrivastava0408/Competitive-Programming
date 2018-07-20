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
#define S set
#define MS multiset
#define M map
#define mp make_pair
#define pb push_back
#define MM multimap
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();

using namespace std;
ll *arr,*dp;
ll n,m,k,sum;   
ll getSegment(ll x){
    if(dp[x] == 0){
        dp[x] = arr[x+m-1]-arr[x-1];
    }
    return dp[x];
}

int main(){
    cin >> n >> m >> k;
    arr = new ll[n+1];
    arr[0] = 0;
    for(int i = 1; i <= n; ++i)cin >> arr[i];
    for(int i = 1; i <= n; ++i)arr[i]+=arr[i-1];
    dp = (ll*)calloc(n+1,sizeof(ll));
    for(int i = 1; i <)
    return 0;
}