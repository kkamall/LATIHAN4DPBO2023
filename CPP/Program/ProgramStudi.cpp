// Import file:
#include "header.hh"

// Empty konstruktor.
ProgramStudi::ProgramStudi()
{
    this->nama_prodi = "";
    this->kode = "";
    this->sivitas_akademik = {};
    this->course = {};
}

// Konstruktor with params.
ProgramStudi::ProgramStudi(string nama_prodi, string kode, vector<SivitasAkademik> sivitas_akademik, vector<Course> course)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->sivitas_akademik = sivitas_akademik;
    this->course = course;
}

// Setter
void ProgramStudi::set_nama_prodi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}
void ProgramStudi::set_kode(string kode)
{
    this->kode = kode;
}
void ProgramStudi::set_course(vector<Course> course)
{
    this->course = course;
}
void ProgramStudi::set_sivitas_akademik(vector<SivitasAkademik> sivitas_akademik)
{
    this->sivitas_akademik = sivitas_akademik;
}

// Getter
string ProgramStudi::get_nama_prodi()
{
    return this->nama_prodi;
}
string ProgramStudi::get_kode()
{
    return this->kode;
}
vector<SivitasAkademik> ProgramStudi::get_sivitas_akademik()
{
    return this->sivitas_akademik;
}
vector<Course> ProgramStudi::get_course()
{
    return this->course;
}

ProgramStudi::~ProgramStudi()
{
    
}