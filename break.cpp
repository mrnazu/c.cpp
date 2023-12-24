#include <iostream>

using namespace std;


int main(){
	int i = 1;
	while (i <= 10){
		cout << i << " ";
		if (i==5){
			break;
		}
		i++;
	}
	cout << "Loop ended." << "\n";
	return 0;
}
