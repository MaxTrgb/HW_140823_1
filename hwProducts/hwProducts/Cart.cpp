#include "Cart.h"       
#include <iostream>
using namespace std;

// Add a product to the cart
void Cart::add(Product* product) {
    products.push_back(product); // Add the provided product pointer to the vector
}

// Purchase all products in the cart (buy one quantity of each product)
void Cart::purchase() {
    for (Product* product : products) {
        product->buy(1); // Buy one quantity of each product using the buy method of the Product class
    }
}

// Change the quantity of a product in the cart
void Cart::changeQuantity(int index, int newQuantity) {
    if (index >= 0 && index < products.size()) {
        products[index]->changeQuantity(newQuantity); // Call the changeQuantity method of the specified product
    }
    else {
        cout << "Invalid index." << endl; // Display an error message for invalid index
    }
}

// Display details of all products in the cart
void Cart::displayProducts() {
    cout << "\nProducts in cart:" << endl;
    for (int i = 0; i < products.size(); ++i) {
        cout << "\nProduct " << i + 1 << ": ";
        products[i]->display(); // Display details of each product using the display method of the Product class
    }
}

// Buy a specific quantity of a product in the cart
void Cart::buyProduct(int index, int quantity) {
    if (index >= 0 && index < products.size()) {
        products[index]->buy(quantity); // Buy the specified quantity of the specified product
    }
    else {
        cout << "Invalid index." << endl; // Display an error message for invalid index
    }
}
