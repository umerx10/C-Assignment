#include <iostream>
using namespace std;


int main() {
    char a;
    int n;
    
    do {
        
        do {
            cout << "Enter an integer 'n' and 'n' should be (1<=n<=10) : ";
            cin >> n;
        } while (n < 1 || n > 10);

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << i;
            }
            cout <<endl;
        }

        do {
            cout << "Do you want to generate another pattern? (Y/N): ";
            cin >>a;
    
            if (a != 'y' && a != 'n') {
            cout << "Invalid input. Please enter 'Y' or 'N'." <<endl;
            }
        } while (a != 'y' && a != 'n');
    } while (a != 'n'  && a != 'N' );

        if (a == 'N' || a=='n') 
		{
            cout << "Thankyou!" << endl;
        }

    return 0;
}