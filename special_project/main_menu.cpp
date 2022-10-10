#include <iostream>
#include <string>
#include "fighter.h" 
using namespace std;
//class
class Fighter {
public:
    int strength;
    int health; 

   
    Fighter() {
        health = 10;
        strength = 10;



    }
 
    void show_stats() {

        cout << "health" << health << endl;
        cout << "strength" << strength << endl;
    }
};
//mian menu
int main(){
    int num;
    cout << "1:new fighter "  << endl;
    cout << "2:exit " << endl;
    cin >> num;

    
    switch (num) {
    case 1:
        fighter.name;
        name.show_stats;
        break;
    case 2:
        break;
    default:
        exit(0);
    }

    system("pause");
    return 0;
}
