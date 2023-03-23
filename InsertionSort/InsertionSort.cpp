#include <iostream>
using namespace std;

int arr[20]; //deklarasi array
int n; // deklarasi variable n

void input()
{  //prosedure input
	while (true)
	{
		cout << "masukan jumlah data pada array : "; // input jumlah element
		cin >> n; // memanggil inputan n

		if (n <= 20)
		{ //kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 element. \n"; //menampilkan pesan berlebih
		}
	}
	cout << endl; //membuat jarak
	cout << "=====================" << endl; //tampilan
	cout << "Masukan element array" << endl; // tampilan
	cout << "=====================" << endl; //tampilan

	for (int i = 0; i < n; i++) // menggunakan perulangan untuk menyimpan 
	{
		cout << "Data ke-" << (i + 1) << ": "; //memasukan atau menginput nilai data n
		cin >> arr[i];							//memasukan nilai data n kedalam array
	}
}
//prosedure insertionsort
void insertionsort() 
{
	int temp; //variable data temporer / penyimpanan sementara
	int j; // variable J sebagai penanda
}
int main()
{
   
}

