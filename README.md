# BinarySearchTree-BFS-DFS
#### Ahmet Can EROL

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

## English

In this project, we developed Depth First Search (DFS) and Breadth First Search (BFS) algorithms by constructing a binary search tree on three different arrays provided in the "veri.h" file. The data structures used are briefly described as follows:

- Queue: To improve the Breadth First Search algorithm, we used the <queue> library provided by C++ to manage the queue data structure.

- Stack: To improve the Depth First Search algorithm, we used the <stack> library provided by C++ to manage the stack data structure.

- Binary Search Tree: This is a type of binary tree used to organize data. The key difference from a binary tree is that data is stored in a sorted manner, allowing us to use search algorithms. In binary search trees, each node's right child is greater than itself, and the left child is smaller. The search algorithm that runs on these trees starts from the root, and if the element being searched for is greater than the root, it moves to the right child; if it's smaller, it moves to the left child.

- DFS (Depth First Search): It is an algorithm for traversing a tree or graph, where it first explores the child nodes at the deepest level. It starts by selecting and visiting an initial node. Then, it selects one of its neighbors and visits it. Steps 2 and 3 are repeated until there are no more neighbors to visit. When there are no more neighbors to visit, it backtracks and repeats steps 2 and 3 for previously visited nodes.

- BFS (Breadth First Search): In BFS, an initial node is selected, and all its neighbors are visited. Unlike DFS, in BFS, all neighbors that can be reached from the current node are added to a queue simultaneously.

- Chrono Library: This library is used to measure the speed of searches between different algorithms.

These data structures and algorithms are essential for conducting efficient searches on the binary search tree, either in a depth-first manner (DFS) or a breadth-first manner (BFS). The choice between DFS and BFS depends on the specific problem and the requirements of the search operation.

