#include <bits/stdc++.h>
// sieve - Start

vector<int> smallest_factor;
vector<bool> prime;
vector<int> primes;
 
void sieve(int maximum) {
    maximum = max(maximum, 1);
    smallest_factor.assign(maximum + 1, 0);
    prime.assign(maximum + 1, true);
    prime[0] = prime[1] = false;
    primes = {};
 
    for (int p = 2; p <= maximum; p++)
        if (prime[p]) {
            smallest_factor[p] = p;
            primes.push_back(p);
 
            for (int64_t i = int64_t(p) * p; i <= maximum; i += p)
                if (prime[i]) {
                    prime[i] = false;
                    smallest_factor[i] = p;
                }
        }
}

// sieve - End

// isPrime - Start

bool isPrime(int p) {
    for(int i = 2; i*i <= p; i++) {
        if (p % i == 0) return false;
    }
    return true;
}

// isPrime - End

// Mod Int Class - Start

template<int MOD, int RT> struct mint {
	static const int mod = MOD;
	static constexpr mint rt() { return RT; } // primitive root for FFT
	int v; explicit operator int() const { return v; } // explicit -> don't silently convert to int
	mint():v(0) {}
	mint(ll _v) { v = int((-MOD < _v && _v < MOD) ? _v : _v % MOD);
		if (v < 0) v += MOD; }
	bool operator==(const mint& o) const {
		return v == o.v; }
	friend bool operator!=(const mint& a, const mint& b) { 
		return !(a == b); }
	friend bool operator<(const mint& a, const mint& b) { 
		return a.v < b.v; }
	friend void re(mint& a) { ll x; re(x); a = mint(x); }
	friend str ts(mint a) { return ts(a.v); }
   
	mint& operator+=(const mint& o) { 
		if ((v += o.v) >= MOD) v -= MOD; 
		return *this; }
	mint& operator-=(const mint& o) { 
		if ((v -= o.v) < 0) v += MOD; 
		return *this; }
	mint& operator*=(const mint& o) { 
		v = int((ll)v*o.v%MOD); return *this; }
	mint& operator/=(const mint& o) { return (*this) *= inv(o); }
	friend mint pow(mint a, ll p) {
		mint ans = 1; assert(p >= 0);
		for (; p; p /= 2, a *= a) if (p&1) ans *= a;
		return ans; }
	friend mint inv(const mint& a) { assert(a.v != 0); 
		return pow(a,MOD-2); }
		
	mint operator-() const { return mint(-v); }
	mint& operator++() { return *this += 1; }
	mint& operator--() { return *this -= 1; }
	friend mint operator+(mint a, const mint& b) { return a += b; }
	friend mint operator-(mint a, const mint& b) { return a -= b; }
	friend mint operator*(mint a, const mint& b) { return a *= b; }
	friend mint operator/(mint a, const mint& b) { return a /= b; }
};
using mi = mint<MOD,5>; // 5 is primitive root for both common mods

// Mod Int Class - End


// C - Start

const int MAXI = 2e5+5;
ll fact[MAXI];

ll binpow(ll a, ll p) {
    ll res = 1;
    while (p) {
        if (p % 2 == 0) {
            a = (a * a) % MOD;
            p /= 2;
        } else {
            res = (res * a) % MOD;
            p--;
        }
    }
    return res;
}

void initFact() {
  fact[0] = 1;
  for (int i = 1; i < MAXI; i++) {
    fact[i] = fact[i-1] * 1ll * i % MOD;
  }
}


ll C(int n, int k) {
  return fact[n] * 1ll * binpow(fact[k], MOD - 2) % MOD * 1ll * binpow(fact[n - k], MOD - 2) % MOD;
}

// C - End

// Interative - Start
int ask(int x) {
    cout << "? " << x << endl;
    int z;
    cin >> z;
    return z;
}
// Interative - End

// DSU - Start
struct DSU {
    vi e; void init(int N) { e = vi(N,-1); }
    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); } 
    bool sameSet(int a, int b) { return get(a) == get(b); }
    int size(int x) { return -e[get(x)]; }
    bool unite(int x, int y) { // union by size
        x = get(x), y = get(y); if (x == y) return 0;
        if (e[x] > e[y]) swap(x,y);
        e[x] += e[y]; e[y] = x; return 1;
    }
};
// DSU - End;

