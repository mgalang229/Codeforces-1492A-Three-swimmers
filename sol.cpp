#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long p, a, b, c;
		cin >> p >> a >> b >> c;
		// solution: find the nearest multiple of the three swimmers to 'p'
		// once you find the nearest multiple of a number, then ceil it up (if possible)
		// multiply the multiple to the corresponding divisor to find the number that is close to 'p'
		// lastly, determine the smallest difference and print it
		// ((p + (a - 1)) / a) = equation for finding the nearest factor that will be multiplied
		// (a * ((p + (a - 1)) / a)) = equation for getting the nearest multiple of 'a' to 'p'
		// abs(p - (a * ((p + (a - 1)) / a))) = equation for finding the difference between 'p'
		// and the multiple of 'a'
		// do this same operation on the remaining swimmers
		long long first = abs(p - (a * ((p + (a - 1)) / a)));
		long long second = abs(p - (b * ((p + (b - 1)) / b)));
		long long third = abs(p - (c * ((p + (c - 1)) / c)));
		cout << min({first, second, third}) << '\n';
	}
	return 0;
}
