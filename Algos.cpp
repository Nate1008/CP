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
