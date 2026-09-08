#include <iostream>
#include "inventory.h"

using namespace std; 


int main() {
    inventory my_store;

    
    init_inventory(my_store);

    
    add_item(my_store, 101, "Laptop", 5);
    add_item(my_store, 102, "Mouse", 25);
    add_item(my_store, 103, "Keyboard", 12); 

    
    cout << "--- Current Inventory ---" << endl;
    print_inventory(my_store);

    
    cout << "\n--- Searching for Item ---" << endl;
    int search_id = 102;
    int index = find_item_by_id(my_store, search_id);

    if (index != -1) {
        cout << "Item with ID " << search_id << " found at index " << index << "!" << endl;
        cout << "Name: " << my_store.items[index].name << " | Quantity: " << my_store.items[index].quantity << endl;
    } else {
        cout << "Item with ID " << search_id << " not found!" << endl;
    }

    
    free_inventory(my_store);
    cout << "\nMemory freed successfully!" << endl;

    return 0;
}