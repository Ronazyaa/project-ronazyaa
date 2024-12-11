#include <iostream>

double hitungLuasPersegi(double sisi)
{
    return sisi * sisi;
}

double hitungLuasPersegiPanjang(double panjang, double lebar)
{
    return panjang * lebar;
}

double hitungLuasSegitigaSikuSiku(double alas, double tinggi)
{
    return 0.5 * alas * tinggi;
}

double hitungLuasLingkaran(double jarijari)
{
    const float pi = 3.14;

    return pi * jarijari * jarijari;
}

int main()
{

    int pick;
    bool lanjut = true;

    while (true)
    {
        std::cout << "===== KALKULATOR PROGRAM HITUNG =====" << std::endl;
        std::cout << "1. Hitung Luas Persegi" << std::endl;
        std::cout << "2. Hitung Luas Persegi Panjang" << std::endl;
        std::cout << "3. Hitung Luas Segitiga Siku Siku" << std::endl;
        std::cout << "4. Hitung Luas Lingkaran" << std::endl;
        std::cout << "Pilih Kalkulator : ";
        std::cin >> pick;

        switch (pick)
        {
        case 1:
            std::cout << " " << std::endl;
            std::cout << "===== KALKULATOR HITUNG LUAS PERSEGI ====" << std::endl;

            double sisi;

            std::cout << "Masukan Nilai Sisi : ";
            std::cin >> sisi;

            std::cout << "===== HASIL HITUNG LUAS PERSEGI =====" << std::endl;
            std::cout << "Hasil : " << hitungLuasPersegi(sisi) << std::endl;
            std::cout << " " << std::endl;
            break;
        case 2:
            std::cout << " " << std::endl;
            std::cout << "===== KALKULATOR HITUNG LUAS PERSEGI PANJANG ====" << std::endl;

            double panjang;
            double lebar;

            std::cout << "Masukan Nilai Panjang : ";
            std::cin >> panjang;

            std::cout << "Masukan Nilai Lebar : ";
            std::cin >> lebar;

            std::cout << "===== HASIL HITUNG LUAS PERSEGI PANJANG =====" << std::endl;
            std::cout << panjang << " x " << lebar << " ";
            std::cout << "Hasil : " << hitungLuasPersegiPanjang(panjang, lebar) << std::endl;
            std::cout << " " << std::endl;
            break;
        case 3:
            std::cout << " " << std::endl;
            std::cout << "===== KALKULATOR HITUNG LUAS SEGITIGA SIKU SIKU ====" << std::endl;

            double alas;
            double tinggi;

            std::cout << "Masukan Nilai Alas : ";
            std::cin >> alas;

            std::cout << "Masukan Nilai Tinggi : ";
            std::cin >> tinggi;

            std::cout << "===== HASIL HITUNG LUAS SEGITIGA SIKU SIKU=====" << std::endl;
            std::cout << alas << " x " << tinggi << " ";
            std::cout << "Hasil : " << hitungLuasPersegiPanjang(alas, tinggi) << std::endl;
            std::cout << " " << std::endl;
            break;
        case 4:
            std::cout << " " << std::endl;
            std::cout << "===== KALKULATOR HITUNG LUAS LINGKARAN ====" << std::endl;

            double jarijari;

            std::cout << "Masukan Nilai Jari Jari : ";
            std::cin >> jarijari;

            std::cout << "===== HASIL HITUNG LUAS LINGKARAN=====" << std::endl;
            std::cout << jarijari << " x " << jarijari << " ";
            std::cout << "Hasil : " << hitungLuasLingkaran(jarijari) << std::endl;
            std::cout << " " << std::endl;
            break;
        default:
            std::cout << "Pilihan Tidak Valid" << std::endl;
            break;
        }
    }
}