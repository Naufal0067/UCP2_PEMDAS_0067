#ifndef KARYAWAN_H
#define KARYAWAN_H

class karyawan {
public:
    string nama;
    karyawan(string pNama) :nama(pNama) {
        cout << "Karyawan \"" << nama << "\" ada\n";        
    }
    ~karyawan() {
        cout << "Karyawan \"" << nama << "\" tidak ada\n";
    }
};
#endif