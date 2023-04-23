#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

struct Penjualan
{
    struct Barang
    {
        string nama;
        int harga;
    };
    struct Pramuniaga
    {
        string nama;
    };
    int qty[5][10];
    Pramuniaga pramuniaga[10];
    Barang barang[5];
};

void hitungPenjualanPramuniaga(Penjualan penjualan)
{
    int bar = sizeof penjualan.qty / sizeof penjualan.qty[0];
    int kol = sizeof penjualan.qty[0] / sizeof(int);
    int sum[sizeof penjualan.pramuniaga / sizeof(int)];

    for (int i = 0; i < kol; i++)
    {
        for (int j = 0; j < bar; j++)
        {
            sum[i] += penjualan.barang[j].harga * penjualan.qty[j][i];
        }
    }
    cout << "\nDAFTAR HASIL PENJUALAN PRAMUNIAGA\n";
    cout << "+=========================================+\n";
    cout << "|NO|  PRAMUNIAGA  | TOTAL HASIL PENJUALAN |\n";
    cout << "+==+==============+=======================+\n";
    for (int i = 0; i < kol; i++)
    {
        printf("|%-2d| %-12s | %-22d|\n", i + 1, penjualan.pramuniaga[i].nama.c_str(), sum[i]);
        cout << "+-----------------------------------------+\n";
    }
}

void hitungPenjualanBarang(Penjualan penjualan)
{
    int bar = sizeof penjualan.qty / sizeof penjualan.qty[0];
    int kol = sizeof penjualan.qty[0] / sizeof(int);
    int sum[sizeof penjualan.pramuniaga / sizeof(int)];

    for (int i = 0; i < bar; i++)
    {
        for (int j = 0; j < kol; j++)
        {
            sum[i] += penjualan.barang[i].harga * penjualan.qty[i][j];
        }
    }
    cout << "\nDAFTAR HASIL PENJUALAN BARANG\n";
    cout << "+=========================================+\n";
    cout << "|NO|    BARANG    | TOTAL HASIL PENJUALAN |\n";
    cout << "+==+==============+=======================+\n";
    for (int i = 0; i < bar; i++)
    {
        printf("|%-2d| %-12s | %-22d|\n", i + 1, penjualan.barang[i].nama.c_str(), sum[i]);
        cout << "+-----------------------------------------+\n";
    }
}

int main()
{
    Penjualan penjualan = {
        {{8, 2, 5, 8, 2, 1, 0, 8, 0, 3},
         {5, 1, 2, 2, 3, 9, 8, 5, 9, 5},
         {7, 2, 4, 0, 1, 2, 2, 9, 7, 6},
         {9, 7, 8, 0, 6, 9, 8, 0, 9, 7},
         {3, 2, 0, 3, 6, 8, 2, 4, 5, 6}},
        {"Sonnya", "Ghandi", "Andhika", "Syarif", "Nataatmaja", "Mulyana", "Muhammad", "Gofarul", "Aziz", "Ustad"},
        {{"pensil", 500}, {"Penghapus", 350}, {"Penggaris", 550}, {"Buku", 750}, {"Karet", 450}}};

    hitungPenjualanPramuniaga(penjualan);
    hitungPenjualanBarang(penjualan);
    return 0;
}