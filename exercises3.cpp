/*~Alitre is 0.264179 gallons. Write a program with the main function that will read in 
the number of litres of petrol consumed by the user's car and the number of 
kilometres travelled by the car and will then output the number of kilometres per 
gallon the car delivered. Define a function to compute the number of kilometres per 
gallon. Your program should use a globally defined constant for the number of litres 
per gallon.*/

#include <iostream>
using namespace std;
void kmOverGallon(double, double);
const double litre=0.264179;
int main(){
  double petrol, km;
  cout << "Please enter the distance travelled ";
  cin >> km;
  cout << "Please enter the amount of petrol in litres consumed ";
  cin >> petrol;
  kmOverGallon(petrol, km);
  return 0;
}
void kmOverGallon(double a, double b){
  a=a/0.264179;
  double kmPerGallon=b/a;
  cout << "km/gallon is: " << kmPerGallon;
}
