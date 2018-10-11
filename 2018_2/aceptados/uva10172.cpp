
#include <bits/stdc++.h>
using namespace std;
//codigo sacado de internet

int main() {
	int n, s, q, TC;

	cin >> TC;

	for (; TC > 0; TC--) {
		stack<int> carrier;
		queue<int> stationQueue[100];

		cin >> n >> s >> q;

		for (int i = 0; i < n; i++) {
			int nc;
			cin >> nc;
			for (int j = 0; j < nc; j++) {
				int target;
				cin >> target;
				stationQueue[i].push(target - 1);
			}
		}

		int currPos = 0, time = 0;
		while (true) {
			//descarga cargo hasta error o el stack vacio
			while (!carrier.empty()
					&& (carrier.top() == currPos
							|| stationQueue[currPos].size() < q)) {
				if (carrier.top() != currPos) {
					stationQueue[currPos].push(carrier.top());
				}
				carrier.pop();
				time++;
			}

			//carga cargo hasta stack full
			while ((carrier.size() < s) && !stationQueue[currPos].empty()) {
				carrier.push(stationQueue[currPos].front());
				stationQueue[currPos].pop();
				time++;
			}

			bool clear = carrier.empty();
			for (int i = 0; i < n; i++) {
				clear &= stationQueue[i].empty();
			}
			if (clear)
				break;

			//mueve a los 2 minutos
			currPos = (currPos + 1) % n;
			time += 2;
		}

		cout << time << endl;
	}

	return 0;
}
