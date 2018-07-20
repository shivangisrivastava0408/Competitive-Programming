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
#define FILE_READ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
using namespace std;

ll dp[10];

bool check(ll a){
    ll t = a;
    ll b = 0;
    while(t){
        b+=dp[t%10];
        t/=10;
    }
    if(b == a)return true;
    return false;
}

int main(){
    ll ans = 0;
    for(ll i = 0; i < 10; ++i)dp[i]=(i*i*i*i*i);
    cout << LLONG_MAX/(10000000000*1000000) << endl;
    for(ll i = 10; i < LLONG_MAX/(10000000000); ++i){
        if(i%1000000 == 0)cout << i/1000000 << endl;
        if(check(i))ans+=i;
    }
    cout << ans;
    return 0;
}