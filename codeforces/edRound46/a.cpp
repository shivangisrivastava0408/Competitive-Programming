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
    int c = 0;
    int n;
    cin >> n;
    int f1[26] = {0};
    int f2[26] = {0};
    string a;
    int sum = 0;
    for(int i = 0; i < n; ++i){
        string a;
        cin >> a;
        for(int j = 0; j < a.length(); ++j){
            f1[a[i]-'A']++;
        }
    }
    for(int i = 0; i < n; ++i){
        string a;
        cin >> a;
        for(int j = 0; j < a.length(); ++j){
            f2[a[i]-'A']++;
            sum++;
        }
    }
    for(int i = 0; i < 26; ++i){
        sum-=   f2[i]) - min(f1[i],f2[i]));
    }
    cout << sum;
    // int t;
    // cin >> t;
    // while(t--){
    //     int n=0,s=0,l=0,x=0;
    //     string a;
    //     cin >> a;
    //     bool pos = true;
    //     if(a == "M")c++;
    //     else if(a.length() < 5){
    //         for(int i = 0; i < a.length(); ++i){
    //             if(a[i] != 'X' && a[i] != 'S' && a[i] !='L'){
    //                 // cout << "6";
    //                 pos = false;
    //             }
    //             if(a[i] == 'X' && l==0 && s==0 && x<3)x++;
    //             else if(a[i] == 'X'){
    //                 // cout << "l,s,x " << l << s << x;
    //                 pos=false;}
    //             else if(a[i] == 'L' && s==0 && l==0)l++;
    //             else if(a[i] == 'L'){
    //                 // cout << "2";
    //                 pos=false;}
    //             else if(a[i] == 'S' && l==0 && l==0)s++;
    //             else if(a[i] == 'S')pos = false;
                
    //         }
    //     }else{
    //         cout << "3";
    //         pos = false;
    //     }
    //     if(pos)c++;
        
    // }
    // // cout << c;
    return 0;
}