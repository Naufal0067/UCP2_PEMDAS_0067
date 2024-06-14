#include <iostream>
#include <vector>
using namespace std;

#include "Perusahaan.h"
#include "Karyawan.h"

int main() {

    perusahaan* varPerusahaan = new perusahaan("PT. Maju Mundur");
    karyawan* varKaryawan1 = new karyawan("Budi");
    karyawan* varKaryawan2 = new karyawan("Andi");


    varPerusahaan->tambahKaryawan(varKaryawan1);
    varPerusahaan->tambahKaryawan(varKaryawan2);


    varPerusahaan->cetakKaryawan();

    delete varPerusahaan;
    delete varKaryawan1;
    delete varKaryawan2;
}


