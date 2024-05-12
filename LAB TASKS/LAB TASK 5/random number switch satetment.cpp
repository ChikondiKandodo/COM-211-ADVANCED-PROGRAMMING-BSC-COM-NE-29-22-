#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    srand(time(nullptr)); // Initialize random seed

    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Output the number of days until expiration
    cout << "Days until expiration: " << daysUntilExpiration << endl;

    // Check subscription status and provide appropriate message using switch statement
    switch(daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription. Enjoy!" << endl;
            break;
    }

    return 0;
}
