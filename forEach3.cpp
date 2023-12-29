#include <iostream>
using namespace std;

int main(){
	int num[] = {10, 20, 30, 40, 50};

	for(auto &element : num){
		cout << element << " ";
	}
	return 0;
}
