<?php 

class TimBola {
    private $namaTim,
            $negara,
            $tahun,
            $pemain;

    public function __construct($namaTim = "", $negara = "", $tahun = "", $pemain = []) {
        $this->namaTim = $namaTim;
        $this->negara = $negara;
        $this->tahun = $tahun;
        $this->pemain = $pemain;
    }
    
    public function setNama($nama) {
        $this->namaTim = $nama;
    }

    public function getNama() {
        return $this->namaTim;
    }

    public function setNegara($negara) {
        $this->negara = $negara;
    }

    public function getNegara() {
        return $this->negara;
    }

    public function setTahun($tahun) {
        $this->tahun = $tahun;
    }

    public function getTahun() {
        return $this->tahun;
    }

    public function setPemain($pemain) {
        $this->pemain = $pemain;
    }

    public function getPemain() {
        return $this->pemain;
    }

    function __destruct() { }
}

?>