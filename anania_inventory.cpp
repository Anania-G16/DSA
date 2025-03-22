#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#define tax_rate 0.15
int main(){
    cout<<"Welcome! This program analyzes product sales and inventory for your strore.";
    cout<<"Remainder: C++ is a compiled language. It requires a compiler to convert the source code into a machine code \n\n";
    string p_name;
    int p_category;
    int initial_inventory;
    float price_per_unit;
    int items_sold;
    
    int new_inventory;
    float total_sales;
    string status;

    int sampleVar1=35;
    float sampleVar2;
    sampleVar2=450.55;
    int sampleVar3 {20};

 
    
    const float tax_rate_const = 0.15;

    cout<<"Enter the product name:  ";
    cin>>p_name;
    cout<<"Enter the category of the product:  ";
    cin>>p_category;
    cout<< "Enter the initial inventory quantity:  ";
    cin>>initial_inventory;
    cout<<"Enter the product price per unit:  ";
    cin>>price_per_unit;
    cout<<"Enter the number of items sold:  ";
    cin>>items_sold;
    new_inventory=initial_inventory;
    new_inventory-=items_sold;
    total_sales=items_sold*price_per_unit;
    
    auto sales_copy = total_sales;
    decltype(initial_inventory) helper_inventory = 60;

    status=(new_inventory<10)?"Low Inventory":"Sufficient Inventory";

    if (p_category < 1 || p_category > 5) {
        cout << "Invalid product category!\n";
        return 0;
    } else {
        switch (p_category) {
            case 1: cout << "\nCategory 1: Electronics\n";
             break;
            case 2: cout << "\nCategory 2: Groceries\n";
             break;
            case 3: cout << "\nCategory 3: Clothing\n";
             break;
            case 4: cout << "\nCategory 4: Stationery\n";
             break;
            case 5: cout << "\nCategory 5: Miscellaneous\n";
             break;
        }
    }

    cout << "\nYour Receipt:\n";
    for (int i = 1; i <= items_sold; i++) {
        cout<< "Item "<< i << ": $"<<price_per_unit<<"\n";
    }

    cout << "\nTax Rate (Preprocessor): " << tax_rate * 100 << "%\n";
    cout << "Tax Rate (Const Variable): " << tax_rate_const * 100 << "%\n";
    
    cout<<"*****************************************************";
    cout << "\nProduct Summary\n";
    cout<<"*****************************************************\n";
    cout << "Product Name: " << p_name << "\n";
    cout << "Initial Inventory: " << initial_inventory << "\n";
    cout << "Price per Unit: $"<< price_per_unit << "\n";
    cout << "Items Sold: " << items_sold << "\n";
    cout << "New Inventory: " << new_inventory << "\n";
    cout << "Total Sales Amount: $" << total_sales << "\n";
    cout << "Inventory Status: " << status << "\n";
    cout << "Helper Variable (Sales Copy): $" << sales_copy << "\n";
    cout << "Helper Variable (Helper Inventory): " << helper_inventory << "\n";
    cout<<"*****************************************************";

    return 0;
}