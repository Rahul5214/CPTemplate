#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

#define int long long
#define mod 1000000007
#define inf 1000000000000000000
#define endl "\n"
#define cno cout<<"No"<<endl
#define cyes cout<<"Yes"<<endl
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

#define fore(i,s,e) for(int i=s; i<e; i++)
#define forr(i,e,s) for(int i=e; i>=s; i--)
#define db(x) cerr << #x<<" "; _print(x); cerr << endl;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int,int> mpii;
typedef unordered_map<int,int> unmpii;

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(bool t) { cerr << t; }

template <class T, class V> void _print(pair <T, V> p) {cerr << "{ "; _print(p.ff); cerr << ", "; _print(p.ss); cerr << " }\n";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]\n";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map<T, V> v) { cerr << "["; for (auto i : v) { _print(i); cerr << " "; } cerr << "]\n"; }
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]\n";}

int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
int expo(int a, int b, int MOD = mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % MOD; a = (a * a) % MOD; b = b >> 1;} return res;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
vi sieve(int n){vi arr(n+1,0); for(int i=2; i <= n; i++)if (arr[i] == 0) {for (int j = i * i; j<= n; j += i)arr[j] = 1;} return arr;}
int fact(int n) {if (n < 2) return 1;int f = 1;fore(i, 2, n + 1) {f *= i;}return f;}
///* ************************************************************************************************* */

void solve() {
    
}

int32_t main() {
    fastio;
#ifndef ONLINE_JUDGE
    freopen("debug.txt","w", stderr);
    freopen("in.txt","r", stdin);
    freopen("out.txt","w", stdout);
#endif


auto start1 = high_resolution_clock::now();

    int t; cin>>t;
    while(t--)
        solve();

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    cerr << "Time: " << duration.count() / 1000 << endl;

    return 0;
}
