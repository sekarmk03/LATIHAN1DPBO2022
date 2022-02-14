import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String namaTim = "";
        String negara = "";
        int tahun = 0;
        TimBola tim = new TimBola();
        int n = 0;
        int umurPelatih = 0;
        String namaPelatih = "";
        
        System.out.println("Masukkan Data Tim");
        System.out.print("> Nama Tim : ");
        try {
            namaTim = sc.next();
        } catch (Exception e) {
        }
        System.out.print("> Negara : ");
        try {
            negara = sc.next();
        } catch (Exception e) {
        }
        System.out.print("> Tahun : ");
        try {
            tahun = sc.nextInt();
        } catch (Exception e) {
        }
        System.out.print("> Jumlah Pemain : ");
        try {
            n = sc.nextInt();
        } catch (Exception e) {
        }
        String[] pemain = new String[n];
        System.out.println("> Pemain : ");
        for (int i = 0; i < pemain.length; i++) {
            pemain[i] = "";
            System.out.print("  - ");
            try {
                pemain[i] = sc.next();
            } catch (Exception e) {
            }
        }
        System.out.println("> Pelatih");
        System.out.print("  Nama : ");
        try {
            namaPelatih = sc.next();
        } catch (Exception e) {
        }
        System.out.print("  Umur : ");
        try {
            umurPelatih = sc.nextInt();
        } catch (Exception e) {
        }

        tim.setNamaTim(namaTim);
        tim.setNegara(negara);
        tim.setPemain(pemain);
        tim.setTahun(tahun);
        tim.getPelatih().setNamaPelatih(namaPelatih);
        tim.getPelatih().setUmurPelatih(umurPelatih);

        System.out.println("");
        System.out.println("+-------------------------+");
        System.out.println("        -DATA TIM-        ");
        System.out.println("Nama Tim : " + tim.getNamaTim());
        System.out.println("Asal Negara : " + tim.getNegara());
        System.out.println("Tahun Berdiri : " + tim.getTahun());
        System.out.println("Daftar Pemain");
        for (int j = 0; j < pemain.length; j++) {
            System.out.println((j + 1) + ". " + tim.getPemain()[j]);
        }
        System.out.println("Data Pelatih");
        System.out.println("-Nama Pelatih : " + tim.getPelatih().getNamaPelatih());
        System.out.println("- Umur Pelatih : " + tim.getPelatih().getUmurPelatih());
        System.out.println("+-------------------------+");

    }

}
