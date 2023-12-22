#include <iostream>
using namespace std;

int main(){
	int x = 3;
	if (x > 5){
		cout << "x is greater thatn 5.\n";
	} else if (x < 4){
		cout << "x is not less than 4 but less than or equal to 3.\n";
	} else{
		cout << "x s not greater than 5 or less than 4.";
	}
	return 0;
}
