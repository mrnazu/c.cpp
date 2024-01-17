// Demo: Sum of elements in an Array
// a = {2, 3, 1, 2, 1} => sum = 9;

// first we will get number from the user, then we calculate the sum and finally we will print the sum..

#include <iostream>
using namespace std;

int main()
{
    int num[5]; // array with 5 length

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num[i];
    };

    int sum = 0;
    for (auto numb : num)
    {
        sum = sum + numb;
    }

    cout << "The sum of numbers is: " << sum << "\n";

    return 0;
};