// Max Histogram Area - Start
int get(vi h) {
    h.pb(-1);
    vi st{-1};
    int ans = 0;
    F0R(i,sz(h)) {
        while (st.bk != -1 && h[st.bk] >= h[i]) {
            ckmax(ans,(i-1-end(st)[-2])*h[st.bk]);
            st.pop_back();
        }
        st.pb(i);
    }
    return ans;
}
// Max Histogram Area - End

// Segment Tree - Start
tcT> struct Seg { // comb(ID,b) = b
	const T ID = 0; T comb(T a, T b) { return a+b; } 
	int n; V<T> seg;
	void init(int _n) { // upd, query also work if n = _n
// 		for (n = 1; n < _n; ) n *= 2; 
// 		n = _n;
		seg.assign(2*n,ID); }
	void pull(int p) { seg[p] = comb(seg[2*p],seg[2*p+1]); }
	void upd(int p, T val) { // set val at position p
		seg[p += n] = val; for (p /= 2; p; p /= 2) pull(p); }
	T query(int l, int r) {	// any associative op on interval [l, r]
		T ra = ID, rb = ID;
		for (l += n, r += n+1; l < r; l /= 2, r /= 2) {
			if (l&1) ra = comb(ra,seg[l++]);
			if (r&1) rb = comb(seg[--r],rb);
		}
		return comb(ra,rb);
	}
};
// Segment Tree - End

// Lazy Segment Tree - Start
tcT> struct LazySeg { 
	const T ID = 0; T comb(T a, T b) { return a+b; }
	V<T> seg, lazy; int n;
	void init(int _n) { n = 1; while(n < _n) n *= 2;  seg.assign(2*n, ID), lazy.assign(2*n, ID); }
	void push(int x, int L, int R) { /// modify values for current node
		seg[x] += (R-L+1)*lazy[x]; // dependent on operation
		if (L != R) F0R(i,2) lazy[2*x+i] += lazy[x]; /// prop to children
		lazy[x] = 0; 
	} // recalc values for current node
	void pull(int x) { seg[x] = comb(seg[2*x],seg[2*x+1]); }
	void build() { ROF(i,1,n) pull(i); }
	void set(int i, T v, int x, int L, int R) {
		if (L == R) {
			seg[x] = v;
			return;
		}
		int m = (L+R)/2;
		if (i <= m) set(i, v, x*2, L, m);
		else set(i, v, x*2+1, m+1, R);
		pull(x);
	}
	void upd(int lo, int hi, T v, int x,int L, int R) {
		push(x,L,R); if (hi < L || R < lo) return;
		if (lo <= L && R <= hi) { 
			lazy[x] = v; push(x,L,R); return; }
		int M = (L+R)/2; upd(lo, hi, v, 2*x, L, M); 
		upd(lo, hi, v, 2*x+1, M+1, R); pull(x);
	}
	T query(int lo, int hi, int x, int L, int R) {
		push(x,L,R); if (lo > R || L > hi) return ID;
		if (lo <= L && R <= hi) return seg[x];
		int M = (L+R)/2; 
		return comb(query(lo,hi,2*x,L,M),query(lo,hi,2*x+1,M+1,R));
	}

	void upd(int lo, int hi, T v) { upd(lo, hi, v, 1, 0, n-1); }
	void set(int i, T v) { set(i, v, 1, 0, n-1); };
	T query(int lo, int hi) { return query(lo, hi, 1, 0, n-1); }
};
// Lazy Segment Tree

// BIT - Start
tcT> struct BIT {
	int N; V<T> data;
	void init(int _N) { N = _N; data.rsz(N); }
	void add(int p, T x) { for (++p;p<=N;p+=p&-p) data[p-1] += x; }
	T sum(int l, int r) { return sum(r+1)-sum(l); }
	T sum(int r) { T s = 0; for(;r;r-=r&-r)s+=data[r-1]; return s; }
};
// BIT - End

