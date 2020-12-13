#include <bits/stdc++.h>

#define ll long long
#define pi pair<int, int>
#define pf pair<float, int>
#define ps pair<string, int>
#define pii pair<pi, int>
#define mi map<int, int>
#define ms map<string, int>
#define mc map<char, int>
#define mpi map<pi, int>
#define F first
#define S second
#define vt vector
#define vi vector<int>
#define vd vector<double>
#define vf vector<float>
#define vl vector<long long>
#define vii vector<vi>
#define vpi vector<pi>
#define vpf vector<pf>
#define vpii vector<pii>

#define FOR(t, q) for(int q = 0; q < t; q++)
#define RFOR(t, q) for(int q = t; q > 0; q--)
#define FORE(t, q) for(int q = 0; q <= t; q++)
#define RFORE(t, q) for(int q = t; q >= 0; q--)

#define FORN(t, q, v) for(int q = v; q < t; q++)
#define RFORN(t, q, v) for(int q = t; q > v; q--)
#define FOREN(t, q, v) for(int q = v; q <= t; q++)
#define RFOREN(t, q, v) for(int q = t; q >= v; q--)

#define FORV(v, type) for (vt<type>::iterator it = v.begin(); it <= v.end(); it++)
#define si(v) (int)(v.size())


#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()

#define B(v) v.begin()
#define RB(v) v.rbegin()
#define E(v) v.end()
#define RE(v) v.rend()

#define LOWER(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define UPPER(s) transform(s.begin(), s.end(), s.begin(), ::toupper)

#define TC int t; cin >> t; FOR(t, q)

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    vii a(n);
    FOR(n, i) {
    	vi b(m);
    	FOR(m, j) {
    		cin >> b[j];
    	}
    	a[i] = b;
    }

   	vii ans; 
    FOR(n-1, i) {
    	FOR(m-1, j) {
    		if(a[i][j] * a[i][j+1] * a[i+1][j] * a[i+1][j+1] > 0) {
    			a[i][j] = 2;
    			a[i][j+1] = 2;
    			a[i+1][j] = 2;
    			a[i+1][j+1] = 2;
    			vi arr(2);
    			arr[0] = i;
    			arr[1] = j;
    			ans.push_back(arr);
    		}
    	}
    }

    int cnt = 0;
    FOR(n, i) {
    	FOR(m, j) {
    		if(a[i][j] == 1) cnt++;
    	}
    }

    if(cnt != 0) {
    	cout << -1 << endl;
    } else {
    	cout << si(ans) << endl;
    	FOR(si(ans), i) {
    		cout << ans[i][0]+1 << " " << ans[i][1]+1 << endl;
    	}
    }



    return 0;
}
