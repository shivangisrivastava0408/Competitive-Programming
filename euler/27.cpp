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

V<ll> p;

int BS(ll val){
    int low = 0;
    int high = p.size()-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(p[mid] == val)return mid;
        if(p[mid] > val)high=mid-1;
        else low = mid+1;
    }
    return -1;
}

ll func(ll a, ll b){
    ll k = b;
    ll ind = 0;
    // cout << k << endl
    if(BS(k)!=-1){
        ind = BS(k);
    }else return 0;
    ll i = 1;
    ll ans = 1;
    while(true){
        k = (i*i)+(a*i)+(b);
        // cout <<k << endl;
        ll d = BS(k);
        if(d!=-1){ans++;ind=d;}
        else break;
        ++i;
    }
    return ans;
}

int main(){
    int s[100100] = {0};
    for(int i = 2; i < 100100; ++i)if(s[i]==0)for(int j = 2; i*j < 100100; ++j)s[i*j]=1;
    for(ll i = 2; i < 100100; ++i)if(s[i] == 0)p.pb(i);
    ll a = -999, b = -999;
    ll o = 0;
    ll ans = -1;
    for(; a < 1000; ++a){
        for(b = -999; b < 1000; ++b){
            ll k = func(a,b);
            if(k > o){
                o = k;
                ans = a*b;
                cout << a << " " << b  << " " << k << endl;
            }
        }
    }
    cout << func(1,41) << endl;
    cout << ans;
    return 0;
}