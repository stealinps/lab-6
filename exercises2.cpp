#include <iostream>
using namespace std;
void swap(float a, float b) {
	float c = a;
	a = b;
	b = c;
	cout << a <<" "<< b;

}
int main() {
	float num1, num2;
	cout << "Enter num1 and num2 ";
	cin >> num1 >> num2;
	cout << num1 << " " << num2<<"\n";
	swap(num1, num2);
}
