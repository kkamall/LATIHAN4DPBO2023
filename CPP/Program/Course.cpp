// Import file:
#include "header.hh"

// Empty konstruktor.
Course::Course()
{
    this->nama_matakuliah = "";
}

// Konstruktor with params.
Course::Course(string nama_matakuliah)
{
    this->nama_matakuliah = nama_matakuliah;
}

// Setter
void Course::set_nama_matakuliah(string nama_matakuliah)
{
    this->nama_matakuliah = nama_matakuliah;
}

// Getter
string Course::get_nama_matakuliah()
{
    return this->nama_matakuliah;
}

Course::~Course()
{
    
}