# Import file:
from Course import Course
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from SivitasAkademik import SivitasAkademik
from ProgramStudi import ProgramStudi

# List menyimpan data sementara
data_program_studi = []
data_mahasiswa = []
data_dosen = []
data_course = []
data_sivitas_akademik = []

# HARDCODE #
# Data Mahasiswa 1
data_course.extend([Course("Alpro 2"), Course("Alpro 1")])
data_mahasiswa.append(Mahasiswa("100", "Kamal", "Pria", "FPMIPA", "2102313", data_course))
data_course.clear()

# Data Mahasiswa 2
data_course.extend([Course("Sturktur Data"), Course("DPBO")])
data_mahasiswa.append(Mahasiswa("200", "Fauzi", "Pria", "FPMIPA", "2102314", data_course))
data_course.clear()

# Data Dosen 1
data_course.extend([Course("Alpro 2"), Course("Alpro 1")])
data_dosen.append(Dosen("300", "Beni", "Pria", "1001", "FPMIPA", "S3", "Komputer", data_course))
data_course.clear()

# Data Dosen 2
data_course.extend([Course("Struktur Data"), Course("DPBO")])
data_dosen.append(Dosen("400", "Nani", "Wanita", "1002", "FPMIPA", "S5", "Programming", data_course))
data_course.clear()

# Data Sivitas Akademik
data_sivitas_akademik.append(SivitasAkademik("UPI", "@upi.edu", data_mahasiswa, data_dosen))

# Data Program Studi
data_course.extend([Course("Sturktur Data"), Course("DPBO"), Course("Alpro 2"), Course("Alpro 1")])
data_program_studi.append(ProgramStudi("Ilmu Komputer", "IK", data_sivitas_akademik, data_course))
data_course.clear()

# Output
for program_studi in data_program_studi:
    # Program Studi
    print("[ LIST PROGRAM STUDI ]")
    print(f"1. {program_studi.get_nama_prodi()}\n")

    # Mata Kuliah
    print("   -- MATA KULIAH --")
    for mata_kuliah in program_studi.get_course():
        print(f"      -) {mata_kuliah.get_nama_matakuliah()}")

    # Sivitas Akademik
    print("\n   -- SIVITAS AKADEMIK --")
    for sivitas_akademik in program_studi.get_sivitas_akademik():
        print(
            f"      -) Asal Universitas: {sivitas_akademik.get_asal_universitas()}")
        print(f"         EMAIL EDU: {sivitas_akademik.get_email_edu()}\n")

        # Mahasiswa
        print("      -- MAHASISWA --")
        for mahasiswa in sivitas_akademik.get_mahasiswa():
            print(f"         -) NIK: {mahasiswa.get_nik()}")
            print(f"            Nama: {mahasiswa.get_nama()}")
            print(
                f"            Jenis Kelamin: {mahasiswa.get_jenis_kelamin()}")
            print(f"            NIM: {mahasiswa.get_nim()}")
            print(f"            Fakultas: {mahasiswa.get_fakultas()}")

            # Mata kuliah mahasiswa.
            print("            -- MENGONTRAK MATKUL --")
            for mata_kuliah_m in mahasiswa.get_course():
                print(
                    f"               -) {mata_kuliah_m.get_nama_matakuliah()}")

        # Dosen
        print("\n      -- DOSEN --")
        for dosen in sivitas_akademik.get_dosen():
            print(f"         -) NIK: {dosen.get_nik()}")
            print(f"            Nama: {dosen.get_nama()}")
            print(f"            Jenis Kelamin: {dosen.get_jenis_kelamin()}")
            print(f"            NIP: {dosen.get_nip()}")
            print(f"            Fakultas: {dosen.get_fakultas()}")
            print(
                f"            Pendidikan Terakhir: {dosen.get_pend_terakhir()}")
            print(f"            Keahlian: {dosen.get_keahlian()}")

            # Mata kuliah dosen.
            print("            -- MENGAMPU MATKUL --")
            for mata_kuliah_d in dosen.get_course():
                print(
                    f"               -) {mata_kuliah_d.get_nama_matakuliah()}")
        print("")
