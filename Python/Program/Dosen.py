# Import File:
from Human import Human

# Kelas Dosen (Child) - Human (Parent)
class Dosen(Human):
    # Atribut Mahasiswa:
    __nip = ""
    __fakultas = ""
    __pend_terakhir = ""
    __keahlian = ""
    # Atribut komponen kelas course.
    __course = []

    # Konstruktor
    def __init__(self, nik, nama, jenis_kelamin, nip, fakultas, pend_terakhir, keahlian, course):
        Human.__init__(self, nik, nama, jenis_kelamin)
        self.__nip = nip
        self.__fakultas = fakultas
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian
        self.__course = course.copy()

    # Setter
    def set_nip(self, nip):
        self.__nip = nip

    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas

    def set_pend_terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir

    def set_keahlian(self, keahlian):
        self.__keahlian = keahlian

    def set_course(self, course):
        self.__course = course.copy()

    # Getter
    def get_nip(self):
        return self.__nip

    def get_fakultas(self):
        return self.__fakultas
    
    def get_pend_terakhir(self):
        return self.__pend_terakhir
    
    def get_keahlian(self):
        return self.__keahlian
    
    def get_course(self):
        return self.__course