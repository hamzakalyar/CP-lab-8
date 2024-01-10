#include<iostream>
#include<string>
using namespace std;
string reversenumber(int num);
	int main() {
		int num;
		cout << "Enter number:";
		cin >> num;
		cout << "Reversed Number is:";
		cout << reversenumber(num);
		return 0;
	}
  string reversenumber(int num) {
	int rem;
	string reverse_num;
	while (num != 0) {
		rem = num % 10;
		reverse_num = reverse_num + to_string(rem);
		num /= 10;
	}
	return reverse_num;
}
