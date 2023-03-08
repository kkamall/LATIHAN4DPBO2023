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
![image](https://user-images.githubusercontent.com/101335350/223707686-5c3152f2-9bb0-4b84-ad0b-01bd68b9dfdf.png)
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
- Course:
  - Atribut Ambigu: -
  - Method:
    - get_...() => Mendapatkan value di suatu atribut.
    - set_...() => Memberi value kepada suatu atribut.
  - Relasi: -
- ProgramStudi:
  - Atribut Ambigu: -
  - Method:
    - get_...() => Mendapatkan value di suatu atribut.
    - set_...() => Memberi value kepada suatu atribut.
  - Relasi:
    - ProgramStudi has a Course, alasan:
      1. Program studi memiliki course untuk dikontrak mahasiswa.
    - ProgramStudi has a SivitasAkademik, alasan:
      1. Program studi memiliki mahasiswa dan dosen melalui sivitas akademik.
- SivitasAkademik:
  - Atribut Ambigu:
    - email_edu (String) => Hanya berupa akhira dari e-mail EDU suatu Universitas, e.g "@upi.edu".
  - Method:
    - get_...() => Mendapatkan value di suatu atribut.
    - set_...() => Memberi value kepada suatu atribut.
  - Relasi:
    - SivitasAkademik has a Mahasiswa, alasan:
      1. Secara pengertian sivitas akademik adalah seluruh komunitas akademik suatu institusi pendidikan, salah satu komponennya adalah mahasiswa.
    - SivitasAkademik has a Dosen, alasan:
      1. Secara pengertian sivitas akademik adalah seluruh komunitas akademik suatu institusi pendidikan, salah satu komponennya adalah dosen.
      
## Penjelasan Alur Main (Python)
1. *Import library* dan file *class* yang digunakan.
2. Inisialisasi variabel sesuai kebutuhan.
3. Memasukkan data-data ke atribut class secara hardcode.
4. Mengeluarkan *output* dengan struktur sebagai berikut:
  - List Program Studi
    - List Matakuliah dalam Program Studi
    - List Sivitas Akademik
      - List Mahasiswa
        - List Mata Kuliah yang Dikontrak Oleh Mahasiswa
      - List Dosen
        - List Mata Kuliah yang Diampu oleh Dosen
5. END.

## Dokumentasi
![Screenshot](https://user-images.githubusercontent.com/101335350/223709926-663a039f-5570-4db1-866e-d505c17221cd.png)
