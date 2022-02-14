#include <bits/stdc++.h>
#include "TimBola.cpp"

using namespace std;

int main() {
    int jmlTim;
    vector<TimBola> tim;
    string namaTim = "";
    string negara = "";
    int tahun;
    int n;
    char lanjut;

    cout << "Jumlah Tim : ";
    cin >> jmlTim;
    cout << endl;

    for(int i = 0; i < jmlTim; i++) {
        cout << "-------------------------" << endl;
        cout << "------ Data Tim " << i+1 << " ------" << endl;
        cout << "> Nama Tim : ";
        cin >> namaTim;
        cout << "> Negara : ";
        cin >> negara;
        cout << "> Tahun : ";
        cin >> tahun;
        cout << "> Jumlah Pemain : ";
        cin >> n;
        vector<string> pemain;
        for(int j = 0; j < n; j++) {
            string p = "";
            cout << "  " << j+1 << ". ";
            cin >> p;
            pemain.push_back(p);
        }
        TimBola t(namaTim, negara, tahun, pemain);
        tim.push_back(t);
    }

    cout << endl << "Summary Tim List" << endl;

    for(int i = 0; i < jmlTim; i++) {
        cout << i+1 << ". " << tim[i].getNamaTim() << endl;
    }

    do {
        cout << endl << "     -Menu Tim-     " << endl;
        int idTim = 0;
        cout << "> Pilih Tim : ";
        cin >> idTim;
        cout << "1. Ubah Nama Tim" << endl;
        cout << "2. Ubah Negara" << endl;
        cout << "3. Ubah Tahun Berdiri" << endl;
        cout << "4. Tambah Pemain" << endl;
        cout << "5. Hapus Pemain" << endl;

        int pilihan = 0;
        cout << "> Pilih Menu : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                cout << "Nama Tim :";
                cin >> namaTim;
                tim[idTim-1].setNamaTim(namaTim);
                break;
            }
            case 2: {
                cout << "Negara Tim : ";
                cin >> negara;
                tim[idTim-1].setNegara(negara);
                break;
            }
            case 3: {
                cout << "Tahun : ";
                cin >> tahun;
                tim[idTim-1].setTahun(tahun);
                break;
            }
            case 4: {
                cout << "Nama Pemain : ";
                string q;
                cin >> q;
                tim[idTim-1].addNewPemain(q);
                break;
            }
            case 5: {
                cout << "Nama Pemain : ";
                string q;
                cin >> q;
                tim[idTim-1].delPemain(q);
                break;
            }
            default:
                break;
        }

        tim[idTim-1].getDataTim(idTim);

        cout << "Lanjutkan? (y/n) : ";
        cin >> lanjut;
    } while(lanjut == 'y' || lanjut == 'Y');

    return 0;
}