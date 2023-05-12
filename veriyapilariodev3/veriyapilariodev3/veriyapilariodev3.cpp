#include <iostream>
#include"veri.h"
#include <queue>
#include <stack>
#include <chrono>

 int main()
{
	std::chrono::steady_clock::time_point begin;
	std::chrono::steady_clock::time_point end;
	std::chrono::steady_clock::duration elapsed;
	int sayi;
	int aramayontemi;
	int kontrolsayi;
	IkiliSiralamaAgaci* m = new IkiliSiralamaAgaci();
	m->agacOlustur();
	m->agacKur(dizi1);
	IkiliSiralamaAgaci* n = new IkiliSiralamaAgaci();
	n->agacOlustur();
	n->agacKur(dizi2);
	IkiliSiralamaAgaci* a = new IkiliSiralamaAgaci();
	a->agacOlustur();
	a->agacKur(dizi3);
	cout << "Arama yapacaginiz agaci seciniz (1,2,3)" << endl;
	cin >> sayi;
	if (sayi == 1) {
		cout << "Agac 1 icin arama yontemi seciniz (DFS:1 , BFS:2)" << endl;
		cin >> aramayontemi;
		if (aramayontemi == 1) {
			cout << "Agac 1 uzerinde DFS ile arayacaginiz degeri giriniz" << endl;
			cin >> kontrolsayi;
			begin = std::chrono::high_resolution_clock::now();
			if (DFS(m->kok, kontrolsayi) == true) {
				cout << "SONUC => VERI BULUNDU" << endl;
				end = std::chrono::high_resolution_clock::now();
				elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
				cout << "Gecen Sure => " << elapsed.count() << " nano-saniye" << endl;
			}
			else
			{
				cout << "Oyle bir veri bulunamadi.";
			}
		}
		else if (aramayontemi == 2) {
			cout << "Agac 1 uzerinde BFS ile arayacaginiz degeri giriniz" << endl;
			cin >> kontrolsayi;
			begin = std::chrono::high_resolution_clock::now();
			if (BFS(m->kok, kontrolsayi) == true) {
				cout << "SONUC => VERI BULUNDU" << endl;
				end = std::chrono::high_resolution_clock::now();
				elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
				cout << "Gecen Sure => " << elapsed.count() << " nano-saniye" << endl;
			}
			else
			{
				cout << "Oyle bir veri bulunamadi.";
			}
		}
	}
	if (sayi == 2) {
		cout << "Agac 2 icin arama yontemi seciniz (DFS:1 , BFS:2)" << endl;
		cin >> aramayontemi;
		if (aramayontemi == 1) {
			cout << "Agac 2 uzerinde DFS ile arayacaginiz degeri giriniz" << endl;
			cin >> kontrolsayi;
			begin = std::chrono::high_resolution_clock::now();
			if (DFS(n->kok, kontrolsayi) == true) {
				cout << "SONUC => VERI BULUNDU" << endl;
				end = std::chrono::high_resolution_clock::now();
				elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
				cout << "Gecen Sure => " << elapsed.count() << " nano-saniye" << endl;
			}
			else
			{
				cout << "Oyle bir veri bulunamadi.";
			}
		}
		else if (aramayontemi == 2) {
			cout << "Agac 2 uzerinde BFS ile arayacaginiz degeri giriniz" << endl;
			cin >> kontrolsayi;
			begin = std::chrono::high_resolution_clock::now();
			if (BFS(n->kok, kontrolsayi) == true) {
				cout << "SONUC => VERI BULUNDU" << endl;
				end = std::chrono::high_resolution_clock::now();
				elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
				cout << "Gecen Sure => " << elapsed.count() << " nano-saniye" << endl;
			}
			else
			{
				cout << "Oyle bir veri bulunamadi.";
			}
		}
	}
	if (sayi == 3) {
		cout << "Agac 3 icin arama yontemi seciniz (DFS:1 , BFS:2)" << endl;
		cin >> aramayontemi;
		if (aramayontemi == 1) {
			cout << "Agac 3 uzerinde DFS ile arayacaginiz degeri giriniz" << endl;
			cin >> kontrolsayi;
			begin = std::chrono::high_resolution_clock::now();
			if (DFS(a->kok, kontrolsayi) == true) {
				cout << "SONUC => VERI BULUNDU" << endl;
				end = std::chrono::high_resolution_clock::now();
				elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
				cout << "Gecen Sure => " << elapsed.count() << " nano-saniye" << endl;
			}
			else
			{
				cout << "Oyle bir veri bulunamadi.";
			}
		}
		else if (aramayontemi == 2) {
			cout << "Agac 3 uzerinde BFS ile arayacaginiz degeri giriniz" << endl;
			cin >> kontrolsayi;
			begin = std::chrono::high_resolution_clock::now();
			if (BFS(a->kok, kontrolsayi) == true) {
				cout << "SONUC => VERI BULUNDU" << endl;
				end = std::chrono::high_resolution_clock::now();
				elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
				cout << "Gecen Sure => " << elapsed.count() << " nano-saniye" << endl;
			}
			else
			{
				cout << "Oyle bir veri bulunamadi.";
			}
		}
	}
	m->agacKapat(m->kok);
	n->agacKapat(n->kok);
	a->agacKapat(a->kok);
}
