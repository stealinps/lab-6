#include <iostream>
using namespace std;
float swap(float a, float b) {
	float c = a;
	a = b;
	return a;
}
int main() {
	float num1, num2;
	cout << "Enter num1 and num2 ";
	cin >> num1 >> num2;
	cout << swap(num1, num2) <<" " << swap(num2, num1);
}
