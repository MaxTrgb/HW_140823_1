#pragma once
#include <string>
using namespace std;

// Base class representing a general product
class Product {
protected:
    string name;            
    double price;          
    int quantityInStock;    

public:
    // Constructor to initialize the product's attributes
    Product(const string& productName, double productPrice, int initialQuantity);

    // Virtual function to buy a specified quantity of the product
    virtual void buy(int quantity);

    // Function to change the quantity of the product in stock
    void changeQuantity(int newQuantity);

    // Function to display product details
    void display();
};

// Derived class representing an electronics product
class Electronics : public Product {
public:
    // Constructor to initialize electronics product attributes
    Electronics(const string& productName, double productPrice, int initialQuantity);

    // Override the base class function to buy electronics product
    void buy(int quantity) override;
};

// Derived class representing a clothing product
class Clothing : public Product {
public:
    // Constructor to initialize clothing product attributes
    Clothing(const string& productName, double productPrice, int initialQuantity);

    // Override the base class function to buy clothing product
    void buy(int quantity) override;
};

// Derived class representing a food product
class Food : public Product {
public:
    // Constructor to initialize food product attributes
    Food(const string& productName, double productPrice, int initialQuantity);

    // Override the base class function to buy food product
    void buy(int quantity) override;
};
