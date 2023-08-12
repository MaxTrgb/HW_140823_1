#pragma once
#include <vector>
#include "Product.h"  

class Cart {
private:
    std::vector<Product*> products;  // A vector to store pointers to Product objects

public:
    // Add a product to the cart
    void add(Product* product);

    // Purchase all products in the cart
    void purchase();

    // Change the quantity of a product in the cart
    void changeQuantity(int index, int newQuantity);

    // Display details of all products in the cart
    void displayProducts();

    // Buy a specific quantity of a product in the cart
    void buyProduct(int index, int quantity);
};
