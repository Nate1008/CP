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

    TC {
    	int n;
        cin >> n;
        int a, b, c;
        cin >> a >> b >> c;
        string s;
        cin >> s;
        
        vector<int> count(26);
        FOR(n, i) 
        	count[s[i] - 'A']++;
        
        int wins = min(a, count['S' - 'A']) + min(b, count['R' - 'A']) + min(c, count['P' - 'A']);
        
        if (2 * wins < n)
        {
        	cout << "NO" << '\n';continue;
        }
        
        cout << "YES" << '\n';
        string t;
        for (int i = 0; i != n; ++i)
        {
        	if (s[i] == 'S' && a)
        	{
        		t += 'R';
        		a--;
        	}
        	else if (s[i] == 'R' && b)
        	{
        		t += 'P';
        		b--;
        	}
        	else if (s[i] == 'P' && c)
        	{
        		t += 'S';
        		c--;
        	}
        	else
        		t += '_';
        }
        for (int i = 0; i != n; ++i)
        {
        	if (t[i] != '_')
        		continue;
        	
        	if (a)
        	{
        		t[i] = 'R';
        		a--;
        	}
        	else if (b)
        	{
        		t[i] = 'P';
        		b--;
        	}
        	else
        	{
        		t[i] = 'S';
        		c--;
        	}
        }
        cout << t << '\n';
    }

    return 0;
}
