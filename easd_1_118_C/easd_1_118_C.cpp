//1.		algoritma diperlukan untuk menyelesaikan suatu masalah karena, dengan algoritma maka permasalahan yang ada dapat terselesaikan
//			dengan solusi tertentu

//2.		


//3.		faktor-faktor yang dapat mempengaruhi efisiensi dari suatu program algoritma antara lain :
//			- memilih algoritma yang sesuai kebutuhan
//			- memilih penyimpanan yang cukup, agar dapat menghemat ruang penyimpanan
//			- memilih program yang proses nya singkat

//4.		Quicksort karena proses 

//5.

#include <iostream>
using namespace std;

int mzz[46];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true) {
		cout << "Masukkan Jumlah Data : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "nMaksimum Panjang Data adalah 46" << endl;

	}
	cout << "\n============" << endl;
	cout << "\Masukkan Data" << endl;
	cout << "\=============" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> mzz[i];
	}
}

void swap(int x, int y)
{
	int temp;
	
	temp = mzz[x];
	mzz[x] = mzz[y];
	mzz[y] = temp;

}

void s_sort(int low, int high)
{
	int pivot, i, j;
	if (low > high)
		return;
	pivot = mzz[low];

	i = low + 1;
	j = high;

	while (i <= j)
	{
		while ((mzz[i] <= pivot) && (j <= high))
		{
			i++;
			cmp_count++;
		}
		cmp_count++;
		while ((mzz[i] > pivot) && (j >= low))
		{
			j--;
			cmp_count++;
		}
		cmp_count++;
		if (i < j)
		{
			swap(i, j);
			mov_count++;
		}
	}
	if (low < j)
	{
		swap(low, j);
		mov_count;
	}
	s_sort(low, j - 1);
	s_sort(j + 1, high);
}

void display() {
	cout << "\n==========" << endl;
	cout << "\nEnter Data" << endl;
	cout << "\n==========" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << mzz[i] << " ";
	}
	cout << "\nNumber of comprasions : " << cmp_count << endl;
	cout << "Number of data movements" << mov_count << endl;
}

int main() {
	input();
	s_sort(0, n - 1);
	display();
	system("pause");


}