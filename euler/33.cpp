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
string add(string a1, string b1){
    deque<int> s,a,b;
    string ans = "";
    int carry = 0;
    for(int i = 0; i < a1.length(); ++i){
        a.pb(int(a1[i]-'0'));
    }
    for(int i = 0; i < b1.length(); ++i){
        b.pb(int(b1[i]-'0'));
    }
    if(a.size() < b.size()){
        while(a.size()!=b.size()){
            a.push_front(0);
        }
    }
    if(a.size() > b.size()){
        while(a.size()!=b.size()){
            b.push_front(0);
        }
    }
    int i = a.size()-1;
    for(int i = a.size()-1; i >= 0; --i){
        s.push_front((a[i]+b[i]+carry)%10);
        carry = (a[i]+b[i]+carry)/10;
    }
    while(carry){
        s.push_front(carry%10);
        carry/=10;
    }
    for(i = 0; i < s.size(); ++i){
        ans+=(char(s[i]+'0'));
    }
    return ans;
}

int main(){
    FILE_READ
    string a = "10";
    string b = "10";
    V<int> num,den;
    for(; a != "100"; a = add(a,"1")){
        for(b = add(a,"1"); b!= "100"; b=add(b,"1")){
            int f1[10] = {0};
            int f2[10] = {0};
            for(int i = 0; i < a.length(); ++i)f1[a[i]-'0']++;
            for(int i = 0; i < b.length(); ++i)f2[b[i]-'0']++;
            double c,d,e,f,k,j;
            k = 1;
            j = 1;
            c = 0;
            d = 0;
            int cut = 0;
            for(int i = a.length()-1; i >= 0; --i){
                if(f2[a[i]-'0'] == 0){
                    c+=((a[i]-'0')*k);
                    k*=10;
                    cut++;
                }else{
                    f2[a[i]-'0']++;
                }
                d+=((a[i]-'0')*j);
                j*=10;
            }
            k = 1;
            e = 0;
            f = 0;
            j = 1;
            for(int i = b.length()-1; i >= 0; --i){
                if(f1[b[i]-'0'] == 0){
                    e+=((b[i]-'0')*k);
                    k*=10;
                }else{
                    f1[b[i]-'0']++;
                }
                f+=((b[i]-'0')*j);
                j*=10;
            }
            if(cut!=0 && f!=0 && e!= 0 && d!=0 && c!=0 && d/f != c/e){
                num.pb(d);
                den.pb(f);
            }else{
                den.pb(f);
                num.pb(d);
            }
        }
    }
    for(int i = 0; i < num.size(); ++i){
        cout << num[i] << " " << den[i] << endl;
    }
   return 0;
}