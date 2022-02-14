import java.util.Scanner;

class TimBola {
    private String namaTim;
    private String negara;
    private int tahun;
    private String[] pemain;
    Pelatih pelatih;

    TimBola() {
        this.namaTim = "";
        this.negara = "";
        this.tahun = 0;
        this.pelatih = new Pelatih();
        this.pemain = new String[100];
    }

    Pelatih getPelatih() {
        return this.pelatih;
    }

    void setNamaTim(String namaTim) {
        this.namaTim = namaTim;
    }

    String getNamaTim() {
        return this.namaTim;
    }

    void setNegara(String negara) {
        this.negara = negara;
    }

    String getNegara() {
        return this.negara;
    }

    void setTahun(int tahun) {
        this.tahun = tahun;
    }

    int getTahun() {
        return this.tahun;
    }

    void setPemain(String[] p) {
        for (int i = 0; i < p.length; i++) {
            this.pemain[i] = p[i];
        }
    }

    String[] getPemain() {
        return this.pemain;
    }

    class Pelatih {
        private String namaPelatih;
        private int umurPelatih;
        Pelatih() {
            this.namaPelatih = "";
            this.umurPelatih = 0;
        }

        void setNamaPelatih(String nPelatih) {
            this.namaPelatih = nPelatih;
        }

        String getNamaPelatih() {
            return this.namaPelatih;
        }

        void setUmurPelatih(int umur) {
            this.umurPelatih = umur;
        }

        int getUmurPelatih() {
            return this.umurPelatih;
        }
    }

}