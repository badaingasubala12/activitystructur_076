#include <iostream>
using namespace std;

struct DetailAlamat
{
	char desa[20];
	char kota[20];
};

struct mahasiswa
{
	char nim[12];
	char nama[20];
	DetailAlamat alamat;
	int umur;
};

int main() {
	mahasiswa mhs;

	cout << "masukan NIM : ";
	cin.getline(mhs.nim, 12);
	cout << "masukan Umur : ";
	cin >> mhs.umur;
	cin.ignore(1, '\n');
	cout << "masukan Nama : ";
	cin.getline(mhs.nama, 20);
	cout << "Alamat : ";
	cout << "\n\tMasukan Desa : ";
	cin.getline(mhs.alamat.desa, 20);
	cout << "\tMasukan Kota : ";
	cin.getline(mhs.alamat.kota, 20);

	cout << "\n\nNIM : " << mhs.nim;
	cout << "\nUmur : " << mhs.umur;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : ";
	cout << "\n\tDesa : " << mhs.alamat.desa;
	cout << "\n\tKota : " << mhs.alamat.kota;
}