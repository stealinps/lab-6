#include <iostream>
using namespace std;
void namePrint(string name) {
	cout << "\n*************************************************\n";
	cout << "*                                               *\n";
	cout << "*                 " << name << "                 *\n";
	cout << "*                                               *\n";
	cout << "*************************************************\n";
}
int main() {
	string name;
	cout << "Enter name ";
	cin >> name;
	namePrint(name);
}
