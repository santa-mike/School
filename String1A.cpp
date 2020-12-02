#include <iostream>
using namespace std;

int main() {
	string a; cin >> a;
	cout << a.substr(2, 1) << endl;
	cout << a.substr(a.size() - 2, 1) << endl;
	cout << a.substr(0, 5) << endl;
	cout << a.substr(0, a.size() - 2) << endl;
	for(int i = 0; i < a.size(); i += 2) {
		cout << a[i];
	}
	cout << endl;
	for(int i = 1; i < a.size(); i += 2) {
		cout << a[i];
	}
	cout << endl;
	for (int i = a.size() - 1; i >= 0; i--) {
		cout << a[i];
	}
	cout << endl;
	for(int i = a.size() - 1; i >= 0; i -= 2) {
		cout << a[i];
	}
	cout << endl << a.size();
}
