#include <iostream>
using namespace std;

int main(){
        int num[] = {10, 20, 30, 40, 50};

        for(auto &element : num){
                cout << element << " " << "\n";

		if (element % 2 == 0){
			cout << "Even: " << element << " ";
		}else{
			cout << "Odd: " << element << " ";
		}
        }
        return 0;
}
