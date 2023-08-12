#include "Product.h" 
#include <iostream>
using namespace std;

// Constructor for the base Product class
Product::Product(const string& productName, double productPrice, int initialQuantity)
    : name(productName), price(productPrice), quantityInStock(initialQuantity) {}

// Buy a specified quantity of the product
void Product::buy(int quantity) {
    if (quantity <= quantityInStock) {
        quantityInStock -= quantity;
        cout << "\nPurchased " << quantity << " " << name << "(s)." << endl;
    }
    else {
        cout << "Not enough " << name << " in stock." << endl;
    }
}

// Change the quantity of the product in stock
void Product::changeQuantity(int newQuantity) {
    quantityInStock = newQuantity;
    cout << "\nQuantity of " << name << " changed to " << newQuantity << "." << endl;
}

// Display details of the product
void Product::display() {
    cout << "\nName: " << name << ", Price: " << price << ", Quantity in Stock: " << quantityInStock << endl;
}

// Constructor for the Electronics class
Electronics::Electronics(const string& productName, double productPrice, int initialQuantity)
    : Product(productName, productPrice, initialQuantity) {}

// Buy a specified quantity of electronics
void Electronics::buy(int quantity) {
    cout << "Buying electronics..." << endl;
    Product::buy(quantity); // Call the base class buy method
}

// Constructor for the Clothing class
Clothing::Clothing(const string& productName, double productPrice, int initialQuantity)
    : Product(productName, productPrice, initialQuantity) {}

// Buy a specified quantity of clothing
void Clothing::buy(int quantity) {
    cout << "Buying clothing..." << endl;
    Product::buy(quantity); // Call the base class buy method
}

// Constructor for the Food class
Food::Food(const string& productName, double productPrice, int initialQuantity)
    : Product(productName, productPrice, initialQuantity) {}

// Buy a specified quantity of food
void Food::buy(int quantity) {
    cout << "Buying food..." << endl;
    Product::buy(quantity); // Call the base class buy method
}
