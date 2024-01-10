#include<iostream>
using namespace std;

float hour_1();
float hour_2();
float hour_3();
float calculator(float a);
void output();
int main() 
{
     output();
	return 0;
}
float hour_1() {
	float num;
	cout << "Enter hours for car1:";
	cin >> num;
	return num;
}
float hour_2() {
	float num;
	cout << "Enter hours for car2:";
	cin >> num;
	return num;
}
float hour_3() {
	float num;
	cout << "Enter hours for car3:";
	cin >> num;
	return num;
}

float calculator(float a) {
	float total=0.0;
	if (a <= 3.0) {
		total =  2.0;
		return total;
	}
	 else if (a > 3.0 && a < 24.0) {
		float b = a - 3;
		total = 2.0 + (b * 0.5);
		if (total > 10.0) {
			total = 10.0;
		}
		return total;
	}
	 else  if (a >= 24.0) {
		total = 10.0;
		return total;
	}
	 
	
}
void output() {
	float a1 = hour_1();
	float b1= hour_2();
	float c1 = hour_3();
	cout << "car\t\thours\t\tmoney" << endl;
	cout << 1 << "\t\t" << a1 << "\t\t" << calculator(a1) << endl;
	cout << 2 << "\t\t" << b1<< "\t\t" << calculator(b1) << endl;
	cout << 3 << "\t\t" << c1 << "\t\t" << calculator(c1) << endl;
	
}
	