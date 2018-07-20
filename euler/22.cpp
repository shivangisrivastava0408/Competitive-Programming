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
#define FILE_READ freopen("22set.dat","r",stdin);freopen("output.txt","w",stdout);
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
using namespace std;

int main(){
    FILE_READ
    int n;
    cin >> n;
    ull t = 0,p;
    V<string> v;
    for(int i = 0; i <n; ++i){
        string a;
        cin >> a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    for(int i = 1; i <= n; ++i){
        p = 0;
        string a;
        a = v[i-1];
        for(int j = 0; j < a.length(); ++j){
            p+=(int(a[j]-'A'+1));
        }
        t+=(p*i);
    }
    cout << t;
    return 0;
}