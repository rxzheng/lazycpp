#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;   
using namespace __gnu_pbds;
#define tct template<class T
// data types
using ll = long long;
using str = string; 
using db = double; 
tct> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 
#define ump unordered_map
#define ust unordered_set
#define arr array
// vectors 
using vi = vector<int>; 
using vc = vector<char>;
using vll = vector<ll>;
using vvi = vector<vi>; 
using vvll = vector<vll>; 
using vvc = vector<vc>; 
using vs = vector<str>;
using vb = vector<bool>;
using vvb = vector<vb>;
// pairs
using pii = pair<int, int>; 
using pll = pair<ll, ll>;
using pcc = pair<char, char>; 
using pss = pair<str, str>; 
using pci = pair<char, int>; 
using pcl = pair<char, ll>;
using pli = pair<ll, int>;
using pbb = pair<bool, bool>; 
using pib = pair<int, bool>;
using pis = pair<int, str>;  
#define fi first
#define se second 
// arrays
using ari2 = arr<int, 2>; 
using ari3 = arr<int, 3>; 
using arl2 = arr<ll, 2>;
using arl3 = arr<ll, 3>; 
// other stuff for convenience
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend() 
#define init0(x) memset((x), 0, sizeof((x)))
#define initn1(x) memset((x), -1, sizeof((x)))  
#define sqr(x) (x) * (x) 
#define cub(x) (x) * (x) * (x)
#define tostr to_string 
const int inf = INT_MAX; 
const ll infll = LLONG_MAX;