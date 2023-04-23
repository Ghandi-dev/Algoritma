#include <iostream>
#include <string>
#include <cstdio>
    using namespace std;

struct biodata
{
    struct tinggal
    {
        string jalan, kodePOS, kota;
    };
    struct tanggal
    {
        int tanggal, bulan, tahun;
    };
    string NIP, nama, jabatan, agama, unitKerja;
    tanggal tglLahir, tglMasukKerja;
    tinggal alamat;
};

void tampilkan(struct biodata pegawai[])
{
    int len = sizeof(pegawai) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        printf("Pegawai : %d \n", i + 1);
        printf("+---------------------------------------------------+\n");
        printf("| Nama                |%-29s|\n", pegawai[i].nama.c_str());
        printf("+---------------------+-----------------------------+\n");
        printf("| NIP                 |%-29s|\n", pegawai[i].NIP.c_str());
        printf("+---------------------+-----------------------------+\n");
        printf("| Agama               |%-29s|\n", pegawai[i].agama.c_str());
        printf("+---------------------+-----------------------------+\n");
        printf("| Tanggal Lahir       |%2d/%2d/%-4d %-18s|\n", pegawai[i].tglLahir.tanggal, pegawai[i].tglLahir.bulan, pegawai[i].tglLahir.tahun, "");
        printf("+---------------------+-----------------------------+\n");
        printf("| Jabatan             |%-29s|\n", pegawai[i].jabatan.c_str());
        printf("+---------------------------------------------------+\n");
        printf("| Unit Kerja          |%-29s|\n", pegawai[i].unitKerja.c_str());
        printf("+---------------------+-----------------------------+\n");
        printf("| Tanggal Masuk Kerja |%2d/%2d/%-4d %-18s|\n", pegawai[i].tglMasukKerja.tanggal, pegawai[i].tglMasukKerja.bulan, pegawai[i].tglMasukKerja.tahun, "");
        printf("+---------------------+-----------------------------+\n");
        printf("| Alamat              |%-29s|\n", pegawai[i].alamat.jalan.c_str());
        printf("|                     |%-29s|\n", pegawai[i].alamat.kodePOS.c_str());
        printf("|                     |%-29s|\n", pegawai[i].alamat.kota.c_str());
        printf("+---------------------------------------------------+\n\n");
    }
}

int main()
{
    biodata pegawai[2] = {
        {"21141", "Sonnya", "foreman", "Islam", "Assembling", {2, 2, 1999}, {1, 5, 2018}, {"jl.Pasawahan", "41172", "Purwakarta"}},
        {"21142", "Ghandi", "Checkman", "Islam", "Assembling", {3, 3, 2003}, {4, 6, 2020}, {"jl.Cikopak", "41111", "Purwakarta"}}};

    tampilkan(pegawai);
    return 0;
}