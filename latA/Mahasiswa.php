<?php 

class Mahasiswa {
    private $nama,
            $nim,
            $jnsKelamin,
            $prodi,
            $smt;

    public function __construct($nama = "",
                                $nim = "",
                                $jk = "",
                                $prodi = "",
                                $smt = 0) {
        $this->nama = $nama;
        $this->nim = $nim;
        $this->jnsKelamin = $jk;
        $this->prodi = $prodi;
        $this->smt = $smt;
    }

    public function setNama($nama) {
        $this->nama = $nama;
    }

    public function getNama() {
        return $this->nama;
    }

    public function setNim($nim) {
        $this->nim = $nim;
    }
    
    public function getNim() {
        return $this->nim;
    }
    
    public function setJnsKelamin($jk) {
        $this->jnsKelamin = $jk;
    }

    public function getJnsKelamin() {
        return $this->jnsKelamin;
    }

    public function setProdi($prodi) {
        $this->prodi = $prodi;
    }

    public function getProdi() {
        return $this->prodi;
    }

    public function setSmt($smt) {
        $this->smt = $smt;
    }

    public function getSmt() {
        return $this->smt;
    }

    public function belajar() {
        echo "Hhh";
    }

    public function tidur() {
        echo "Zzz";
    }

    public function rapat() {
        echo "Yyy";
    }

    public function __destruct() {
        
    }
}

?>