#include <iostream>

using namespace std;

int main() {

    int numri1, numri2;

    cout << "Sheno numrin e pare: ";
    cin >> numri1;
    cout << "Sheno numrin e dyte: ";
    cin >> numri2;

    if (numri1 > 0 && numri2 > 0) {
        cout << "Numrat e dhene jane pozitiv!";
    } else if ((numri1 < 0 && numri2 < 0)) {
        cout << "Numrat e dhene jane negativ!";
    } else if (numri1 == 0 && numri2 == 0) {
        cout << "Te dy numrat e dhene jane zero!";
    } else if ((numri1 < 0 || numri2 < 0) && (numri1 > 0 || numri2 > 0)) {
        cout << "Numrat jane te perzier (njeri pozitiv e tjetri negativ)!";
    }

    cout << endl;

    if (numri1 % 2 == 0 && numri2 % 2 == 0) {
        cout << "Numrat e dhene jane cift!";
    } else if ((numri1 % 2 != 0 && numri2 % 2 != 0)) {
        cout << "Numrat e dhene jane tek!";
    } else if ((numri1 % 2 == 0 || numri2 % 2 == 0) && (numri1 % 2 != 0 || numri2 % 2 != 0)) {
        cout << "Numrat e dhene jane te perzier (njeri cift e tjetri tek)!";
    }

    return 0;
}
