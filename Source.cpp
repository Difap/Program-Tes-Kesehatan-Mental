#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void bonus()
{
	cout << "==========================================================================================" << endl;
	cout << "Hidup bukan tentang menunggu badai berlalu, tetapi tentang belajar menari di tengah hujan." << endl;
	cout << "    Selalu ingat dibalik mengerikannya hujan badai, ada pelangi indah yang menunggu." << endl;
	cout << "          Everything is gonna be fine at the end, just believe in yourself! " << endl;
	cout << "==========================================================================================" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}

void tentang()
{
	cout << "=========================================================================" << endl;
	cout << "                                 Tentang "<< endl;
	cout << "=========================================================================" << endl;
	cout << "Program ini dibuat untuk memenuhi tugas UAS Mata kuliah Dasar Pemrograman" << endl;
	cout << "Dibuat oleh Difa Rofi Alqudsi" << endl;
	cout << "S1 Teknik Informatika , Universitas Muhammadiyah Sukabumi " << endl;
	cout << endl;
	cout << endl;
}

void test(string nama)
{
	string soal[26];
	int jawab[26], hasil[26];

	soal[0] = "Apakah kalian merasa takut secara tiba-tiba yang menyebabkan reaksi fisik meskipun tidak ada penyebab yang jelas?\n";
	soal[1] = "Apakah kalian sering merasa putus asa dan sedih?\n";
	soal[2] = "Apakah kalian sering merasa ingin menyerah?\n";
	soal[3] = "Apakah kalian kehilangan minat hal-hal yang dulu penting bagimu?\n";
	soal[4] = "Apakah kalian mudah marah dan lesu?\n";
	soal[5] = "Apakah kalian sering berfikir bahwa semuanya hanya akan menjadi lebih buruk?\n";
	soal[6] = "Apakah kalian sering membutuhkan waktu lama untuk melakukan sesuatu?\n";
	soal[7] = "Apakah kalian merasa seperti tidak bisa mengatasi situasi yang terjadi?\n";
	soal[8] = "Apakah kalian sering merasa gugup atau tidak tenang?\n";
	soal[9] = "Apakah kalian sering berfikir bahwa tidak ada yang berjalan sesuai keinginanmu?\n";
	soal[10] = "Apakah kalian merasa tidak ada kemajuan di dalam hidup kalian?\n";
	soal[11] = "Apakah kalian melakukan kegiatan yang sama berulang ulang untuk menenangkan diri?\n";
	soal[12] = "Apakah kalian sering merasa tidak aman (Insecure) akhir-akhir ini?\n";
	soal[13] = "Apakah kalian merasa tidak berdaya akhir-akhir ini?\n";
	soal[14] = "Apakah kalian sulit berkonsentrasi dan tidak bisa bersantai?\n";
	soal[15] = "Apakah kalian sering merasa kehilangan nafsu makan? atau malah terlalu banyak makan?\n";
	soal[16] = "Apakah kalian merasa tidak bisa mengontrol rasa cemas?\n";
	soal[17] = "Apakah kalian merasa tidak ada jalan keluar?\n";
	soal[18] = "Apa kalian sering memandang diri sendiri negatif?\n";
	soal[19] = "Apa kalian sulit berkonsentrasi akhir-akhir ini?\n";
	soal[20] = "Apakah kalian sering merasakan napas pendek, dada sesak, jantung berdebar, berkeringat, gemeteran, mual, dan pusing?\n";
	soal[21] = "Apakah kalian sering menghindari interaksi sosial?\n";
	soal[22] = "Apakah kalian pernah berfikir untuk mengakhiri hidup atau menyakiti diri sendiri?\n";
	soal[23] = "Pernahkah kalian merasa tegang akhir-akhir ini?\n";
	soal[24] = "Apakah kalian merasa tidak ada cukup waktu untuk melakukan pekerjaan kalian?\n";
	soal[25] = "Apakah kalian mengalami gangguan tidur? misalnya kurang tidur atau telalu banyak tidur?\n";


	int total = 0;
	for (int i = 0; i < 26; i++)
	{
		cout << soal[i];
		cout << "<1> Ya" << endl;
		cout << "<2> Tidak\n" << endl;
		cout << "Jawab: ";
		cin >> jawab[i];
		cout << endl;
		system("cls");
	}
	for (int j = 0; j < 26; j++)
	{
		if (jawab[j] == 1)
		{
			hasil[j] = 50;
		}
		else
		{
			hasil[j] = 0;
		}
		total = total + hasil[j];
	}
	system("cls");
	if (total >= 950)
	{
		cout << "Mungkin kamu menderita depresi, stres, dan cemas" << endl;
		cout << "Pasti sulit yaa?" << endl;
		cout << "Semangat yaa " << nama << " jangan patah semangat, kamu orang hebat kok.bighug <3" << endl;
		cout << "Jangan lupa pergi ke psikolog untuk konsultasi masalahmu" << endl;
	}
	else if (total >= 650)
	{
		cout << "Mungkin kamu menderita depresi" << endl;
		cout << "Pasti sulit yaa?" << endl;
		cout << "Semangat yaa " << nama << " jangan patah semangat, kamu orang hebat kok.bighug <3" << endl;
		cout << "Jangan lupa pergi ke psikolog untuk konsultasi masalahmu" << endl;
	}
	else if (total >= 400)
	{
		cout << "Hai " << nama << " kamu mengalami stress ringan" << endl;
		cout << "Pergi jalan-jalan bersama teman atau keluarga mungkin bisa meredakan stressmu" << endl;
		cout << "Tetap semangat menjalani hari-harinya yaa..." << endl;
	}
	else if (total >= 0)
	{
		cout << nama << " kondisi kesehatan mental kamu cenderung stabil!" << endl;
		cout << "Pertahankan yaaa" << endl;
	}
	else;
	{
		cout << endl;
	}


	
}

