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

ll abs(ll a){
    if(a < 0)a*=-1;
    return a;
}

void solve(){
    int n;
    ll z1,z2;
    unordered_map<ll,int> m;
    V<ll> v;
    cin >> n >> z1 >> z2;
    ll *arr = new ll[n];
    loop(i,0,n){cin >> arr[i];m[arr[i]]++;}
    for(int i = 0; i < n; ++i){
        if(arr[i] == z1 || arr[i] == z2 || arr[i] == -1*z1 || arr[i] == -1*z2){
            cout << "1\n";
            return;
        }
    }
    if(z1 == 0 || z2 == 0){
        cout << "2\n";
        return 0;
    }
    for(int i = 0; i < n; ++i){
        auto a = m.find(z1-arr[i]);
        auto b = m.find(z1+arr[i]);
        auto c = m.find(z2-arr[i]);
        auto d = m.find(z2+arr[i]);
        if(a!=m.end() || b!=m.end() || c!=m.end() || d!=m.end()){
            cout << "2\n";
            return;
        }
    }
    cout << "0\n";    
}

int main(){
    int t = 1;
    cin >> t;
    while(t--)solve();
    return 0;
}