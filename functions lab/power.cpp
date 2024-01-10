#include<iostream>
#include<cmath>
using namespace std;
int power(int a, int b);
int main() {
	int num,pow;
	cout << "Enter number & power: ";
	cin >> num >> pow;
	cout << power(num, pow);
	return 0;
}
int power(int a, int b) {
	int rzlt=1;
	for (int i = 1; i <= b; i++) {
		rzlt = rzlt * a;
	}
	return rzlt;
	}
