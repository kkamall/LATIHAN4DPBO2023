# Kelas Manusia
class Human():
    # Atribut Manusia:
    __nik = ""
    __nama = ""
    __jenis_kelamin = ""

    # Konstruktor
    def __init__(self, nik, nama, jenis_kelamin):
        self.__nik = nik
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin

    # Setter
    def set_nik(self, nik):
        self.__nik = nik

    def set_nama(self, nama):
        self.__nama = nama

    def set_jenis_kelamin(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin

    # Getter
    def get_nik(self):
        return self.__nik

    def get_nama(self):
        return self.__nama

    def get_jenis_kelamin(self):
        return self.__jenis_kelamin