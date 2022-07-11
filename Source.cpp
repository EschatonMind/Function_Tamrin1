#include <iostream>
using namespace std;
bool Prime(int n);
void GeneratePrimes(int n);
void main() {
	int number;
	cout << " Enter the number " << endl;
	cin >> number;
	if (Prime(number))
	{
		cout << number << " is a prime" << endl;
	}
	else
	{
		cout << number << " is not a prime" << endl;
	}
	GeneratePrimes(number);
}

void GeneratePrimes(int n) {
	cout << " Previous Primes: ";
	for (int i = 2; i <= n; i++) {
		if (Prime(i)) {
			cout << i << " ";
		}
	}
}

bool Prime(int n) {
	for (int i = 2; i < n-1; i++)
	{
		if (n%i==0) {
			return false;
		}
	}
	return true;
}