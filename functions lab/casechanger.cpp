#include<iostream>
using namespace std;
char caseChanger(char a) {
	char upper;
	if (a >= 65 && a <= 91) {
		cout << "\nCharacter is already uppercase.";
	}
	else
	{
		upper = a - 32;
		return upper;
	}
}
int main() {
	char character;
	cout << "Enter smallcase Character:";
	cin >> character;
	cout << "The upperase letter is:";
	cout << caseChanger(character);
		return 0;
}
	

