# Import File:
from Human import Human

# Kelas Mahasiswa (Child) - Human (Parent)
class Mahasiswa(Human):
    # Atribut Mahasiswa:
    __nim = ""
    __fakultas = ""
    # Atribut komponen kelas course.
    __course = []

    # Konstruktor
    def __init__(self, nik, nama, jenis_kelamin, fakultas, nim, course):
        Human.__init__(self, nik, nama, jenis_kelamin)
        self.__nim = nim
        self.__fakultas = fakultas
        self.__course = course.copy()

    # Setter
    def set_nim(self, nim):
        self.__nim = nim

    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas

    def set_course(self, course):
        self.__course = course.copy()

    # Getter
    def get_nim(self):
        return self.__nim

    def get_fakultas(self):
        return self.__fakultas
    
    def get_course(self):
        return self.__course