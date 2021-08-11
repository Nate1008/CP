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

// C - Start

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

ll fact(int n) {
  ll res = 1;
  for (int i = 1; i <= n; i++) {
    res = res * 1ll * i % MOD;
  }
  return res;
}


ll C(int n, int k) {
  return fact(n) * 1ll * binpow(fact(k), MOD - 2) % MOD * 1ll * binpow(fact(n - k), MOD - 2) % MOD;
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

// BIT - Start
tcT> struct BIT {
	int N; V<T> data;
	void init(int _N) { N = _N; data.rsz(N); }
	void add(int p, T x) { for (++p;p<=n;p+=p&-p) data[p-1] += x; }
	T sum(int l, int r) { return sum(r+1)-sum(l); }
	T sum(int r) { T s = 0; for(;r;r-=r&-r)s+=data[r-1]; return s; }
	int lower_bound(T sum) {
		if (sum <= 0) return -1;
		int pos = 0;
		for (int pw = 1<<25; pw; pw >>= 1) {
			int npos = pos+pw;
			if (npos <= n && data[npos-1] < sum)
				pos = npos, sum -= data[pos-1];
		}
		return pos;
	}
};
// BIT - End

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

