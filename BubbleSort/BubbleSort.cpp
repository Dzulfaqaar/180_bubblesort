#include   <iostream>
using namespace std;

int a[20];		// Deklarsi array a dengan ukuran 20
int n;					// Deklrasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {			// Procedure untuk input
	while (true) {		//Looping
		cout << "Masukan banyaknya elemen pada array : ";	// Output ke layar
		cin >> n;		//input dari pengguna
		if (n <= 20)	//jika n kurang dari atau sama dengan 20
			break;		//keluar dari loop
		else {			// jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	// Output ke layar
		}
	}
	cout << endl;									//Output baris kosong
	cout << "===================" << endl;			//Output ke layar
	cout << "Masukan Elemen Array" << endl;			//Output ke layar
	cout << "===================" << endl;			//Output ke layar

	for (int i = 0; i < n; i++) {					//Looping dengan i dimulai dari 0 hingga n
		cout << "Data ke-" << (i + 1) << ": ";		//Output ke layar
		cin >> a[i];								//input dari pengguna
	}
}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}
void bubblesortArray() {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main() {
	input();
	bubblesortArray();
	display();
	return 0;
}

