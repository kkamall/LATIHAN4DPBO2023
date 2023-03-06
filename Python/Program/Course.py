# Kelas Course
class Course():
    # Atribut:
    __nama_matakuliah = ""

    # Konstruktor
    def __init__(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah

    # Setter
    def set_nama_matakuliah(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah

    # Getter
    def get_nama_matakuliah(self):
        return self.__nama_matakuliah