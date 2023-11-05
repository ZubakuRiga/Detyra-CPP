#include <iostream>
using namespace std;

int main() {
    int oretNormale, oretShtes;
    cout << "Jepni numrin e orëve të punës normale: ";
    cin >> oretNormale;

    cout << "Jepni numrin e orëve të punës shtesë: ";
    cin >> oretShtes;

    const int pagesaNormale = 20, pagesaShtese = 30;

    int pagesaTotale = oretNormale * pagesaNormale + oretShtes * pagesaShtese;
    cout << "Pagesa totale është: " << pagesaTotale << "€";

    int tarifaTatimore, tarifaPensioni = 5; // 5%

    int tatimi = pagesaTotale * tarifaTatimore / 100;
    int pensioni = pagesaTotale * tarifaPensioni / 100;

    int deduksioneTotale = tatimi + pensioni;
    cout << "\nDeduksionet totale nga pagesa juaj janë: " << deduksioneTotale << "€";

    int paga = pagesaTotale - deduksioneTotale;
    cout << "\nPaga juaj mujore përfundimtare është: " << paga << "€";

    return 0;
}
