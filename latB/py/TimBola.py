class TimBola:
    def __init__(self):
        self.namaTim = ""
        self.negara = ""
        self.tahun = ""
        self.pemain = []
        self.stadion = self.Stadion()

    def setNamaTim(self, namaTim):
        self.namaTim = namaTim

    def getNamaTim(self):
        return self.namaTim

    def setNegara(self, negara):
        self.negara = negara

    def getNegara(self):
        return self.negara

    def setTahun(self, tahun):
        self.tahun = tahun

    def getTahun(self):
        return self.tahun

    def setPemain(self, pemain):
        self.pemain = pemain.copy()

    def getPemain(self):
        return self.pemain

    def getStadion(self):
        return self.stadion

    class Stadion:
        def __init__(self):
            self.namaStadion = ""
            self.lokasi = ""

        def setNamaStadion(self, namaStadion):
            self.namaStadion = namaStadion

        def getNamaStadion(self):
            return self.namaStadion

        def setLokasi(self, lokasi):
            self.lokasi = lokasi

        def getLokasi(self):
            return self.lokasi
