# Kelas Sivitas Akademik
class SivitasAkademik():
    # Atribut Mahasiswa:
    __asal_universitas = ""
    __email_edu = ""
    # Atribut Komponen:
    __mahasiswa = []
    __dosen = []

    # Konstruktor
    def __init__(self, asal_universitas, email_edu, mahasiswa, dosen):
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu
        self.__mahasiswa = mahasiswa.copy()
        self.__dosen = dosen.copy()

    # Setter
    def set_asal_universitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas

    def set_email_edu(self, email_edu):
        self.__email_edu = email_edu

    def set_mahasiswa(self, mahasiswa):
        self.__mahasiswa = mahasiswa.copy()

    def set_dosen(self, dosen):
        self.__dosen = dosen.copy()

    # Getter
    def get_asal_universitas(self):
        return self.__asal_universitas
    
    def get_email_edu(self):
        return self.__email_edu
    
    def get_mahasiswa(self):
        return self.__mahasiswa
    
    def get_dosen(self):
        return self.__dosen