#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; // Number of products

    cout << "Enter the number of products: ";
    cin >> n;

    // Create a 2D array to store product information
    string products[n][4]; // 4 fields: ID, Name, Import Date, Exp Date

    // Input product details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for product " << i + 1 << ":" << endl;

        cout << "Product ID: ";
        cin >> products[i][0];

        cout << "Product Name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, products[i][1]);

        cout << "Product Import Date (YYYY-MM-DD): ";
        cin >> products[i][2];

        cout << "Product Expiry Date (YYYY-MM-DD): ";
        cin >> products[i][3];
    }


    cout << "\nProduct Information:" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "ID\tName\t\tImport Date\tExpiry Date" << endl;
    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << products[i][0] << "\t" << products[i][1] << "\t\t" << products[i][2] << "\t" << products[i][3] << endl;
    }

    cout <<"Thank you!!!";
    return 0;
}
