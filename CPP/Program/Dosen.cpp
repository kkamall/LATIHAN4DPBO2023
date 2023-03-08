// Import file:
#include "header.hh"

// Empty konstruktor.
Dosen::Dosen() : Human()
{
    this->nip = "";
    this->fakultas = "";
    this->pend_terakhir = "";
    this->keahlian = "";
    this->course = {};
}

// Konstruktor with params.
Dosen::Dosen(string nik, string nama, string jenis_kelamin, string nip, string fakultas, string pend_terakhir, string keahlian, vector<Course> course) : Human(nik, nama, jenis_kelamin)
{
    this->nip = nip;
    this->fakultas = fakultas;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
    this->course = course;
}

// Setter
void Dosen::set_nip(string nip)
{
    this->nip = nip;
}
void Dosen::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}
void Dosen::set_pend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}
void Dosen::set_keahlian(string keahlian)
{
    this->keahlian = keahlian;
}
void Dosen::set_course(vector<Course> course)
{
    this->course = course;
}

// Getter
string Dosen::get_nip()
{
    return this->nip;
}
string Dosen::get_fakultas()
{
    return this->fakultas;
}
string Dosen::get_pend_terakhir()
{
    return this->pend_terakhir;
}
string Dosen::get_keahlian()
{
    return this->keahlian;
}
vector<Course> Dosen::get_course()
{
    return this->course;
}

Dosen::~Dosen()
{
    
}