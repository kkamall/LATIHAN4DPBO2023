// Import file:
#include "header.hh"

int main()
{
    // vector menyimpan data sementara:
    vector<ProgramStudi> data_program_studi;
    vector<Mahasiswa> data_mahasiswa;
    vector<Dosen> data_dosen;
    vector<Course> data_course;
    vector<SivitasAkademik> data_sivitas_akademik;

    // # HARDCODE #
    // # Data Mahasiswa 1
    data_course.push_back(Course("Alpro_1"));
    data_course.push_back(Course("Alpro_2"));
    data_mahasiswa.push_back(Mahasiswa("100", "Kamal", "Pria", "FPMIPA", "2102313", data_course));
    data_course = {};

    // # Data Mahasiswa 2
    data_course.push_back(Course("Struktur_Data"));
    data_course.push_back(Course("DPBO"));
    data_mahasiswa.push_back(Mahasiswa("200", "Fauzi", "Pria", "FPMIPA", "2102314", data_course));
    data_course = {};

    // # Data Dosen 1
    data_course.push_back(Course("Alpro_1"));
    data_course.push_back(Course("Alpro_2"));
    data_dosen.push_back(Dosen("300", "Beni", "Pria", "1001", "FPMIPA", "S3", "Komputer", data_course));
    data_course = {};

    // # Data Dosen 2
    data_course.push_back(Course("Struktur_Data"));
    data_course.push_back(Course("DPBO"));
    data_dosen.push_back(Dosen("400", "Nani", "Wanita", "1002", "FPMIPA", "S5", "Programming", data_course));
    data_course = {};

    // # Data Sivitas Akademik
    data_sivitas_akademik.push_back(SivitasAkademik("UPI", "@upi.edu", data_mahasiswa, data_dosen));

    // # Data Program Studi
    data_course.push_back(Course("Alpro_1"));
    data_course.push_back(Course("Alpro_2"));
    data_course.push_back(Course("Struktur_Data"));
    data_course.push_back(Course("DPBO"));
    data_program_studi.push_back(ProgramStudi("Ilmu Komputer", "IK", data_sivitas_akademik, data_course));
    data_course = {};

    // # Output
    for(ProgramStudi program_studi : data_program_studi)
    {
        // # Program Studi
        cout << "[ PROGRAM STUDI ]\n";
        cout << "-) " << program_studi.get_nama_prodi() << "\n";

        // # Mata Kuliah
        cout << "   -- MATA KULIAH --\n";
        for(Course mata_kuliah : program_studi.get_course())
        {
            cout << "      -) " << mata_kuliah.get_nama_matakuliah() << "\n";
        }

        // # Sivitas Akademik
        cout << "\n   -- SIVITAS AKADEMIK --\n";
        for(SivitasAkademik sivitas_akademik : program_studi.get_sivitas_akademik())
        {
            cout << "      -) Asal Universitas: " << sivitas_akademik.get_asal_universitas() << "\n";
            cout << "         EMAIL EDU: " << sivitas_akademik.get_email_edu() << "\n";

            // # Mahasiswa
            cout << "      -- MAHASISWA --\n";
            for(Mahasiswa mahasiswa : sivitas_akademik.get_mahasiswa())
            {
                cout << "         -) NIK: " << mahasiswa.get_nik() << "\n";
                cout << "            Nama: " << mahasiswa.get_nama() << "\n";
                cout << "            Jenis Kelamin: " << mahasiswa.get_jenis_kelamin() << "\n";
                cout << "            NIM: " << mahasiswa.get_nim() << "\n";
                cout << "            Fakultas: " << mahasiswa.get_fakultas() << "\n";

                // # Mata kuliah mahasiswa.
                cout << "            -- MENGONTRAK MATKUL --\n";
                for(Course course : mahasiswa.get_course())
                {
                    cout << "               -) " << course.get_nama_matakuliah() << "\n";
                }
            }

            // # Dosen
            cout << "\n      -- DOSEN --\n";
            for(Dosen dosen : sivitas_akademik.get_dosen())
            {
                cout << "         -) NIK: " << dosen.get_nik() << "\n";
                cout << "            Nama: " << dosen.get_nama() << "\n";
                cout << "            Jenis Kelamin: " << dosen.get_jenis_kelamin() << "\n";
                cout << "            NIP: " << dosen.get_nip() << "\n";
                cout << "            Fakultas: " << dosen.get_fakultas() << "\n";
                cout << "            Pendidikan Terakhir: " << dosen.get_pend_terakhir() << "\n";
                cout << "            Keahlian: " << dosen.get_keahlian() << "\n";

                // # Mata kuliah dosen.
                cout << "            -- MENGAMPU MATKUL --\n";
                for(Course course : dosen.get_course())
                {
                    cout << "               -) " << course.get_nama_matakuliah() << "\n";
                }
            }
        }
    }

    return 0;
}