# Kelas Program Studi
class ProgramStudi():
    # Atribut Mahasiswa:
    __nama_prodi = ""
    __kode = ""
    # Atribut komponen:
    __sivitas_akademik = []
    __course = []

    # Konstruktor
    def __init__(self, nama_prodi, kode, sivitas_akademik, course):
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__sivitas_akademik = sivitas_akademik.copy()
        self.__course = course.copy()

    # Setter
    def set_nama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi

    def set_kode(self, kode):
        self.__kode = kode

    def set_sivitas_akademik(self, sivitas_akademik):
        self.__sivitas_akademik = sivitas_akademik.copy()

    def set_course(self, course):
        self.__course = course.copy()

    # Getter
    def get_nama_prodi(self):
        return self.__nama_prodi

    def get_kode(self):
        return self.__kode
    
    def get_sivitas_akademik(self):
        return self.__sivitas_akademik
    
    def get_course(self):
        return self.__course