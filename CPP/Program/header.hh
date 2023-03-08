// Import library and files:
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Course
{
    // Atribut:
    private:
        string nama_matakuliah;

    public:
        // Konstruktor.  
        Course();
        Course(string nama_matakuliah);

        // Getter.
        string get_nama_matakuliah();

        // Setter.
        void set_nama_matakuliah(string nama_matakuliah);

        // Destructor.
        ~Course();
};

class Human
{
    // Atribut:
    private:
        string nik;
        string nama;
        string jenis_kelamin;

    public:
        // Konstruktor
        Human();
        Human(string nik, string nama, string jenis_kelamin);

        // Setter
        void set_nik(string nik);
        void set_nama(string nama);
        void set_jenis_kelamin(string jenis_kelamin);

        // Getter
        string get_nik();
        string get_nama();
        string get_jenis_kelamin();

        // Destructor
        ~Human();
};

class Mahasiswa : public Human
{
    // Atribut:
    private:
        string nim;
        string fakultas;
        vector<Course> course;

    public:
        // Konstruktor
        Mahasiswa();
        Mahasiswa(string nik, string nama, string jenis_kelamin, string nim, string fakultas, vector<Course> course);

        // Setter
        void set_nim(string nim);
        void set_fakultas(string fakultas);
        void set_course(vector<Course> course);

        // Getter
        string get_nim();
        string get_fakultas();
        vector<Course> get_course();

        // Destructor
        ~Mahasiswa();
};

class Dosen : public Human
{
    // Atribut:
    private:
        string nip;
        string fakultas;
        string pend_terakhir;
        string keahlian;
        vector<Course> course;

    public:
        // Konstruktor
        Dosen();
        Dosen(string nik, string nama, string jenis_kelamin, string nip, string fakultas, string pend_terakhir, string keahlian, vector<Course> course);

        // Setter
        void set_nip(string nip);
        void set_fakultas(string fakultas);
        void set_pend_terakhir(string pend_terakhir);
        void set_keahlian(string keahlian);
        void set_course(vector<Course> course);

        // Getter
        string get_nip();
        string get_fakultas();
        string get_pend_terakhir();
        string get_keahlian();
        vector<Course> get_course();

        // Destructor
        ~Dosen();
};

class SivitasAkademik 
{
    // Atribut:
    private:
        string asal_universitas;
        string email_edu;
        vector<Mahasiswa> mahasiswa;
        vector<Dosen> dosen;

    public:
        // Konstruktor
        SivitasAkademik();
        SivitasAkademik(string asal_universitas, string email_edu, vector<Mahasiswa> mahasiswa, vector<Dosen> dosen);

        // Setter
        void set_asal_universitas(string asal_universitas);
        void set_email_edu(string email_edu);
        void set_mahasiswa(vector<Mahasiswa> mahasiswa);
        void set_dosen(vector<Dosen> dosen);

        // Getter
        string get_asal_universitas();
        string get_email_edu();
        vector<Mahasiswa> get_mahasiswa();
        vector<Dosen> get_dosen();

        // Destructor
        ~SivitasAkademik();
};

class ProgramStudi
{
    // Atribut:
    private:
        string nama_prodi;
        string kode;
        vector<SivitasAkademik> sivitas_akademik;
        vector<Course> course;

    public:
        // Konstruktor
        ProgramStudi();
        ProgramStudi(string nama_prodi, string kode, vector<SivitasAkademik> sivitas_akademik, vector<Course> course);

        // Setter
        void set_nama_prodi(string nama_prodi);
        void set_kode(string kode);
        void set_sivitas_akademik(vector<SivitasAkademik> sivitas_akademik);
        void set_course(vector<Course> course);

        // Getter
        string get_nama_prodi();
        string get_kode();
        vector<SivitasAkademik> get_sivitas_akademik();
        vector<Course> get_course();

        // Destructor
        ~ProgramStudi();
};