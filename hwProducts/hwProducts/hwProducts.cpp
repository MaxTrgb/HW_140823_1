#include <iostream>
#include "Product.h"  
#include "Cart.h"     
using namespace std;

int main() {
    Cart cart; // Create a Cart object to store and manage products
    int choice;

    do {
        // Display menu options
        cout << "\n1. Add Product" << endl;
        cout << "2. Buy Products" << endl;
        cout << "3. Change Quantity of a Product" << endl;
        cout << "4. Display All Products" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;   // Read user's choice

        switch (choice) {
        case 1: {
            cout << "\nEnter product type (Electronics/Clothing/Food): ";
            string productType;
            cin >> productType;

            string productName;
            double productPrice;
            int initialQuantity;

            cout << "Enter product name: ";
            cin >> productName;

            cout << "Enter product price: ";
            cin >> productPrice;

            cout << "Enter initial quantity in stock: ";
            cin >> initialQuantity;

            // Add a new product to the cart based on the specified type
            if (productType == "Electronics") {
                cart.add(new Electronics(productName, productPrice, initialQuantity));
            }
            else if (productType == "Clothing") {
                cart.add(new Clothing(productName, productPrice, initialQuantity));
            }
            else if (productType == "Food") {
                cart.add(new Food(productName, productPrice, initialQuantity));
            }
            else {
                cout << "Invalid product type. Please enter Electronics, Clothing, or Food." << endl;
            }
            break;
        }
        case 2: {
            cart.displayProducts();  // Display the list of products in the cart
            int productIndex, quantity;
            cout << "\nEnter the index of the product to buy: ";
            cin >> productIndex;
            cout << "Enter the quantity to buy: ";
            cin >> quantity;

            // Buy a specified quantity of the selected product
            cart.buyProduct(productIndex - 1, quantity);
            break;
        }
        case 3: {
            cart.displayProducts();  // Display the list of products in the cart
            int productIndex, newQuantity;
            cout << "\nEnter the index of the product to change quantity: ";
            cin >> productIndex;
            cout << "Enter the new quantity: ";
            cin >> newQuantity;

            // Change the quantity of a specified product
            cart.changeQuantity(productIndex - 1, newQuantity);
            break;
        }
        case 4:
            cart.displayProducts();  // Display the list of products in the cart
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 5);  // Repeat the loop until the user chooses to exit

    return 0;
}
