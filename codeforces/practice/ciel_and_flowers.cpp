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
    // freopen("input.txt","r",stdin);
    ull a[3],ans=0;
    cin >> a[0] >> a[1] >> a[2];
    if(a[0] == 0 || a[1] == 0 || a[2] == 0){
        cout << (a[0]/3 + a[1]/3 + a[2]/3);
        return 0;
    }
    sort(a,a+3);
    ans+=a[0];
    // cout << ans << endl;
    for(int i = 1; i < 3; ++i){
        a[i]-=a[0];
        // cout << a[i] << " ";
    }
    a[0] = 0;
    // cout << endl;
    for(int i = 0; i < 3; ++i){
        // cout << a[i] << endl;
        ans+=(a[i]/3);
        // cout << ans << endl;
    }
    cout << ans;
    
    return 0;
}