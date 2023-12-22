#include <iostream>
using namespace std;

int main(){
	int day = 3;
	
	switch (day){
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		default:
			cout << "Other day";
	}
	return 0;
}
