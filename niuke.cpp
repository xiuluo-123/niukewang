#include<iostream>
using namespace std;

int main() {
	float a;
	int b;
	cin >> a;
	b = a;
	if (a > 0 && a - (int)(a) >= 0.5) {
		cout << (int)(a + 1) << endl;
	}
	else if (a > 0 && a - (int)(a) < 0.5) {
		cout << (int)(a) << endl;
	}
	else if (a < 0 && a - (int)(a) >(-0.5)) {
		cout << (int)(a) << endl;
	}
	else if (a < 0 && a - (int)(a) <= (-0.5)) {
		cout << (int)(a)-1 << endl;
	}
	return 0;
}