#pragma once
#include <iostream>
#include <string>

using namespace std;

// structure of items(id , name , quantity)//

struct item {

    int id;
    string name;
    int quantity ; 




};

//the whole items inventory struction

struct  inventory
{
    int size ; 
    int capacity ; 
    item* items ; 

};

//defining signature of functions//

void init_inventory(inventory &inv);
void add_item(inventory &inv , int id , const string &name , int quantity);
int find_item_by_id(const inventory& inv, int target_id);
void print_inventory(const inventory &inv);
void free_inventory (inventory &inv);
