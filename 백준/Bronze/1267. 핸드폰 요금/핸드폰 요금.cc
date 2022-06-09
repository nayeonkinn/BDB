#include <bits/stdc++.h>
using namespace std;

int rate(int time, int sec, int won) {
	int cost = 0;
	while (time >= 0) {
		cost += won;
		time -= sec;
	}
	return cost;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, time, y = 0, m = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> time;
		y += rate(time, 30, 10);
		m += rate(time, 60, 15);
	}
	if (y < m) cout << "Y " << y;
	else if (y > m) cout << "M " << m;
	else cout << "Y M " << y;
}