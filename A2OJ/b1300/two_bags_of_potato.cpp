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

int main(){
    ull n,k,y;
    cin >> y >> k >> n;
    n = (int(n/k) * k) - y;
    if(n <= 0){
        cout << "-1";
        return 0;
    }
    V<int> v;
    int lim = k;
    if(k < y){
        while(lim < y){
            lim+=k;
        }
    }
    int x = lim-y;
    if(x == 0)x+=k;
    if(x > n){cout << "-1";return 0;}
    while(x <= n){
        cout << x << " ";
        x+=k;
    }
    return 0;
}