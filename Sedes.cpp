#include <iostream>
#include <conio.h>
#include<vector>
#include <string>
#include <bitset>

using namespace std;

int dlugosc(unsigned long long int ciag,int base)
{
	int check = 0;
	do {
		++check;
		ciag /= base;
	} while (ciag);

	return check;
}



void Permutacja(string &ciag)
{
	//unsigned long long int pomocnicza=01234567;
	//vector <int> viktor;
	int tab[8];

	for (int i = 7; i >= 0; i--)
	{
		switch (i)
		{
		case 7:
			//viktor.push_back(ciag % 10);
			tab[5] = ciag[7] - '0';
			//ciag /= 10;
			break;
		case 6:
			tab[7] = ciag[6] - '0';
			break;
		case 5:
			tab[1] = ciag[5] - '0';
			break;
		case 4:
			tab[6] = ciag[4] - '0';
			break;
		case 3:
			tab[4] = ciag[3] - '0';
			break;
		case 2:
			tab[2] = ciag[2] - '0';
			break;
		case 1:
			tab[0] = ciag[1] - '0';
			break;
		case 0:
			tab[3] = ciag[0] - '0';
			break;
		}
	}

	cout << endl;
	ciag.clear();

	for (int i = 0; i < 8; i++)
	{
		cout << tab[i];
		ciag += tab[i];
		//ciag *= 10;
	} 
	//ciag /= 10;
	//cout <<endl<< ciag;

}

void PermutacjaKlucza(string &klucz)
{
	//unsigned long long int pomocnicza=01234567;
	//vector <int> viktor;
	int tab[10];

	for (int i = 9; i >= 0; i--)
	{
		switch (i)
		{
		case 9:
			//viktor.push_back(ciag % 10);
			tab[5] = klucz[9] - '0';
			break;
		case 8:
			tab[7] = klucz[8] - '0';
			break;
		case 7:
			tab[8] = klucz[7] - '0';
			break;
		case 6:
			tab[3] = klucz[6] - '0';
			break;
		case 5:
			tab[9] = klucz[5] - '0';
			break;
		case 4:
			tab[1] = klucz[4] - '0';
			break;
		case 3:
			tab[4] = klucz[3] - '0';
			break;
		case 2:
			tab[0] = klucz[2] - '0';
			break;
		case 1:
			tab[2] = klucz[1] - '0';
			break;
		case 0:
			tab[6] = klucz[0] - '0';
			break;
		}
	}

	cout << endl;
	klucz.clear();

	for (int i = 0; i < 10; i++)
	{
		cout << tab[i];
		klucz += tab[i];
	}
	cout <<endl<< klucz;

}

void SL1(string &polowa)
{
	int tab[5];
	for (int i = 0; i < 5; i++)
	{
		switch (i)
		{
		case 4:
			tab[4] = polowa[0] ;
			break;
		case 3:
			tab[3] = polowa[4] ;
			break;
		case 2:
			tab[2] = polowa[3] ;
			break;
		case 1:
			tab[1] = polowa[2] ;
			break;
		case 0:
			tab[0] = polowa[1] ;
			break;
		}
	}

	cout << endl;
	polowa.clear();

	for (int i = 0; i < 5; i++)
	{
		cout << tab[i];
		polowa += tab[i];
	}
	cout << endl << polowa;

}

void SL2(string &polowa)
{
	int tab[5];
	for (int i = 0; i < 5; i++)
	{
		switch (i)
		{
		case 4:
			tab[4] = polowa[1];
			break;
		case 3:
			tab[3] = polowa[0];
			break;
		case 2:
			tab[2] = polowa[4];
			break;
		case 1:
			tab[1] = polowa[3];
			break;
		case 0:
			tab[0] = polowa[2];
			break;
		}
	}

	cout << endl;
	polowa.clear();

	for (int i = 0; i < 5; i++)
	{
		cout << tab[i];
		polowa += tab[i];
	}
	cout << endl << polowa;

}

