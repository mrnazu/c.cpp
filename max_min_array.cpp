#include <iostream>

using namespace std;

int main(){
	int numbers[] = {12, 5, 9, 23, 7, 45};

	int maxElement = numbers[0];
	int minElement = numbers[0];

	for (int i = 1; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
		if (numbers[i] > maxElement) {
			maxElement = numbers[i];
		}
		if (numbers[i] < minElement) {
			minElement = numbers[i];
		}

		cout << "Maximum element: " << maxElement << endl;
		cout << "Minimum element: " << minElement << endl;

	}

	return 0;
}
