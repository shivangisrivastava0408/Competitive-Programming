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
    int n,s,t;
    cin >> n >> s >> t;
    int *p = new int[n+1];
    int sc = s;
    int ans = 0;
    for(int i = 1; i <= n; ++i){
        cin >> p[i];
    }
    if(s == t){
        cout << "0";
        return 0;
    }
    do{
        sc = p[sc];
        ans++;
    }while(sc != s && sc!=t);
    if(sc == t){
        cout << ans;
    }
    else  cout << "-1";
    return 0;
}