void P10w8(string &klucz)
{
	int tab[10];
	for (int i = 0; i < 10; i++)
	{
		switch (i)
		{
		case 9:
			tab[9] = -1;//klucz[1];
			break;
		case 8:
			tab[8] = -1;//klucz[0];
			break;
		case 7:
			tab[7] = klucz[8];
			break;
		case 6:
			tab[6] = klucz[9];
			break;
		case 5:
			tab[5] = klucz[4];
			break;
		case 4:
			tab[4] = klucz[7];
			break;
		case 3:
			tab[3] = klucz[3];
			break;
		case 2:
			tab[2] = klucz[6];
			break;
		case 1:
			tab[1] = klucz[2];
			break;
		case 0:
			tab[0] = klucz[5];
			break;
		}
	}

	cout << endl;
	klucz.clear();

	for (int i = 0; i < 8; i++)
	{
		cout << tab[i];
		klucz += tab[i];
	}
	cout << endl << klucz;
}

void Podzial_i_Przesuniecie(string &klucz,string &klucz2rundy)
{
	string I_Polowa = klucz;
	string II_Polowa = klucz;
	//I_Polowa.erase(I_Polowa.begin() + 4, I_Polowa.end());
	I_Polowa.erase(5, 5);
	//II_Polowa.erase(II_Polowa.begin(), II_Polowa.begin() + 4);
	II_Polowa.erase(0, 5);
	//I_Polowa.clear();
	//II_Polowa.clear();

	//cout << "taby: \t";

		//int tab[5];
		//for (int i = 0; i < 5; i++)
		//{
		//	tab[i] = I_Polowa[i] - '0';
		//	//I_Polowa += tab[i];
		//	cout << tab[i];
		//}
		//for (int i = 0; i < 5; i++)
		//{
		//	tab[i] = II_Polowa[i] - '0';
		//	//II_Polowa += tab[i];
		//	cout << tab[i];
		//}
		//cout << "stringi: \n";
		//cout << I_Polowa << '\n' << II_Polowa << endl;

	SL1(I_Polowa);
	SL1(II_Polowa);

	klucz.clear();
	klucz += I_Polowa;
	klucz += II_Polowa;
	cout <<endl << "Klucz przed p10w8"<< klucz;
	P10w8(klucz);
	cout <<endl << "Klucz po p10w8" << klucz;

	SL2(I_Polowa);
	SL2(II_Polowa);

	klucz2rundy.clear();
	klucz2rundy += I_Polowa;
	klucz2rundy += II_Polowa;
	cout << endl << "Klucz2 przed p10w8" << klucz2rundy;
	P10w8(klucz2rundy);
	cout << endl << "Klucz po p10w8" << klucz2rundy;

}

void P4w8(string &polowa)
{

	int tab[8];
	for (int i = 0; i < 8; i++)
	{
		switch (i)
		{
		case 7:
			tab[7] = polowa[0];
			break;
		case 6:
			tab[6] = polowa[3];
			break;
		case 5:
			tab[5] = polowa[2];
			break;
		case 4:
			tab[4] = polowa[1];
			break;
		case 3:
			tab[3] = polowa[2];
			break;
		case 2:
			tab[2] = polowa[1];
			break;
		case 1:
			tab[1] = polowa[0];
			break;
		case 0:
			tab[0] = polowa[3];
			break;
		}
	}

	cout << endl;
	polowa.clear();

	for (int i = 0; i < 8; i++)
	{
		cout << tab[i];
		polowa += tab[i];
	}
	cout << endl << polowa;
}

void Wyluskiwanie(string osiemcyfr, string &converter,int ile)
{
	//cout << "TESTY\n";
	for (int i = 0; i < ile; i++)
	{
		//cout<<(int)osiemcyfr[i];
		if (osiemcyfr[i] == 0)
		{
			osiemcyfr[i] = 48;
		}
		else
		{
			osiemcyfr[i] = 49;
		}
		//cout << osiemcyfr[i];
	}
	converter = osiemcyfr;
}

void Xor(string &kopia, string &klucz, string &wynik,int ile)
{
	int wskaznikowy_test1;
	string skonwertowane1;
	//wskaznikowy_test1 = &tab1;
	int wskaznikowy_test2;
	string skonwertowane2;
	//wskaznikowy_test2 *tab2[8];

	Wyluskiwanie(kopia, skonwertowane1,ile);
	Wyluskiwanie(klucz, skonwertowane2,ile);

	kopia.clear();
	klucz .clear();


	if (ile == 8) 
	{
		auto wynik2 = std::bitset<8>(skonwertowane1) ^ std::bitset<8>(skonwertowane2);
		cout << endl << wynik2 << endl;
		wynik = wynik2.to_string();
	}
	else
	{
		auto wynik2 = std::bitset<4>(skonwertowane1) ^ std::bitset<4>(skonwertowane2);
		cout << endl << wynik2 << endl;
		wynik = wynik2.to_string();
	}
}

