/*
 * C++ Program to Implement Threaded Binary Tree
 */
#include <cstdlib>
#include <iostream>
#define MAX_VALUE 65536
using namespace std;
#include "menu_options.cpp"
//#include "tbt.cpp"

/* Main Contains Menu */

int main() {
  ThreadedBinarySearchTree tbst;
  cout << "ThreadedBinarySearchTree Test\n";
  char ch;
  int choice, val;
  /*  Perform tree operations  */
  do {
    cout << "\nThreadedBinarySearchTree Operations\n";
    cout << "1. Insert " << endl;
    cout << "2. Delete" << endl;
    cout << "3. Search" << endl;
    cout << "4. Clear" << endl;
    cout << "Enter Your Choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
      cout << "Enter integer element to insert: ";
      cin >> val;
      tbst.insert(val);
      break;
    case 2:
      cout << "Enter integer element to delete: ";
      cin >> val;
      tbst.Delete(val);
      break;
    case 3:
      cout << "Enter integer element to search: ";
      cin >> val;
      if (tbst.search(val) == true)
        cout << "Element " << val << " found in the tree" << endl;
      else
        cout << "Element " << val << " not found in the tree" << endl;
      break;
    case 4:
      cout << "\nTree Cleared\n";
      tbst.makeEmpty();
      break;
    default:
      cout << "Wrong Entry \n ";
      break;
    }
    /*  Display tree  */
    cout << "\nTree = ";
    tbst.printTree();
    cout << "\nDo you want to continue (Type y or n): ";
    cin >> ch;
  } while (ch == 'Y' || ch == 'y');
  return 0;
}
