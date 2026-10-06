#include <iostream>
#include <string>
using namespace std;

// Langkah 1: Definisi Struct
struct Book {
    string Title;
    string Author;
    string Publisher;
    int Year;
    float Price;
};

int main() {
    int jumlah = 3; // Jumlah data buku yang diuji
    
    // Langkah 2: Inisialisasi Array of Struct
    Book dataBuku[3]; 

    // Langkah 3: Input Data Buku
    for (int i = 0; i < jumlah; i++) {
        cout << "=== Input Data Buku ke-" << i + 1 << " ===" << endl;
        cout << "Judul Buku    : ";
        getline(cin >> ws, dataBuku[i].Title);
        cout << "Pengarang     : ";
        getline(cin, dataBuku[i].Author);
        cout << "Penerbit      : ";
        getline(cin, dataBuku[i].Publisher);
        cout << "Tahun Terbit  : ";
        cin >> dataBuku[i].Year;
        cout << "Harga Buku    : ";
        cin >> dataBuku[i].Price;
        cout << endl;
    }

    // Langkah 4: Menampilkan Data Buku
    cout << "\n===================================" << endl;
    cout << "         DAFTAR DATA BUKU          " << endl;
    cout << "===================================" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "Buku ke-" << i + 1 << ":" << endl;
        cout << "  Judul       : " << dataBuku[i].Title << endl;
        cout << "  Pengarang   : " << dataBuku[i].Author << endl;
        cout << "  Penerbit    : " << dataBuku[i].Publisher << endl;
        cout << "  Tahun Terbit: " << dataBuku[i].Year << endl;
        cout << "  Harga       : Rp " << dataBuku[i].Price << endl;
        cout << "-----------------------------------" << endl;
    }

    return 0;
}
