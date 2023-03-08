// Import file:
#include "header.hh"

// Empty konstruktor.
Mahasiswa::Mahasiswa() : Human()
{
    this->nim = "";
    this->fakultas = "";
    this->course = {};
}

// Konstruktor with params.
Mahasiswa::Mahasiswa(string nik, string nama, string jenis_kelamin, string nim, string fakultas, vector<Course> course) : Human(nik, nama, jenis_kelamin)
{
    this->nim = nim;
    this->fakultas = fakultas;
    this->course = course;
}

// Setter
void Mahasiswa::set_nim(string nim)
{
    this->nim = nim;
}
void Mahasiswa::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}
void Mahasiswa::set_course(vector<Course> course)
{
    this->course = course;
}

// Getter
string Mahasiswa::get_nim()
{
    return this->nim;
}
string Mahasiswa::get_fakultas()
{
    return this->fakultas;
}
vector<Course> Mahasiswa::get_course()
{
    return this->course;
}

Mahasiswa::~Mahasiswa()
{
    
}