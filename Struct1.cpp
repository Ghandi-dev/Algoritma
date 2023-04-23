#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

struct nilai
{
    string nama, NIM;
    char nilai_Huruf;
    float nilai_Kuis, nilai_Tgs, nilai_UTS, nilai_UAS, nilai_Akhir;
};

float hitungNilai(float nilai_Kuis, float nilai_Tgs, float nilai_UTS, float nilai_UAS)
{
    return (nilai_Tgs * 0.1) + (nilai_Kuis * 0.2) + (nilai_UTS * 0.3) + (nilai_UAS * 0.4);
}

char grade(float nilai_Akhir)
{
    if (nilai_Akhir > 85)
    {
        return 'A';
    }
    else if (nilai_Akhir > 70)
    {
        return 'B';
    }
    else if (nilai_Akhir > 55)
    {
        return 'C';
    }
    else if (nilai_Akhir > 40)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

void tampilkan(struct nilai mhs)
{
    cout << "+---------------------------------------------------------------------------+\n";
    cout << "|     Nama     |   NIM   | Kuis | Tugas | UTS  | UAS  | Nilai Akhir | Grade |\n";
    cout << "+--------------+---------+------+--------------+------+-------------+-------+\n";
    printf("| %-11s  |%-9s|%2.2f |%2.2f  |%2.2f |%2.2f |   %2.2f     |   %c   |\n",
           mhs.nama.c_str(),
           mhs.NIM.c_str(),
           mhs.nilai_Kuis,
           mhs.nilai_Tgs,
           mhs.nilai_UTS,
           mhs.nilai_UAS,
           mhs.nilai_Akhir,
           mhs.nilai_Huruf);
    cout << "+---------------------------------------------------------------------------+";
}

int main()
{
    struct nilai mhs;

    cout << "Masukan nama       :";
    getline(cin, mhs.nama);
    cout << "Masukan NIM        :";
    cin >> mhs.NIM;
    cout << "Masukan nilai kuis :";
    cin >> mhs.nilai_Kuis;
    cout << "Masukan nilai tugas:";
    cin >> mhs.nilai_Tgs;
    cout << "Masukan nilai UTS  :";
    cin >> mhs.nilai_UTS;
    cout << "Masukan nilai UAS  :";
    cin >> mhs.nilai_UAS;

    mhs.nilai_Akhir = hitungNilai(mhs.nilai_Kuis, mhs.nilai_Tgs, mhs.nilai_UTS, mhs.nilai_UAS);
    mhs.nilai_Huruf = grade(mhs.nilai_Akhir);

    tampilkan(mhs);
    return 0;
}

