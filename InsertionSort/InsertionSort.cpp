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

	for (int i = 1; i < n; i++) //1. looping dengan i dimulai dari 1 hingga n - 1
	{
		temp = arr[i]; //2. simpan nilai arr[i] ke variabel sementara temp
		j = i - 1; //3. setting nilai j sama dengan i-1
		while (j >= 0 && arr[j] > temp) //4. looping while dimana nilai j lebih besar sama dengan 0 dan array[j] lebih besar dari temp
		{
			arr[j - 1] = arr[j];// simpan arr[j] kedalam variable arr[j+1]
			j--; // j decrement
		}
		arr[j + 1] = temp;
		arr[j + 1] = temp; // 5. simpan nilai temp ke dalam arr[j+1]
		cout << endl;
		cout << "\npass " << i << ":"; // output ke layar
		for (int k = 0; k < n; k++)
		{								//looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";		// display output
		}
	}
}

void display() 
{
	cout << endl;
	cout << "total element movement = " << n-1 << endl;
	cout << "\n ===============================" << endl;
	cout << "Element Array yang telah disusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++)
	{					// Looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl; // output ke layar
	}
	cout << endl; // output baris kosong
}
int main()
{
   
}

