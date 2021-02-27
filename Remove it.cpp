#include<bits/stdc++.h>
using namespace std;


using ll = long long;
using namespace std;

int main() {
	ll N, X, *A;
	cin >> N;
	cin >> X;
	A = new ll [N];
	for (ll i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (ll i = 0; i < N; i++) {
		if (A[i] != X) {
			cout << A[i];
			cout << " ";
		}
	}


	return 0;
}