void SBox1(string polowa,string &pudelkowanie)
{
	int a, b;
	int tab[4];
	int b1, b2;
	for (int i = 0; i < 4; i++)
	{
		tab[i]=polowa[i]-'0';
	}

	if (tab[0] == 0 && tab[3] == 0) a = 0;
	if (tab[0] == 0 && tab[3] == 1) a = 1;
	if (tab[0] == 1 && tab[3] == 0) a = 2;
	if (tab[0] == 1 && tab[3] == 1) a = 3;

	if (tab[1] == 0 && tab[2] == 0) b = 0;
	if (tab[1] == 0 && tab[2] == 1) b = 1;
	if (tab[1] == 1 && tab[2] == 0) b = 2;
	if (tab[1] == 1 && tab[2] == 1) b = 3;

	
	if (a == 0 && b == 0) { b1 = 0; b2 = 1; }
	if (a == 1 && b == 0) { b1 = 1; b2 = 1; }
	if (a == 2 && b == 0) { b1 = 0; b2 = 0; }
	if (a == 3 && b == 0) { b1 = 1; b2 = 1; }

	if (a == 0 && b == 1) { b1 = 0; b2 = 0; }
	if (a == 1 && b == 1) { b1 = 1; b2 = 0; }
	if (a == 2 && b == 1) { b1 = 1; b2 = 0; }
	if (a == 3 && b == 1) { b1 = 0; b2 = 1; }

	if (a == 0 && b == 2) { b1 = 1; b2 = 1; }
	if (a == 1 && b == 2) { b1 = 0; b2 = 1; }
	if (a == 2 && b == 2) { b1 = 0; b2 = 1; }
	if (a == 3 && b == 2) { b1 = 1; b2 = 1; }

	if (a == 0 && b == 3) { b1 = 1; b2 = 0; }
	if (a == 1 && b == 3) { b1 = 0; b2 = 0; }
	if (a == 2 && b == 3) { b1 = 1; b2 = 1; }
	if (a == 3 && b == 3) { b1 = 1; b2 = 0; }

	pudelkowanie.clear();

	pudelkowanie += b1;
	pudelkowanie += b2;

	cout << "\n\n\nSbox1= " << pudelkowanie << "\n" << b1 << b2;

}

void SBox2(string polowa, string &pudelkowanie)
{
	int a, b;
	int tab[4];
	int b1, b2;
	for (int i = 0; i < 4; i++)
	{
		tab[i] = polowa[i]-'0';
	}

	if (tab[0] == 0 && tab[3] == 0) a = 0;
	if (tab[0] == 0 && tab[3] == 1) a = 1;
	if (tab[0] == 1 && tab[3] == 0) a = 2;
	if (tab[0] == 1 && tab[3] == 1) a = 3;

	if (tab[1] == 0 && tab[2] == 0) b = 0;
	if (tab[1] == 0 && tab[2] == 1) b = 1;
	if (tab[1] == 1 && tab[2] == 0) b = 2;
	if (tab[1] == 1 && tab[2] == 1) b = 3;


	if (a == 0 && b == 0) { b1 = 0; b2 = 0; }
	if (a == 1 && b == 0) { b1 = 1; b2 = 0; }
	if (a == 2 && b == 0) { b1 = 1; b2 = 1; }
	if (a == 3 && b == 0) { b1 = 1; b2 = 0; }

	if (a == 0 && b == 1) { b1 = 0; b2 = 1; }
	if (a == 1 && b == 1) { b1 = 0; b2 = 0; }
	if (a == 2 && b == 1) { b1 = 0; b2 = 0; }
	if (a == 3 && b == 1) { b1 = 0; b2 = 1; }

	if (a == 0 && b == 2) { b1 = 1; b2 = 0; }
	if (a == 1 && b == 2) { b1 = 0; b2 = 1; }
	if (a == 2 && b == 2) { b1 = 0; b2 = 1; }
	if (a == 3 && b == 2) { b1 = 0; b2 = 0; }

	if (a == 0 && b == 3) { b1 = 1; b2 = 1; }
	if (a == 1 && b == 3) { b1 = 1; b2 = 1; }
	if (a == 2 && b == 3) { b1 = 0; b2 = 0; }
	if (a == 3 && b == 3) { b1 = 1; b2 = 1; }

	pudelkowanie.clear();

	pudelkowanie += b1;
	pudelkowanie += b2;

	cout << "\n\n\nSbox2= " << pudelkowanie << "\n"<<b1<<b2;

}

