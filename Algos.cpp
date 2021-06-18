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

ll fast_pow(ll a, ll p) {
    ll res = 1;
    while (p) {
        if (p % 2 == 0) {
            a = (a * a) /*% mod*/;
            p /= 2;
        } else {
            res = (res * a) /*% mod*/;
            p--;
        }
    }
    return res;
}

ll fact(int n) {
  ll res = 1;
  for (int i = 1; i <= n; i++) {
    res = res * 1ll * i /*% mod*/;
  }
  return res;
}


ll C(int n, int k) {
  return fact(n) * 1ll * fast_pow(fact(k), mod - 2) /*% mod*/ * 1ll * fast_pow(fact(n - k), mod - 2) % /*% mod*/;
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