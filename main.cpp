#include <iostream>
using namespace std;

int main() {
	const int n = 4;
	int a[n]{ 0, 3, 7, 5 };
	int b[n]{ 6, 9, 3, 1 };
	int c[n];

	for (int i{}; i < n; ++i)
		c[i] = std::min(a[i], b[i]);
}
