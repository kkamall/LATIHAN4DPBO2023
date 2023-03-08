# [ LATIHAN2DPBO2023 ]

## Identitas:
- NIM   : 2102313
- Nama  : Muhammad Kamal Robbani
- Kelas : C1'21

## Janji:
Saya [Muhammad Kamal Robbani] dengan nim 2102313 mengerjakan Latihan 4 DPBO dalam mata kuliah 
[Desain Pemrograman Berorientasi Objek] untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Requirement Soal:
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut:
  - Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi
  - Human: NIK, nama, jenis_kelamin
  - SivitasAkademik: asal_universitas, email_edu
  - Dosen: NIP, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian
  - Course: nama_matakuliah,
  - Program Studi: nama_prodi, kode, course
  
## Desain Program:
![Untitled Diagram drawio](https://user-images.githubusercontent.com/101335350/223612741-c4b42021-6f98-448d-924f-f77ca362da36.png)
- Human:
  - Atribut Ambigu: -
  - Method:
    - get_...() => Mendapatkan value di suatu atribut.
    - set_...() => Memberi value kepada suatu atribut.
  - Relasi: -
- Mahasiswa:
  - Atribut Ambigu: -
  - Method:
    - get_...() => Mendapatkan value di suatu atribut.
    - set_...() => Memberi value kepada suatu atribut.
  - Relasi:
    - Mahasiswa is a Human, alasan:
      1. Objeknya sama, yaitu manusia.
      2. Atribut dalam kelas Human dapat diakomodir oleh kelas Mahasiswa.
    - Mahasiswa has a Course, alasan:
      1. Mahasiswa mengontrak mata kuliah.
- Dosen:
  - Atribut Ambigu:
    - pend_terakhir (String) => Pendidikan terakhir dosen.
  - Method:
    - get_...() => Mendapatkan value di suatu atribut.
    - set_...() => Memberi value kepada suatu atribut.
  - Relasi:
    - Dosen is a Human, alasan:
      1. Objeknya sama, yaitu manusia.
      2. Atribut dalam kelas Human dapat diakomodir oleh kelas Dosen.
    - Dosen has a Course, alasan:
      1. Dosen mengampu mata kuliah.
