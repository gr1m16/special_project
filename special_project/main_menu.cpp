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
    /*
     Fighter test = Fighter();
     test.show_stats();
     test.healthloss(-3);
     test.exp_gain(100);
     test.inv_add("tarp");
     
     test.show_stats();
     
    */
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
                 cout << endl;
                 cout << endl;
                 cout << "1: delete item" << endl;
                 cin >> num3;
                 switch (num3) {
                 case 1: {
                     cout << "help";
                 }
                 };

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
