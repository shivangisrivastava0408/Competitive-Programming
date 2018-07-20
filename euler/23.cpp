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
#define MAXN 29000
using namespace std;

bool ifSum(V<int> a, int val){
    int i = 0;
    int j = a.size()-1;
    while(i < j){
        if(a[i] + a[j] > val)--j;
        else if(a[i] + a[j] < val)++i;
        else return true;
    }
    return false;
}

int main(){
    FILE_READ
    int seive[MAXN] = {0};
    for(int i = 1; i < MAXN; ++i)for(int j = 2; i*j < MAXN; ++j)seive[i*j]+=i;
    V<int> ab;
    // cout /<< 
    cout << "AB LIST\n";
    for(int i = 1; i < MAXN; ++i){
        if(seive[i] > i){
            cout << i << endl;
        ab.pb(i);}
    }
    ll ans = 0;
    cout << "ANS CAL\n";
    for(int i = 1; i < MAXN; ++i){
        if(!ifSum(ab,i)){
            cout << i << endl;
            ans+=i;
        }
    }
    cout << ans;
    return 0;
}