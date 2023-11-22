#include <iostream>
using namespace std;
int main() {
    char A = 'Y';

    while (A == 'Y' || A == 'y') {
        int n;
        int sum = 0;

        
        do {
            cout << "Enter a positive integer (n > 0): ";
            cin >> n;
        } while (n <= 0);

        
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        cout << "The sum of integers from 1 to " << n << " is: " << sum << endl;


        do {
            cout << "Do you want to calculate the sum for another integer? (Y/N): ";
            cin >> A;
        } while (A != 'Y' && A != 'y' && A != 'N' && A != 'n');

        if (A == 'N' || A == 'n') {
            cout << "Goodbye!" << endl;
        }
    }

    return 0;
}
