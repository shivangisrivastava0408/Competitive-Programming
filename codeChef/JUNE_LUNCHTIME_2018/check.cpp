#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fori(n) for ( int i = 0; i < (n);i++)
#define forj(n) for ( int j = 0; j < (n);j++)
#define fork(n) for ( int k = 0; k < (n);k++)
#define forghj(n) for ( int ghj = 0; ghj < (n);ghj++)
#define fori1(n) for ( int i = (n)-1; i >= 0;i--)
#define all(vector) (vector).begin(),(vector).end()
#define pii pair < int, int >
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
/*
                            |~~~~~~~|
                            |       |
                            |       |
                            |       |
                            |       |
                            |       |
 |~.\\\_\~~~~~~~~~~~~~~xx~~~         ~~~~~~~~~~~~~~~~~~~~~/_//;~|
 |  \  o \_         ,XXXXX),                         _..-~ o /  |
 |    ~~\  ~-.     XXXXX`)))),                 _.--~~   .-~~~   |
  ~~~~~~~`\   ~\~~~XXX' _/ ';))     |~~~~~~..-~     _.-~ ~~~~~~~
           `\   ~~--`_\~\, ;;;\)__.---.~~~      _.-~
             ~-.       `:;;/;; \          _..-~~
                ~-._      `''        /-~-~
                    `\              /  /
                      |         ,   | |
                       |  '        /  |
                        \/;          |
                         ;;          |
                         `;   .       |
                         |~~~-----.....|
                        | \             \
                       | /\~~--...__    |
                       (|  `\       __-\|
                       ||    \_   /~    |
                       |)     \~-'      |
                        |      | \      '
                        |      |  \    :
                         \     |  |    |
                          |    )  (    )
                           \  /;  /\  |
                           |    |/   |
                           |    |   |
                            \  .'  ||
                            |  |  | |
                            (  | |  |
                            |   \ \ |
                            || o `.)|
                            |`\\\\) |
                            |       |
                            |       |
                            |       |
*/
 
int main() {
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    forghj(t) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        string a;
        cin >> a;
        int kek = 0;
        ll ans = 0;
        //vector < int > z;
        //z.resize(n);
        for ( int i = 1; i < n-k+1;i++) {
            if (kek!=min(k,n-k)) kek++;
            if (a[i] != a[i-1]) {
                ans += kek;
            }
            //z[i] = kek;
        }
        kek = 0;
        for ( int i = n-1; i >= n-k+1;i--) {
            if (kek!=min(k,n-k)) kek++;
            if (a[i] != a[i-1]) {
                ans += kek;
            }
            //z[i] = kek;
        }
        //fori(z.size()) cout << z[i] << " ";
        cout << ans << "\n";
    }
}