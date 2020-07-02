#include<iostream>
using namespace std;
void enter(int* a, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "(" << i << ")=";
		cin >> a[i];
	}
}
void output(int a[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void  xoaPt(int*a, int&n) {
	int x;
	cin >> x;
	cout << "\nmang sau khi xoa la" << endl;
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] == x) {
			for (size_t j = i; j < n; j++)
			{
				a[j] = a[j + 1];//"==" khac "=" vi == la gan nhu nhau
			}
			n--;
			i--;
		}

	}
}
int main() {
	int  n;
	cout << "enter n" << endl;
	cin >> n;
	int* a = new int[n];
	enter(a, n);
	output(a, n);
	cout << " nhap vi tri can xoa";
	xoaPt(a, n);
	output(a, n);
	return 0;
}