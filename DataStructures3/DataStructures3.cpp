
#include <cstddef>
#include <chrono>
#include <queue>
#include <stack>
#include <iostream>
#include "veri.h"


using namespace std;


int main()
{
dönüs:
	int x;
	int z;
	
   cout << "Arama yapacaginiz agaci seciniz:(1,2,3)\n";
   cin >> x;
   
   if (x==1){
   
	   
   dön:
	   IkiliSiralamaAgaci* agac1 = new IkiliSiralamaAgaci();

	  
	   for (int i = 0; i < UZUNLUK; i++)
	   {
		   agac1->agacKur(&dizi1[i]);
	   }
	   int y;
	   cout << "Agac 1 icin Arama Yontemini Seciniz(DFS:1 , BFS:2)";
	   cin >> y;
       
	   if (y==1)
	   {
		   cout << "Agac 1 uzerinde DFS ile arayacaginiz degeri giriniz:";
		   cin >> z;
		   auto begin = std::chrono::high_resolution_clock::now();
		   DFS(agac1->kok, z);
		   auto end = std::chrono::high_resolution_clock::now();
		   auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
		   cout << "\n-Depth First Search Ile Arama Suresi = >" << elapsed.count() << "mikro-saniye" << endl;
	   }
	   else if (y==2)
	   {
		   cout << "Agac 1 uzerinde BFS ile arayacaginiz degeri giriniz:";
		   cin >> z;
		   auto begin = std::chrono::high_resolution_clock::now();
		   BFS(agac1->kok, z);
		   auto end = std::chrono::high_resolution_clock::now();
		   auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
		   cout << "\n-Breadth First Search Ile Arama Suresi = >" << elapsed.count() << "mikro-saniye" << endl;
	   }
	   else
	   {
		   cout << "Lutfen dogru bir deger giriniz";
		   goto dön;
	   }
   }
   else if (x==2)
   {
   dön2:
	   IkiliSiralamaAgaci* agac2 = new IkiliSiralamaAgaci();
	 
	   for (int i = 0; i < UZUNLUK; i++)
	   {
		   agac2->agacKur(&dizi2[i]);
	   }
	   cout << "Agac 2  icin Arama Yontemini Seciniz(DFS:1 , BFS:2)";
	   int y;
	   cin >> y;
       
	   if (y == 1)
	   {
		   cout << "Agac 2 uzerinde DFS ile arayacaginiz degeri giriniz:";
		   cin >> z;
		   auto begin = std::chrono::high_resolution_clock::now();
		   DFS(agac2->kok, z);
		   auto end = std::chrono::high_resolution_clock::now();
		   auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
		   cout << "\n-Depth First Search Ile Arama Suresi = >" << elapsed.count() << "mikro-saniye" << endl;
		   
	   }
	   else if (y == 2)
	   {
		   cout << "Agac 2 uzerinde BFS ile arayacaginiz degeri giriniz:";
		   cin >> z;
		   auto begin = std::chrono::high_resolution_clock::now();
		   BFS(agac2->kok, z);
		   auto end = std::chrono::high_resolution_clock::now();
		   auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
		   cout << "\n-Breadth First Search Ile Arama Suresi = >" << elapsed.count() << "mikro-saniye" << endl;

	   }
	   else
	   {
		   cout << "Lutfen dogru bir deger giriniz\n\n";
		   goto dön2;
	   }

   }
   else if (x==3)
   {
   dön3:

	   IkiliSiralamaAgaci* agac3 = new IkiliSiralamaAgaci();
	  
	   for (int i = 0; i < UZUNLUK; i++)
	   {
		   agac3->agacKur(&dizi3[i]);
	   }
	   cout << "Agac 3 icin Arama Yontemini Seciniz(DFS:1 , BFS:2)";
	   int y;
	   cin >> y;

	   if (y == 1)
	   {
		   cout << "Agac 3 uzerinde DFS ile arayacaginiz degeri giriniz:";
		   cin >> z;
		   auto begin = std::chrono::high_resolution_clock::now();
		   DFS(agac3->kok, z);
		   auto end = std::chrono::high_resolution_clock::now();
		   auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
		   cout << "\n-Depth First Search Ile Arama Suresi = >" << elapsed.count() << "mikro-saniye" << endl;
	   }
	   else if (y == 2)
	   {
		   cout << "Agac 3 uzerinde BFS ile arayacaginiz degeri giriniz:";
		   cin >> z;
		   auto begin = std::chrono::high_resolution_clock::now();
		   BFS(agac3->kok, z);
		   auto end = std::chrono::high_resolution_clock::now();
		   auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - begin);
		   cout << "\n-Breadth First Search Ile Arama Suresi = >" << elapsed.count() << "mikro-saniye" << endl;
	   }
	   else
	   {
		   cout << "Lutfen dogru bir deger giriniz\n\n";
		   goto dön3;
	   }
   }
   else
   {
	   cout << "Lutfen dogru bir sayi seciniz!\n\n";

	   goto dönüs;
   }

	
}