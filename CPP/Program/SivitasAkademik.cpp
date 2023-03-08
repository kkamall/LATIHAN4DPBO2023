// Import file:
#include "header.hh"

// Empty konstruktor.
SivitasAkademik::SivitasAkademik()
{
    this->asal_universitas = "";
    this->email_edu = "";
    this->mahasiswa = {};
    this->dosen = {};
}

// Konstruktor with params.
SivitasAkademik::SivitasAkademik(string asal_universitas, string email_edu, vector<Mahasiswa> mahasiswa, vector<Dosen> dosen)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
    this->mahasiswa = mahasiswa;
    this->dosen = dosen;
}

// Setter
void SivitasAkademik::set_asal_universitas(string asal_universitas)
{
    this->asal_universitas = asal_universitas;
}
void SivitasAkademik::set_email_edu(string email_edu)
{
    this->email_edu = email_edu;
}
void SivitasAkademik::set_mahasiswa(vector<Mahasiswa> mahasiswa)
{
    this->mahasiswa = mahasiswa;
}
void SivitasAkademik::set_dosen(vector<Dosen> dosen)
{
    this->dosen = dosen;
}

// Getter
string SivitasAkademik::get_asal_universitas()
{
    return this->asal_universitas;
}
string SivitasAkademik::get_email_edu()
{
    return this->email_edu;
}
vector<Mahasiswa> SivitasAkademik::get_mahasiswa()
{
    return this->mahasiswa;
}
vector<Dosen> SivitasAkademik::get_dosen()
{
    return this->dosen;
}

SivitasAkademik::~SivitasAkademik()
{
    
}