// BITOFF - Start
template<class T> struct BIToff {
	bool mode = 0; vi v; vector<T> d;
	int atMost(int x) { return ub(all(v),x)-begin(v); } // how many <= x
	void upd(int x, T y) {
		if (!mode) { v.pb(x); return; }
		int p = atMost(x); assert(p && v[p-1] == x);
		for (;p<=sz(v);p+=p&-p) d[p] += y;
	}	
	void init() { assert(!mode); mode = 1;
		sort(all(v)); v.erase(unique(all(v)),end(v)); d.rsz(sz(v)+1); }
	T sum(int x) { assert(mode);
		T ans = 0; for (int p=atMost(x);p;p-=p&-p) ans += d[p];
		return ans; }
	T query(int x, int y) { return sum(y)-sum(x-1);}
};
// BITOFF - End

// BITrange - Start
template<class T, int SZ> struct BITrange {
	BIT<T,SZ> bit[2]; // piecewise linear functions
	// let cum[x] = sum_{i=1}^{x}a[i]
	void upd(int hi, T val) { // add val to a[1..hi]
		// if x <= hi, cum[x] += val*x
		bit[1].upd(1,val), bit[1].upd(hi+1,-val); 
		// if x > hi, cum[x] += val*hi
		bit[0].upd(hi+1,hi*val); 
	}
	void upd(int lo,int hi,T val){upd(lo-1,-val),upd(hi,val);}
	T sum(int x) { return bit[1].sum(x)*x+bit[0].sum(x); } 
	T query(int x, int y) { return sum(y)-sum(x-1); }
}; 
// BITrange - End


// Multi-Dimensional BIT - Start
template <class T, int ...Ns> struct BIT {
	T val = 0;
	void upd(T v) { val += v; }
	T query() { return val; }
};

template <class T, int N, int... Ns> struct BIT<T, N, Ns...> {
	BIT<T,Ns...> bit[N + 1];
	template<typename... Args> void upd(int pos, Args... args) {
		for (; pos <= N; pos += (pos&-pos)) bit[pos].upd(args...);
	}
	
	template<typename... Args> T sum(int r, Args... args) {
		T res = 0; for (; r; r -= (r&-r)) res += bit[r].query(args...);
		return res;
	}
	template<typename... Args> T query(int l, int r, Args... args) {
		return sum(r,args...)-sum(l-1,args...);
	}

};
// Multi-Dimensional BIT - End

// RangeQuery - Start
template<class T, int SZ> struct RangeQuery {
	int n;
	T stor[SZ][32-__builtin_clz(SZ)], id = 1;
	vector<T> a;
	T comb (T a, T b) { return mul(a,b); } // associative operation
	void fill(int l, int r, int ind) {
		if (ind < 0) return;
		int m = (l+r)/2;
		T prod = id; ROF(i,l,m) stor[i][ind] = prod = comb(a[i],prod);
		prod = id; FOR(i,m,r) stor[i][ind] = prod = comb(prod,a[i]);
		fill(l,m,ind-1); fill(m,r,ind-1);
	}
	void init() {
		n = 1; while ((1<<n) < sz(a)) n ++;
		a.rsz(1<<n); fill(0,(1<<n),n-1);
	}
	T query(int l, int r) {
		if (l == r) return a[l];
		int t = 31-__builtin_clz(r^l);
		return comb(stor[l][t],stor[r][t]);
	}
};
// RangeQuery - End

// RMQ - Start
tcT> struct RMQ {
    int level(int x) { return 31-__builtin_clz(x); } 
    vector<T> v; vector<vi> jmp;
    int comb(int a, int b) { // index of min
        return v[a]==v[b]?min(a,b):(v[a]<v[b]?a:b); } 
    void init(const vector<T>& _v) {
        v = _v; jmp = {vi(sz(v))}; iota(all(jmp[0]),0);
        for (int j = 1; 1<<j <= sz(v); ++j) {
            jmp.pb(vi(sz(v)-(1<<j)+1));
            F0R(i,sz(jmp[j])) jmp[j][i] = comb(jmp[j-1][i],
                                    jmp[j-1][i+(1<<(j-1))]);
        }
    }
    int index(int l, int r) { // get index of min element
        assert(l <= r); int d = level(r-l+1);
        return comb(jmp[d][l],jmp[d][r-(1<<d)+1]); }
    T query(int l, int r) { return v[index(l,r)]; }};
// RMQ - End

