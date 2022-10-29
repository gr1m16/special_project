
#include <iostream>
#include <string>
using namespace std;

class Fighter {
public:
    int strength;
    int dexterity;
    int intelligence;
    int health; 
    
    // constructor
    Fighter() {
        strength = 10;
        dexterity = 8;
        intelligence = 5;
        health = 10 + strength;

        




    }
    //methods
    // void show_stats()
    void show_stats() {

        cout << "health" << health << endl;
        cout << "strength" <<strength <<endl;
    }
    void healthloss() {
        /* health - damage = current health
        * if current health= 0 then die
        */
    }
};
