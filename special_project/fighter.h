
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class Fighter {
public:
    int strength;
    int dexterity;
    int intelligence;
    int health; 
    int chealth;
    int damage;
    int exp;
    int expdrop;
    vector <string> inventory;
    Fighter() {
        strength = 10;
        dexterity = 8;
        intelligence = 5;
        health = 10 + strength;
        chealth = health;
        damage = 0;
        exp = 0;

        inventory = { "sword" };
        ofstream file ("character.txt");
    };
    void show_stats() {
        cout << "health " << chealth << endl;
        cout << "strength" <<strength << endl;
        cout << "intelligence " << intelligence << endl;
        cout << "dexterity " << dexterity << endl;
        cout << "exp " << exp << endl;
        showinv();
    }
    void healthloss(int damage) {
        chealth = chealth - damage;
    };
    void exp_gain(int expdrop) {
   
        exp = exp + expdrop;
    }
    void inv_add(string item) {
        inventory.push_back(item);
    };
    void showinv() {
        cout << "inventory:" << endl;
        for (int i = 0; i < inventory.size(); i++) {
            cout << i +1 <<". " << inventory[i] << endl;
        };
    }
    void inv_delete(int i) {  
    }; 
    void save() {
        ofstream file("character.txt");
        file << "your fighter" << endl;
        file << endl;
        file << "health " << chealth << endl;
        file << "strength" << strength << endl;
        file << "intelligence " << intelligence << endl;
        file << "dexterity " << dexterity << endl;
        file << "exp " << exp << endl;
        file << endl;
        file << "inventory:" << endl;
        for (int i = 0; i < inventory.size(); i++) {
            file << i + 1 << ". " << inventory[i] << endl;
        };
    };

};