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

int arr[18] = {0,1,2,2,3,3,4,5,5,6,7,8,8,9,10,11,12,12};

void solve(int n){
    int i;
    // cin >> n;
    // int n;
    int *mx = new int[n+1];
    int *mn = new int[n+1];
    int j = n;
    for(i = 1; i <= n; ++i){
        mn[i] = i;
        mx[i] = i;
    }
    for(i = 1; i <= n; ++i){
        swap(mn[i],mn[n]);
    }
    for(i = 1; i <= n; ++i){
        int k = arr[n];
        cout << i%k + 1 << endl;
        // if(k == 0)k=1;
        // cout << (n/2+i)%n + 1 << endl;
        // cout << "2 1 3\n3 1 2";
        swap(mx[i],mx[(i-1)%k + 1]);
    }
    // cout << arr[n] << endl;
    for(int i = 1; i <= n; ++i){
        cout << mx[i] << " ";
    }
    cout << endl;
    for(int i = 1; i <= n; ++i){
        cout << mn[i] << " ";
    }
}

string to_str(int a){
    string s = "";
    while(a){
        s+=(a%10);
        a/=10;
    }
    reverse(s.begin(),s.end());
    return s;
}

vector<vector<int> > check(int n,vector<vector<int> > v){
    if(v[0].size() == n)return v;
    cout << v[0].size() << endl;
    vector<vector<int> > nv;
    for(int i = 0; i < v.size(); ++i){
        // cout << v[0].size() << " " << i << endl;
        for(int j = 1; j <= n; ++j){
            vector<int> t = v[i];
            t.push_back(j);
            nv.push_back(t);
        }
    }
    return check(n,nv);
    // for(int i = 0)
}

void solve_hard_code(int n){
    // int n;
    // cin >> n;
    switch(n){
        case 1:
        // cout << "";
        cout << "1\n1";
        break;
        case 2:
        // cout << "";
        cout << "1 2\n2 1";
        break;
        case 3: 
        
        cout << "2 1 3\n3 1 2";
        break;
        case 4: 
        // cout << "";
        cout << "2 1 4 3\n4 2 3 1";
        break;
        case 5: 
        // cout << "";
        cout << "2 3 1 5 4\n5 1 2 3 4";
        break;
        case 6:  
        // cout << "";
        cout << "2 3 1 5 6 4\n6 1 2 3 4 5";
        break;
        case 7:  
        // cout << "";
        cout << "2 3 4 1 6 7 5\n7 1 2 3 4 5 6";
        break; 
        case 8:  
        // cout << "";
        cout << "2 3 4 1 6 7 8 5\n8 1 2 3 4 5 6 7";
        break;
        case 9:  
        // cout << "";
        cout << "2 3 4 5 1 7 8 9 6\9 1 2 3 4 5 6 7 8";
        break;
        case 10:  
        // cout << "";
        cout << "2 3 4 5 1 7 8 9 10 6\n10 1 2 3 4 5 6 7 8 9";
        break;
        case 11:  
        // cout << "";
        cout << "2 3 4 5 6 1 8 9 10 11 7\n11 1 2 3 4 5 6 7 8 9 10";
        break;
        case 12:  
        // cout << "";
        cout << "2 3 4 5 6 1 8 9 10 11 12 7\n12 1 2 3 4 5 6 7 8 9 10 11";
        break;
        case 13:  
        // cout << "";
        cout << "2 3 4 5 6 7 1 9 10 11 12 13 8\n13 1 2 3 4 5 6 7 8 9 10 11 12";
        break;
        case 14:  
        // cout << "";
        cout << "2 3 4 5 6 7 1 9 10 11 12 13 14 8\n14 1 2 3 4 5 6 7 8 9 10 11 12 13";
        break;
        case 15:  
        // cout << "";
        cout << "2 3 4 5 6 7 8 1 10 11 12 13 14 15 9\n15 1 2 3 4 5 6 7 8 9 10 11 12 13 14";
        break;
        case 16:  
        // cout << "";
        cout << "2 3 4 5 6 7 8 1 10 11 12 13 14 15 16 9\n16 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15";
        break;
        case 17:  
        // cout << "";
        cout << "2 3 4 5 6 7 8 9 1 11 12 13 14 15 16 17 10\n17 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16";
        break;
        
    }
}
void solve_new_attempt(int n){
    // int n;
    // cin >> n;
    for(int i = 1; i <= n; ++i)cout << i << " ";
    cout << endl;
    for(int i = 1; i <= n; ++i)cout << i << " ";
}
int main(){
    // freopen("output.txt","w",stdout);
    // map<int,int> m;
    // int n = 6;
    // cin >> n;
    // vector<vector<int> > v;
    // // int t = 1;
    // // // cin >> t;
    // // while(t--)solve();
    // for(int i = 1; i <= n; ++i){
    //     vector<int> pp;
    //     pp.push_back(i);
    //     v.push_back(pp);
    // }
    // v = check(n,v);
    // for(int i = 0; i < v.size(); ++i){
    //     set<int> s;
    //     for(int j = 0; j < v[i].size(); ++j){
    //         s.insert(v[i][j]);
    //     }
    //     m[s.size()]++;
    // }
    // for(auto it: m){
    //     cout << it.first << " : " << it.second << endl;
    // }
    // cout << v.size();
    // for(int i=1;i<=7;++i)
    // {
    //     solve(i);
    //     // solve_hard_code(i);
    //     // solve_new_attempt(i);
    //     cout << endl;
    // }
    int n;
    cin >> n;
    solve_hard_code(n);
    // solve(n);
    return 0;
}