int main()
{
	string nama;
	int menu, akhir;

	cout << "Masukkan nama : ";
	getline(cin, nama);
	system("cls");
	cout << "Hai " << nama << " Selamat datang di program" << endl;

	mulai:
	cout << "============================" << endl;
	cout << "Tes Kondisi Kesehatan Mental" << endl;
	cout << "============================" << endl;
	cout << "=      <1> Mulai Test      =" << endl;
	cout << "=      <2> Tentang	   =" << endl;
	cout << "=      <3> Bonus           =" << endl;
	cout << "=      <4> Keluar	   =" << endl;
	cout << "============================" << endl;
	cout << "Masukkan angka : ";
	cin >> menu;
	system("cls");
	switch (menu)
	{
	case 1:
		test(nama);
		cout << "Apakah kamu ingin kembali ke menu awal?" << endl;
		cout << "<1> Ya" << endl;
		cout << "<2> Tidak" << endl;
		cin >> akhir;
		system("cls");
		switch (akhir)
		{
		case 1:
			goto mulai;
		case 2:
			goto selesai;
		default:
			goto mulai;
		}
		break;
	case 2:
		tentang();
		cout << "Apakah kamu ingin kembali ke menu awal?" << endl;
		cout << "<1> Ya" << endl;
		cout << "<2> Tidak" << endl;
		cin >> akhir;
		system("cls");
		switch (akhir)
		{
		case 1:
			goto mulai;
		case 2:
			goto selesai;
		default:
			goto mulai;
		}
		break;
	case 3:
		bonus();
		cout << "Apakah kamu ingin kembali ke menu awal?" << endl;
		cout << "<1> Ya" << endl;
		cout << "<2> Tidak" << endl;
		cin >> akhir;
		system("cls");
		switch (akhir)
		{
		case 1:
			goto mulai;
		case 2:
			goto selesai;
		default:
			goto mulai;
		}
		break;
	case 4:
		goto selesai;
		break;
	default:
		goto mulai;
	selesai:
		cout << "Hai " << nama << ", Terimakasih telah menggunakan program ini" << endl;
		cout << "Tetap semangat yaaa <3" << endl;


		return 0;
	}
}
