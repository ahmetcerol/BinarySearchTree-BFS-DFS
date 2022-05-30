# BinarySearchTree-BFS-DFS

*Bu projede ikili sıralama ağacı oluşturarak İlk Derinlik Arama (Depth First Search 
– DFS) ve İlk Genişlik Arama (Breadth First Search – BFS) algoritmalarını geliştirdik.
Geliştirilen arama algoritmaları için "veri.h" dosyasında verilen diziler ile 
oluşturulacak üç farklı ağaç üzerinde arama işlemleri gerçekleştirildi.Kullanılan veri yapıları kısaca*

* Kuyruk(Queue): Breadth First Search algoritmasını geliştirmek için C++’ın 
bize hazır olarak sunmuş olduğu <queue> kütüphanesini kullandım.
  
 * Yığın(Stack): Depth First Search algoritmasını geliştirmek için C++’ın bize 
hazır olarak sunmuş olduğu <stack> kütüphanesini kullandım. 
  
 * İkili Sıralama Ağacı(Binary Search Tree): Verileri organize etmek için 
kullanılan bir çeşit ikili ağaçtır. İkili ağaçtan temel farkı, verilerin sıralanmış bir 
şekilde tutulmasıdır, bu sayede arama algoritmalarını kullanabiliriz. İkili arama 
ağaçlarında; her düğümün sağ çocuğu kendisinden büyük, sol çocuğu ise 
kendisinden küçüktür. Bu ağaçlarda çalışan arama algoritması önce kökten 
başlar, eğer aranan eleman kökten büyükse sağ çocuğa, kökten küçükse sol 
çocuğa ilerler.
  
 * DFS(Depth First Search): Bir ağaç dolaşma algoritmasının ilk önce alt 
seviyesinde bulunan komşularını araması durumudur. Önce bir başlangıç 
Düğüm’ü seçilir ve ziyaret edilir. Seçilen düğümün bir komşusu seçilir ve ziyaret 
edilir. 2.adım ziyaret edecek komşu kalmayıncaya kadar tekrar edilir. Komşu 
kalmadığında tekrar geri dönülür ve önceki ziyaret edilmiş düğümler için adım 2
ve 3 tekrar edilir.
  
 * BFS(Breadth First Search): Bir başlangıç düğümü belirlenir ve tüm komşular 
ziyaret edilir. DFS’ den farklı olarak BFS’ de ziyaret edilen komşunun aynı anda 
gidilebilecek tüm komşuları aynı anda kuyruğa eklenir.
  
 * Chrono Kütüpanesi: Aramalar arasındaki hızı ölçebilmek için kullanacağız.

