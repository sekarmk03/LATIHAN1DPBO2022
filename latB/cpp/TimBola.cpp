#include <bits/stdc++.h>

using namespace std;

class TimBola {
    private:
        string namaTim;
        string negara;
        int tahun;
        vector<string> pemain;

    public:
        TimBola() {}

        TimBola(string namaTim, string negara, int tahun, vector<string> pemain) {
            this->namaTim = namaTim;
            this->negara = negara;
            this->tahun = tahun;
            this->pemain.insert(this->pemain.end(), pemain.begin(), pemain.end());
        }

        void setNamaTim(string namaTim) {
            this->namaTim = namaTim;
        }

        string getNamaTim() {
            return this->namaTim;
        }

        void setNegara(string negara) {
            this->negara = negara;
        }

        string getNegara() {
            return this-> negara;
        }

        void setTahun(int tahun) {
            this->tahun = tahun;
        }

        int getTahun() {
            return this->tahun;
        }

        void addNewPemain(string pemain) {
            this->pemain.push_back(pemain);
        }

        void delPemain(string pemain) {
            vector<string>::iterator it;
            it = find(this->pemain.begin(), this->pemain.end(), pemain);
            this->pemain.erase(this->pemain.begin()+(it - this->pemain.begin()));
        }

        vector<string> getPemain() {
            return this->pemain;
        }

        void cetakPemain() {
            if(!this->pemain.empty()) {
                cout << "Daftar Pemain" << endl;
                for(int i = 0; i < this->pemain.size(); i++) {
                    cout << i+1 << ". " << this->pemain[i] << endl;
                }
            } else {
                cout << "Belum ada pemain." << endl;
            }
        }
        
        void getDataTim(int timNo) {
            cout << endl << "+-------------- " << timNo << " --------------+" << endl;
            cout << "Nama Tim : " << this->namaTim << endl;
            cout << "Negara : " << this->negara << endl;
            cout << "Tahun Berdiri : " << this->tahun << endl;
            cetakPemain();
            cout << "+--------------------------------+" << endl << endl;
        }

        ~TimBola() {}

};