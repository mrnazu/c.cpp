// Write a c++ program to solve the following series: 5 + 8 + 11 + .... + 50

#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	for (int i = 5; i <= 50; i += 3){
		sum += 1;
	}
	cout << "The sum is: " << sum << "\n";
	return 0;
}
