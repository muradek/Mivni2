// #include "avl.h"
// #include <iostream>
// int main(){
//     AVLTree<int> tree = AVLTree<int>();
//     tree.insert(2);
//     tree.insert(3);
//     tree.insert(4);
//     tree.insert(0);
//     tree.print();
//     AVLTree<int>* tree1 = new AVLTree<int>();
//     tree1->insert(2);
//     tree1->insert(3);
//     tree1->insert(3);
//     tree1->insert(3);
//     tree1->insert(3);
//     tree1->insert(3);
//     tree1->insert(1);
//     tree1->insert(31);
//     tree1->insert(14);
//     tree1->insert(17);
//     tree1->insert(4);
//     tree1->print();
//     delete tree1;
//     return 0;
// }



// #include "dynamic_array.cpp"
// #include <iostream>
// int main(){
//     dynamic_array<int> arr;
//     arr.append(3);
//     arr.append(4);
//     arr.append(5);
//     arr.append(7);
//     arr.append(6);
//     arr.pretty_print();
//     arr.deleteAt(2);
//     arr.pretty_print();
//     arr.deleteAt(2);
//     arr.pretty_print();
//     std::cout << arr.get(2) << std::endl;
//     arr[2]=3;
//     std::cout << arr.get(2) << std::endl;

//     dynamic_array<int> *arr1 = new dynamic_array<int>;
//     arr1->append(3);
//     arr1->append(5);
//     arr1->append(4);
//     arr1->append(7);
//     arr1->append(6);
//     arr1->pretty_print();
//     arr1->deleteAt(2);
//     arr1->pretty_print();
//     arr1->deleteAt(2);
//     arr1->pretty_print();
//     std::cout << arr1->get(2) << std::endl;
//     delete arr1;
// }


// #include "dsunion.h"
// #include <iostream>
// int main(){
//     DSUnion* union1 = new DSUnion();
//     union1->DS_makeSet();
//     union1->DS_makeSet();
//     union1->DS_makeSet();
//     union1->DS_makeSet();
//     union1->parents->pretty_print();
//     union1->DS_find(1)->sell(0,2);
//     union1->DS_find(2)->sell(3,2);
//     union1->DS_union(1,2);
//     std::cout << "here we go:";
//     union1->parents->pretty_print();
//     delete union1;
// }


// #include "dsunion.h"
// #include <iostream>
// int main(){
//     DSUnion* union1 = new DSUnion();
//     union1->DS_makeSet();
//     union1->DS_makeSet();
//     union1->DS_makeSet();
//     union1->DS_makeSet();
//     union1->parents->pretty_print();
//     union1->DS_find(1)->sell(0,2);
//     union1->DS_find(1)->sell(0,2);
//     union1->DS_find(1)->sell(6,2);
//     union1->DS_find(3)->sell(8,6);
//     union1->DS_find(1)->sell(2,2);
//     union1->DS_find(2)->sell(2,2);
//     union1->DS_find(2)->sell(3,2);
//     std::cout << "id tree of 1:" << std::endl;
//     union1->DS_find(1)->id_tree->print();
//     std::cout << "ranked tree of 1:" << std::endl;
//     union1->DS_find(1)->ranked_tree->print();
//     std::cout << "---------------------" << std::endl;
//     std::cout << "id tree of 2:" << std::endl;
//     union1->DS_find(2)->id_tree->print();
//     std::cout << "ranked tree of 2:" << std::endl;
//     union1->DS_find(2)->ranked_tree->print();
//     std::cout << "---------------------" << std::endl;
//     std::cout << "id tree of 3:" << std::endl;
//     union1->DS_find(3)->id_tree->print();
//     std::cout << "ranked tree of 3:" << std::endl;
//     union1->DS_find(3)->ranked_tree->print();
//     std::cout << "---------------------" << std::endl;
//     union1->DS_union(1,2);
//     std::cout << "after union:" << std::endl;
//     std::cout << "id tree of 2:" << std::endl;
//     union1->DS_find(2)->id_tree->print();
//     std::cout << "ranked tree of 2:" << std::endl;
//     union1->DS_find(2)->ranked_tree->print();
//     std::cout << "---------------------" << std::endl;
//     std::cout << "here we go:" << std::endl;
//     union1->parents->pretty_print();
//     delete union1;
// }