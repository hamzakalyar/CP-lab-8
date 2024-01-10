#include<iostream>
using namespace std;
void larger(int a, int b) {
	if (a > b)
		cout << "Distance 1 is greater";
	else if (a == b)
		cout << "Both are equal:";
	else 
		cout << "Distance 2 is greater";
}
int main() {
	int dis_1, dis_2;
	cout << "Enter distance 1:";
	cin >> dis_1;
	cout << "Enter distance 2:";
	cin >> dis_2;
	 larger(dis_1, dis_2);
	return 0;
}