void P4(string &polowa)
{
	int tab[4];
	for (int i = 0; i < 4; i++)
	{
		switch (i)
		{
		case 3:
			tab[3] = polowa[0];
			break;
		case 2:
			tab[2] = polowa[2];
			break;
		case 1:
			tab[1] = polowa[3];
			break;
		case 0:
			tab[0] = polowa[1];
			break;
		}
	}

	cout << endl;
	polowa.clear();

	for (int i = 0; i < 4; i++)
	{
		cout << tab[i];
		polowa += tab[i];
	}
	cout << endl << polowa;
}

void OperNaTxt(string &ciag,string &klucz)
{
	string I_Polowa = ciag;
	string II_Polowa = ciag;
	string wynik; 
	wynik.clear();

	I_Polowa.erase(4, 4);
	II_Polowa.erase(0, 4);
	string II_Polowa_kopia = II_Polowa;

	cout << endl << I_Polowa << endl << II_Polowa_kopia;
	cout << endl << "P4w8: ";
	P4w8(II_Polowa_kopia);

	Xor(II_Polowa_kopia, klucz, wynik,8);

	string I_Polowa_Xor=wynik;
	string II_Polowa_Xor=wynik;
	I_Polowa_Xor.erase(4, 4);
	II_Polowa_Xor.erase(0, 4);
	cout << "\n\nI_polowa_Xor:" << I_Polowa_Xor;
	cout << "\nII_polowa_Xor:" << II_Polowa_Xor;

	SBox1(I_Polowa_Xor, I_Polowa_Xor);
	SBox2(II_Polowa_Xor, II_Polowa_Xor);

	string pudelkox2;
	pudelkox2 += I_Polowa_Xor;
	pudelkox2 += II_Polowa_Xor;

	//cout <<"\nPudelkox2: "<< pudelkox2 << endl;

	P4(pudelkox2);

	string pierwsze_4 = ciag;
	pierwsze_4.erase(4, 4);

	Xor(pudelkox2, pierwsze_4, wynik, 4);

	int tab[4];
	string test_wynik = wynik;
	//for (int i = 0; i < 4; i++)
	//{
	//	tab[i] = test_wynik[i] - '0';
	//	test_wynik = tab[i];
	//}

	Wyluskiwanie(II_Polowa, II_Polowa, 4);

	test_wynik += II_Polowa;

	cout << "\n\nWYNIK:" << test_wynik;

}

int main()
{
	//unsigned long long int ciag=0100100101001;
	unsigned long long int klucz = 1100000011;
	short int check = 9;

	string test_ciag = "0100100101001";
	string test_klucz = "1100000011";
	string klucz2;

	int tab_ciag[8];

	//do {
		cout << "Plesase enter number (do 8 liczb):";
		cin >> test_ciag;
		//ciag = stoi(test_ciag/*,nullptr,2*/);

		int length = test_ciag.length();
		//length = dlugosc(ciag, 10);

	//} while (check > 8);
	if (length < 8)
	{
		for (int i = length; i < 8; i++) /*ciag *= 10*/ test_ciag += '0' ;
	}
	if (length > 8)
	{
		for (int i = check; i > 8; i--) /*ciag /= 10*/ test_ciag.erase (test_ciag.begin()+8,test_ciag.end());
	}

	cout << "Entered number is: " << test_ciag << endl;

	Permutacja(test_ciag);
	cout << "Podana liczba po permutacji wstepnej: " << test_ciag << endl;

	/*string tescik = "10001";
	cout << endl;
	Przesuniecie(tescik);
	cout << endl;*/

	PermutacjaKlucza(test_klucz);
	//cout << "Klucz pierwszej rundy: " << test_klucz << endl;
	Podzial_i_Przesuniecie(test_klucz,klucz2);

	OperNaTxt(test_ciag,test_klucz);

	_getch();
	return 0;
}




// tekst do zaszyfrowania: t=11110000
//PW = 10111000

//klucz poczatkowy = 1100000011