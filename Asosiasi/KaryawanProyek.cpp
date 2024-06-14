#include <iostream>
#include <vector>
using namespace std;

class karyawan;
class proyek {
public:
    string nama;
    vector<karyawan*> daftar_karyawan;
    proyek(string pNamaKaryawan) :nama(pNamaKaryawan) {
        cout << "Proyek \"" << nama << "\n";
    }
    ~proyek() {
        cout << "Proyek \"" << nama << "\n"; 
    }
     void tambahKaryawan(karyawan*);
     void cetakKaryawan();        
};

class karyawan {
public: 
    string nama;
    vector<proyek*> daftar_proyek;

    karyawan(string pNamaProyek) :nama(pNamaProyek) {
        cout << "Karyawan \"" << nama << "\n";
    }
    ~karyawan() {
        cout << "Karyawan \"" << nama << "\n";
    }

    void tambahProyek(proyek*);
    void cetakProyek();
};

void proyek::tambahKaryawan(karyawan* pKaryawan) {
    daftar_karyawan.push_back(pKaryawan);
}
void proyek::cetakKaryawan() {
    cout << "Daftar Karyawan dari proyek \"" << this->nama << "\":\n";
    for (auto& a: daftar_karyawan) {
        cout << a->nama << "\n"; 
    }
     cout << endl;
}
void karyawan::tambahProyek(proyek* pProyek) {
    daftar_proyek.push_back(pProyek);
    pProyek->tambahKaryawan(this);
}
void karyawan::cetakProyek() {
    cout << "Daftar Proyek dari karyawan \"" << this->nama << "\":\n";
    for (auto& a : daftar_proyek) {
        cout << a->nama << "\n";
    }
     cout << "Daftar Proyek dari karyawan \"" << this->nama << "\":\n";
    for (auto& a : daftar_proyek) {
        cout << a->nama << "\n";
    }
     cout << endl;
}

int main() {
    karyawan* varKaryawan1 = new karyawan("Budi");
    karyawan* varKaryawan2 = new karyawan("Andi");
    karyawan* varKaryawan3 = new karyawan("Andi" , "Budi");
    proyek* varProyek1 = new proyek("Sistem Informasi");
    proyek* varProyek2 = new proyek("Sistem Keamanan");

    varKaryawan1->tambahProyek(varProyek1);
    varKaryawan1->tambahProyek(varProyek2);
    varKaryawan2->tambahProyek(varProyek1);
    varKaryawan3->tambahProyek(varProyek1);

    varKaryawan1->cetakProyek();
    varKaryawan2->cetakProyek();
    varKaryawan3->cetakProyek();

    delete varProyek1;
    delete varProyek2;
    delete varKaryawan1;
    delete varKaryawan2;

    return 0;
}
