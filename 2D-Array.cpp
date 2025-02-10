#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of products: ";
    cin >> n;
    string products[n][4];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for product " << i + 1 << ":" << endl;
        cout << "Product ID: ";
        cin >> products[i][0];
        cout << "Product Name: ";
        cin.ignore();
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

    for (int i = 0; i < n; i++)
    {
        cout << products[i][0] << "\t" << products[i][1] << "\t\t" << products[i][2] << "\t" << products[i][3] << endl;
    }
    return 0;
}
