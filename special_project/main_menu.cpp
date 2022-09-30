#include <iostream>
#include <string>
using namespace std;

int main() {

    int num;
    cout << "1:new character "  << endl;
    cout << "2:exit " << endl;
    cin >> num;


    switch (num) {
    case 1:
        cout << "\n" << "You chose 1" << "\n";
        break;
    case 2:
        break;
    default:
        exit(0);
    }

    system("pause");
    return 0;
}