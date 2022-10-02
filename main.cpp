#include <iostream>
using namespace std;
int main(){
    int totalH, totalJ, jumlah_bensin, efektivitas_mesin;
    int harga_bensin = 10000;
    char ulang;
    do{
        cout << "## menghitung efektivitas mesin motor dari total jarak tempuh terhadap jumlah bensin yang dibeli##" << endl;
        cout << " harga bensin pertalite Rp.10.000/liter " << endl;

        cout << " total harga bensin yang dibeli (Rp): ";
        cin >> totalH;
        cout << " total jarak yang ditempuh motor (m): ";
        cin >> totalJ;{
            jumlah_bensin = totalH/harga_bensin;
            efektivitas_mesin = totalJ/jumlah_bensin;
        }
        cout << " jumlah volume bensin yang dibeli " << jumlah_bensin << " liter" << endl;
        cout << " efektivitas mesin motor terhadap jumlah volume bensin " << efektivitas_mesin << " meter/liter" << endl;
        cout << endl;
        cout << "menghitung efektivias mesin motor ulang? (y/t)?" << endl;
        cin >> ulang;
        cout << endl;
    }
    while (ulang != 't');
    cout << endl;

  return 0;
}
