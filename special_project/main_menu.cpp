#include <iostream>
#include <string>
#include "fighter.h" 
using namespace std;

//mian menu
int main(){
    int num;
    int num2;
    
    cout << "1:create character "  << endl;
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
        }
    }

    }
        break;
    default:
        exit(0);
    }

    system("pause");
    return 0;
}
