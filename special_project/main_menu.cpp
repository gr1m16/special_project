#include <iostream>
#include <string>
#include "fighter.h" 
using namespace std;

//mian menu
int main(){
    int num;
    cout << "1:new fighter "  << endl;
    cin >> num;
    Fighter name;
    
    switch (num) {
    case 1: {
        Fighter name = Fighter();
        name.show_stats();
    }
        break;
    default:
        exit(0);
    }

    system("pause");
    return 0;
}
