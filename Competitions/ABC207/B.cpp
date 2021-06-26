#include <bits/stdc++.h>

using namespace std;

/////////////////////// MACROS ////////////////////////////////////////////
using ll = long long;
using ld = long double;
using db = double;
using str = string;

using pi = pair<int,int>;
using pl = pair<ll,ll>;

using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<str>;
using vpi = vector<pi>;

#define tcT template<class T
#define tcTU tcT, class U
tcT> using V = vector<T>;
tcT, size_t SZ> using AR = array<T,SZ>;
tcTU> using P = pair<T,U>;
tcT> using PR = pair<T,T>;
tcTU> using omap = unordered_map<T, U>;
tcT> using oset = unordered_set<T>;
tcT> using mset = multiset<T>;

#define mp make_pair
#define fi first
#define se second

#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front

#define lb lower_bound
#define ub upper_bound

// LOOPS
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define rep(a) F0R(_, a)
#define each(a,x) for (auto& a: x)

/////////////////////// IMPORANT VARS /////////////////////////////////////

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
const ll INFL = 1e18+10;
const int INF = 1e9+10;
const ld PI = acos((ld)-1);
const int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
tcT> using pqg = priority_queue<T,vector<T>,greater<T>>;
tcT> using pql = priority_queue<T,vector<T>,less<T>>;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());


// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

// tcT> using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 
// #define ook order_of_key
// #define fbo find_by_order

// struct chash { 
// 	const uint64_t C = ll(2e18*PI)+71;
// 	const int RANDOM = rng();
// 	ll operator()(ll x) const {
// 		return __builtin_bswap64((x^RANDOM)*C); }
// };
// template<class K,class V> using um = unordered_map<K,V,chash>;
// template<class K,class V> using ht = gp_hash_table<K,V,chash>;
// template<class K,class V> V get(ht<K,V>& u, K x) {
// 	auto it = u.find(x); return it == end(u) ? 0 : it->s; }

tcT> bool ckmin(T& a, const T& b) {
	return b < a ? a = b, 1 : 0; } 
tcT> bool ckmax(T& a, const T& b) {
	return a < b ? a = b, 1 : 0; }

/////////////////////// TO_STRING /////////////////////////////////////////
#define ts to_string
str ts(char c) { return str(1,c); }
str ts(const char* s) { return (str)s; }
str ts(str s) { return s; }
str ts(bool b) {
	#ifdef LOCAL
		return b ? "true" : "false";
	#else
		return ts((int)b);
	#endif
}

tcT> str ts(T v) {
	#ifdef LOCAL
		bool fst = 1; str res = "{";
		for (const auto& x: v) {
			if (!fst) res += ", ";
			fst = 0; res += ts(x);
		}
		res += "}"; return res;
	#else
		bool fst = 1; str res = "";
		for (const auto& x: v) {
			if (!fst) res += " ";
			fst = 0; res += ts(x);
		}
		return res;

	#endif
}
tcTU> str ts(pair<T,U> p) {
	#ifdef LOCAL
		return "("+ts(p.fi)+", "+ts(p.se)+")";
	#else
		return ts(p.fi)+" "+ts(p.se);
	#endif
}

///////////////////////// DEBUG ///////////////////////////////////////////
#define tcTUU tcT, class ...U
void DBG() { cerr << "]" << endl; }
tcTUU> void DBG(const T& t, const U&... u) {
	cerr << ts(t); if (sizeof...(u)) cerr << ", ";
	DBG(u...); }
#ifdef LOCAL
	#define _GLIBCXX_DEBUG
	#define dbg(...) cerr << "Line(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
	#define chk(...) if (!(__VA_ARGS__)) cerr << "Line(" << __LINE__ << ") -> function(" \
		 << __FUNCTION__  << ") -> CHK FAILED: (" << #__VA_ARGS__ << ")" << "\n", exit(0);
#else
	#define dbg(...) 0
	#define chk(...) 0
#endif

///////////////////////// FILE I/O ////////////////////////////////////////
void unsyncIO() { cin.tie(0)->sync_with_stdio(0); }
void setPrec() { cout << fixed << setprecision(15); }
void setIn(str s) { freopen(s.c_str(),"r",stdin); }
void setOut(str s) { freopen(s.c_str(),"w",stdout); }
void setIO(str s = "") {
	unsyncIO(); setPrec();
	#ifndef LOCAL	
		if (sz(s)) setIn(s+".in"), setOut(s+".out"); // for USACO
	#endif
}

///////////////////////// TEMPLATE ABOVE //////////////////////////////////
// TODO
// - Don't focus on only one approach
// - Read Problem Fully
// - Think of Edges Cases
// - Implement carefully

const int nax = 1e6+10;
int main() {
	setIO(); 

	ll a, b, c, d; cin >> a >> b >> c >> d;

	if (a == 0) {
		cout << 0 << endl;
		exit(0);
	}

	ll r = 0;
	int turn = 0;
	rep(nax) {
		++turn;
		a += b;
		r += c;
		if (a <= d*r) {
			cout << turn << endl;
			exit(0);
		}
	}
	cout << -1 << endl;

	exit(0);
}
