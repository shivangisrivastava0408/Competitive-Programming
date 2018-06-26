#include <bits/stdc++.h>
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
    MS<int> s;
    int sum = 0;
    for(int i =0,a; i < n; ++i){
        cin >> a;
        sum+=a;
        s.insert(a);
    }
    float avg = float(sum)/float(n);
    int c = 0;
    for(MS<int>::IT itr = s.begin(); itr != s.end() && avg < 4.5; ++itr){
        avg+=(float(5-*itr)/float(n));
        c++;
    }
    cout << c;
    return 0;
}