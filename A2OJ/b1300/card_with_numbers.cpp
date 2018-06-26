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
    int n;
    cin >> n;
    M<int,V<int> > m;
    for(int i = 1; i <= 2*n; ++i){
        int a;
        cin >> a;
        if(m.count(a) == 0){
            // cout << a << " ";
            V<int> v;
            v.pb(i);
            m.insert(mp(a,v));
        }else{  
            m.find(a)->second.pb(i);
            // cout << a << " ";
        }
    }
    // cout << endl;
    M<int,V<int> >::IT i = m.begin();
    while(i!=m.end()){
        if(i->second.size()%2==1){
            // cout << i->first << "  " << i->second.size() << "  " ;
            cout << "-1";
            return 0;
        }
        ++i;
    }
    i = m.begin();
    while(i!=m.end()){
        V<int> v = i->second;
        for(int j = 0; j < v.size(); j+=2){
            cout << v[j] << " " << v[j+1] << endl;
        }
        ++i;
    }
    return 0;
}