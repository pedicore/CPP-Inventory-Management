#include <iostream>
#include "inventory.h" 
#include <string>
using namespace std;

void init_inventory(inventory &inv){

    inv.size = 0;
    inv.capacity = 2;
    inv.items = new item [inv.capacity];


}
void add_item(inventory &inv , int id , const string &name , int quantity){

if (inv.size ==inv.capacity)
{
    inv.capacity *=2;
    item* temp = new item[inv.capacity];
 
    for (int i = 0; i < inv.size; i++)
    {
        temp[i] = inv.items[i];
    }
    delete [] inv.items ;
    inv.items = temp; 

}
 
inv.items[inv.size].name = name;
inv.items[inv.size].id = id;
inv.items[inv.size].quantity = quantity;
inv.size++;
}
int find_item_by_id(const inventory& inv, int target_id){

    for (int i = 0;i<inv.size; i++)
    {
        if (inv.items[i].id == target_id)
        {
            return i;
        }

    }
  return -1;
}
void print_inventory(const inventory &inv){

    for (int i = 0; i < inv.size; i++) {
        cout << "ID: " << inv.items[i].id ;
        cout<< " | Name: " << inv.items[i].name ;
        cout<< " | Qty: " << inv.items[i].quantity << endl;
    }

}
void free_inventory (inventory &inv){
delete[] inv.items ;
inv.items = nullptr;
inv.capacity = 0;
inv.size = 0;
}