// LCA with RMQ - Start
struct LCA {
    int N; vector<vi> adj;
    vi depth, pos, par, rev; // rev is for compress
    vpi tmp; RMQ<pi> r;
    void init(int _N) { N = _N; adj.rsz(N); 
        depth = pos = par = rev = vi(N); }
    void ae(int x, int y) { adj[x].pb(y), adj[y].pb(x); }
    void dfs(int x) {
        pos[x] = sz(tmp); tmp.eb(depth[x],x); 
        each(y,adj[x]) if (y != par[x]) {
            depth[y] = depth[par[y]=x]+1, dfs(y);
            tmp.eb(depth[x],x); }
    }
    void gen(int R = 0) { par[R] = R; dfs(R); r.init(tmp); }
    int lca(int u, int v){
        u = pos[u], v = pos[v]; if (u > v) swap(u,v);
        return r.query(u,v).se; }
    int dist(int u, int v) {
        return depth[u]+depth[v]-2*depth[lca(u,v)]; }
    vpi compress(vi S) {
        auto cmp = [&](int a, int b) { return pos[a] < pos[b]; };
        sort(all(S),cmp); R0F(i,sz(S)-1) S.pb(lca(S[i],S[i+1]));
        sort(all(S),cmp); S.erase(unique(all(S)),end(S));
        vpi ret{{0,S[0]}}; F0R(i,sz(S)) rev[S[i]] = i;
        FOR(i,1,sz(S)) ret.eb(rev[lca(S[i-1],S[i])],S[i]);
        return ret;
    }};
// LCA with RMQ - End

//  Euler Tour DFS - Start
const int nax = 2e5+5;
vi adj[nax];
int timer = 0, st[nax], en[nax];

void dfs(int node, int parent) {
    st[node] = timer++;
    for (int i : adj[node]) {
        if (i != parent) {
            dfs(i, node);
        }
    }
    en[node] = timer-1;
}
//  Euler Tour DFS - End

// Hash Range - Start
using H = AR<int,2>; // bases not too close to ends 
H makeH(char c) { return {c,c}; }
uniform_int_distribution<int> BDIST(0.1*MOD,0.9*MOD);
const H base{BDIST(rng),BDIST(rng)};
/// const T ibase = {(int)inv(mi(base[0])),(int)inv(mi(base[1]))};
H operator+(H l, H r) { 
    F0R(i,2) if ((l[i] += r[i]) >= MOD) l[i] -= MOD;
    return l; }
H operator-(H l, H r) { 
    F0R(i,2) if ((l[i] -= r[i]) < 0) l[i] += MOD;
    return l; }
H operator*(H l, H r) { 
    F0R(i,2) l[i] = (ll)l[i]*r[i]%MOD;
    return l; }
/// H& operator+=(H& l, H r) { return l = l+r; }
/// H& operator-=(H& l, H r) { return l = l-r; }
/// H& operator*=(H& l, H r) { return l = l*r; }

V<H> pows{{1,1}};
struct HashRange {
    str S; vector<H> cum{{}};
    void add(char c) { S += c; cum.pb(base*cum.bk+makeH(c)); }
    void add(str s) { each(c,s) add(c); }
    void extend(int len) { while (sz(pows) <= len) pows.pb(base*pows.bk); }
    H hash(int l, int r) { int len = r+1-l; extend(len);
        return cum[r+1]-pows[len]*cum[l]; }
};
//Hash Range - End

// SCC - Start
struct SCC {
	int N, ti = 0; vector<vector<int>> adj;
	vector<int> disc, comp, st, comps;
	void init(int _N) {
		N = _N;
		adj.resize(N), disc.resize(N), comp = vector<int>(N,-1);
	}
	void ae(int x, int y) {
		adj[x].push_back(y);
	}
	int dfs(int x) {
		int low = disc[x] = ++ti; st.push_back(x); // disc[y] != 0 -> in stack
		for(int y : adj[x]) if (comp[y] == -1) low = min(low, disc[y]?:dfs(y));
		if (low == disc[x]) { // make new SCC, pop off stack until you find x
			comps.push_back(x); for (int y = -1; y != x;)
				comp[y = st.back()] = x, st.pop_back();
		}
		return low;
	}
	void gen() {
		for(int i=0; i<N; i++) if (!disc[i]) dfs(i);
		reverse(begin(comps), end(comps));
	}
};
// SCC - End

