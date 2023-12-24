#include <iostream>
using namespace std;

int main(){
	int num = 0;

	cout << "Please Enter a number: ";
	cin >> num;

	for(int x = 1; x <= 10; ++x){
		int result = num * x;

		cout << result << "\n";
	}

	return 0;
}
