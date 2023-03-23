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

int main()
{
   
}

