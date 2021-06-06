#include <iostream>
#include <conio.h>

using namespace std;

struct mahasiswa
{
	int nim[10], jml;
	string nama[30];
	char alamat[50];
	float ipk[5];
};

int main()
{
	mahasiswa mhs;

	cout << "input berapa mahasiswa ? : ";
	cin >> mhs.jml;
	cout << "\n";
	for (int i = 0; i < mhs.jml; i++)
	{
		cout << "NIM	: "; cin >> mhs.nim[i];
		cout << "Nama	: "; cin >> mhs.nama[i];
		cout << "IPK	: "; cin >> mhs.ipk[i];
		cout << endl;
	}

	cout << "Data yang anda masukkan :" << endl;

	for (int i = 0; i < mhs.jml; i++)
	{
		cout << "NIM	: " << mhs.nim[i] << endl;
		cout << "Nama	: " << mhs.nama[i] << endl;
		cout << "IPK	: " << mhs.ipk[i] << endl;
		cout << endl;
	}

	return 0;
	system("pause");
}