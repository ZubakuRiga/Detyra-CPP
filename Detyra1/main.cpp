#include <iostream>
using namespace std;

int main() {

    int non, nov;
    cout<< "Sheno numrin e oreve te punes (normale): \n";
    cin>> non;
    cout << "Sheno numrin e oreve te punes (vecante) \n";
    cin>> nov;

    int pon = 20, pov = 30;
    int pagesa = (non*pon) + (nov*pov);
    cout << "Pagesa juaj eshte: " << pagesa << "€";


    int nds, ndp = 5;
    int ndalesa = nds + ndp;
    cout << "\nNdalesa nga paga juaj eshte: " << ndalesa << "€";


    int paga = pagesa - ndalesa;
    cout << "\nPaga juaj ne fund te muajit eshte :" << paga <<"€";

    return 0;
}
