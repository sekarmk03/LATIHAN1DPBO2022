<?php 

include "Mahasiswa.php";

$mahasiswa = [];

$mahasiswa[] = new Mahasiswa("Sekar", "2007703", "P", "Ilmu Komputer", 4);
$mahasiswa[] = new Mahasiswa();

$mahasiswa[1]->setNama("Shiro");
$mahasiswa[1]->setNim("2001234");
$mahasiswa[1]->setJnsKelamin("P");
$mahasiswa[1]->setProdi("Pendidikan Ilmu Komputer");
$mahasiswa[1]->setSmt(1);

echo "<table>";
foreach($mahasiswa as $mhs) {
    echo "<tr><td>Nama</td><td>:</td><td>" . $mhs->getNama() . "</td></tr>";
    echo "<tr><td>NIM</td><td>:</td><td>" . $mhs->getNim() . "</td></tr>";
    echo "<tr><td>Jenis Kelamin</td><td>:</td><td>" . $mhs->getJnsKelamin() . "</td></tr>";
    echo "<tr><td>Program Studi</td><td>:</td><td>" . $mhs->getProdi() . "</td></tr>";
    echo "<tr><td>Semester</td><td>:</td><td>" . $mhs->getSmt() . "</td></tr>";
}
echo "</table>"

?>