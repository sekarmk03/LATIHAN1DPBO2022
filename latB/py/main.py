from TimBola import *

tims = []
namaTim = ""
negara = ""
tahun = ""
n = 0

n = int(input("Jumlah Tim : "))
print("-------------------------")
for i in range(n):
    tim = TimBola()
    pemain = []
    namaTim = input("> Nama Tim" + str(i + 1) + " : ")
    negara = input("> Negara : ")
    tahun = input("> Tahun : ")
    m = 0
    m = int(input("> Jumlah Pemain : "))
    print("> Pemain")
    for j in range(m):
        strP = input("  - ")
        pemain.append(strP)
    namaStadion = ""
    lokasi = ""
    print("> Data Stadion")
    namaStadion = input("  - Nama Stadion : ")
    lokasi = input("  - Lokasi Stadion : ")

    tim.setNamaTim(namaTim)
    tim.setNegara(negara)
    tim.setTahun(tahun)
    tim.setPemain(pemain)
    tim.getStadion().setNamaStadion(namaStadion)
    tim.getStadion().setLokasi(lokasi)

    tims.append(tim)
    print("-------------------------")

print("\nDaftar Tim")
for i in range(n):
    print(str(i + 1), ". ", tims[i].getNamaTim())

print("")
idTim = 0
idTim = int(input("Tampilkan Detail Tim : "))
print("+---------------------------+")
print("> Nama Tim : " + tims[idTim-1].getNamaTim())
print("> Negara : " + tims[idTim-1].getNegara())
print("> Tahun Berdiri : " + tims[idTim-1].getTahun())
print("> Daftar Pemain")
for p in tims[idTim-1].getPemain():
    print("  - " + p)
print("> Detail Stadion")
print("  - Nama Stadion : " + tims[idTim-1].getStadion().getNamaStadion())
print("  - Lokasi Stadion : " + tims[idTim-1].getStadion().getLokasi())
print("+---------------------------+")