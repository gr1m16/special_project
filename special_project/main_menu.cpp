#include <iostream>
#include <string>
#include "fighter.h" 
#include <vector>
using namespace std;
//mian menu
int main() {
    int num;
    int num2;
    int num3;
    cout << "1:create character " << endl;
    cin >> num;
    Fighter name;
    switch (num) {
    case 1: {
        cout << "choose class" << endl;
        cout << "1: fighter" << endl;
        cin >> num2;
        switch (num2) {
        case 1: {
            Fighter name = Fighter();
            name.show_stats();
            name.inv_add("tarp");
            cout << endl;
            cout << endl;
            cout << "1: save file" << endl;
            cin >> num3;
            switch (num3) {
            case 1: {
                name.save();
            }
            };
        };
        };
    };
          break;
    default:
        exit(0);
    };
    return 0;
};