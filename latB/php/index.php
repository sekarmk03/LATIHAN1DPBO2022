<?php 

include "TimBola.php";

$tims = [];

$tims[0] = new TimBola("Tim X", "Jepang", "2003", ["Budi", "Bayu", "Bambang", "Bobi"]);

$tims[1] = new TimBola();

$tims[1]->setNama("Tim A");
$tims[1]->setNegara("Indonesia");
$tims[1]->setTahun("1999");
$tims[1]->setPemain(["Sekar", "Madu", "Kusuma", "Wardani"]);

echo "------------------------<br>";
foreach ($tims as $tim) {
    echo "Nama Tim : " . $tim->getNama() . "<br>";
    echo "Negara Asal : " . $tim->getNegara() . "<br>";
    echo "Tahun Berdiri : " . $tim->getTahun() . "<br>";
    echo "Daftar Pemain<br>";
    foreach ($tim->getPemain() as $p) {
        echo "    - " . $p . "<br>";
    }
    echo "------------------------<br>";
}

?>