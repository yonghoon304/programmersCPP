#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int n;
	cin >> str>>n;
	
	for (int i = 0; i < n; i++) {
		cout << str;
	}
	return 0;
}