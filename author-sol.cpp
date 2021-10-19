#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ans = 0;
		// it is possible to use two loops but the inner (nested) loop only runs up to
		// min(i + 9, n) and the reason for only using 9 elements is because the maximum
		// difference of digits [0 - 9] is only 9 so that's why we don't need to check
		// the elements which have indices greater than 9
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < min(i + 10, n); j++) {
				int x = (s[j] - '0');
				int y = (s[i] - '0');
				if (j - i == abs(x - y)) {
					ans++;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
