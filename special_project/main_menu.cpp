#include <iostream>
#include <string>
using namespace std;
// class fighter
class fighter {
public:
    int strength;
    int intelegence;
   




};
//mian menu
int main() {
    fighter name;
    name.strength = 10;
    name.intelegence = 10;
    cout << name.strength <<endl ;
    cout <<  name.intelegence;
    return 0;
}
   /* int num;
    cout << "1:new character "  << endl;
    cout << "2:exit " << endl;
    cin >> num;

    
    switch (num) {
    case 1:
        cout << "\n" << "1:fighter" << "\n";
        break;
    case 2:
        break;
    default:
        exit(0);
    }

    system("pause");
    return 0;
}
*/