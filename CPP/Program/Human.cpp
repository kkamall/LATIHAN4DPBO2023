// Import file:
#include "header.hh"

// Empty konstruktor.
Human::Human()
{
    this->nik = "";
    this->nama = "";
    this->jenis_kelamin = "";
}

// Konstruktor with params.
Human::Human(string nik, string nama, string jenis_kelamin)
{
    this->nik = nik;
    this->nama = nama;
    this->jenis_kelamin = jenis_kelamin;
}

// Setter
void Human::set_nik(string nik)
{
    this->nik = nik;
}
void Human::set_nama(string nama)
{
    this->nama = nama;
}
void Human::set_jenis_kelamin(string jenis_kelamin)
{
    this->jenis_kelamin = jenis_kelamin;
}

// Getter
string Human::get_nik()
{
    return this->nik;
}
string Human::get_nama()
{
    return this->nama;
}
string Human::get_jenis_kelamin()
{
    return this->jenis_kelamin;
}

Human::~Human()
{
    
}