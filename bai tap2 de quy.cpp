#include<iostream>
using namespace std;
/*int dem = 0;
int countn(int n) {
	dem++;
	if (n / 10 == 0) {
		return dem;
	}
	return countn(n / 10);
}
int main() {
	int n;
	cout << "nhap n" << endl;
	cin >> n;
	dem=countn(n);
	cout << dem << endl;
	return 0;
}*/
/*int sum(int n) {
	if (n == 0) {
		return 1;
	}
	return 2 * n * sum(n - 1);
}
int main() {
	int n;
	cin >> n;
	cout << sum(n) << endl;
	return 0;
}*/
void binary(int n) {
	if (n != 0) {
		binary(n / 2);
		cout << n % 2;
	}
	return;
}

int main() {
	int n;
	cout << "enter n" << endl;
	cin >> n;
	binary(n);
	return 0;
}