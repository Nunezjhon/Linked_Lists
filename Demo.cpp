#include "List.h"

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

List<int> * slow_list(int n) {

  // placeholder
  return nullptr;
}

int main(int argc, char *argv[]){
  List<string> *list2 = new List<string>();
  List<int> *list = new List<int>();
  List<string> *list3 = new List<string>();
  List<double> *list4 = new List<double>();
  int x;
  int n, ndel;

  n = 1000;

  if(argc == 2) {
    n = atoi(argv[1]);
  }

  string words[] = {"alice", "bob", "cathy", "donald"};
  for(int i=0; i<4; i++) {
      list2->push_front(words[i]);
      list3->push_back(words[i]);
  }

  list4->push_front(3.1415);

  for(x=1; x<=4; x++) {
    list->push_front(x);
  }
  list->print();

  for(x=1; x<=4; x++) {
    list->push_back(x);
  }

  list->print();
  
  cout << "length: " << list->length() << endl; //**
  
  list->pop_front(x);
  cout << "popped " << x <<endl;
  list->print();
  
  cout << "length after pop: " << list->length() << endl; //**

  list->slow_remove_all(2);
  cout << "after remove-all(2):\n";
  list->print();

  cout << "length after remove 2's: " << list->length() << endl; //**

  // string words[] = {"hello", "goodbye", "sunrise", "sunset"};

  list2->print();
  list3->print();

  cout << "list  sorted?  " << list->is_sorted() << endl;
  cout << "list2 sorted?  " << list2->is_sorted() << endl;
  cout << "list3 sorted?  " << list3->is_sorted() << endl;

  cout << "Count number of 1's:" << list->count(1) << endl;

  // list2->front = NULL;
  
  unsigned long int s1, s2, s3, s4;

  cout << "\nlist: ";
  list->print();
  cout << "\nlist2: ";
  list2->print();
  cout << "\nlist3: ";
  list3->print();
  cout << "\nlist4: ";
  list4->print();


  int dummy;

  cout << "\nlist: ";
  list->print();

  list->pop_front(dummy);
  cout << "\nlist after pop_front: ";
  list->print();

  list->pop_back(dummy);
  cout << "\nlist after pop_back: ";
  list->print();


  List<int> *list5 = new List<int>();
  int i;
  for (i = 0; i < 5; i++) {
	  list5->push_front(i);
  }
  
  List<int> *list6 = new List<int>();
  
  for (i = 0; i < 5; i++) {
	  list6->push_front(i);
  }

  List<int> *list8 = new List<int>();

  for (i = 0; i < 5; i++) {
	  list8->push_back(i);
  }

  cout << "\nlist after print Reverse: ";
  list->print_rev();

  list5->reverse();
  cout << "\nlist after reverse: ";
  list5->print();

  cout << "Front Pointer " << list5->getFront() << "\n";
  cout << "Back Pointer " << list5->getBack() << "\n\n";

  List<int> *list7 = new List<int>();//empty list test
  
  //Clone
  cout << "\nlist 5: ";
  list5->print();
  cout << "\nClone List 5: ";//clone list 5
  (list5->clone())->print();
  cout << "Front Pointer " << list5->getFront() << "\n";
  cout << "Back Pointer " << list5->getBack() << "\n\n";
  cout << list5->length() << "\n";

  //Concat
  cout << "\nlist 5: ";
  list5->print();
  cout << "\nlist 6: ";
  list6->print();
  list6->reverse();
  list5->concat(*list6);
  cout << "\nlist 5 and 6 concatenated: ";
  list5->print();
  //cout << "Front Pointer " << list5->getFront() << "\n";
 // cout << "Back Pointer " << list5->getBack() << "\n";
 // cout << list5->length() << "\n";

  
  //filter leq
  list5->filter_leq(2);
  cout << "\nlist 5 filtered(0): ";
  list5->print();
  cout << "Front Pointer " << list5->getFront() << "\n";
  cout << "Back Pointer " << list5->getBack() << "\n";
  cout << list5->length() << "\n";


  //prefix
  list5->prefix(6);
  cout << "\nlist prefix(6): ";
  list5->print();
  cout << "Front Pointer " << list5->getFront() << "\n";
  cout << "Back Pointer " << list5->getBack() << "\n";
  cout << list5->length() << "\n";


  //insert_sorted
  cout << "\nBefore insert_sorted: ";
  list5->print();
  list5->insert_sorted(5);
  cout << "\nlist insert_sorted(1): ";
  list5->print();
  cout << "Front Pointer " << list5->getFront() << "\n";
  cout << "Back Pointer " << list5->getBack() << "\n";
  cout << list5->length() << "\n";
  
  //merge_with
  List<int> *list9 = list8->clone();
  list8->push_front(0);
  list8->push_front(0);
  list8->push_front(0);
  cout << "\nBefore merge: \n";
  list8->print();
  list9->print();
  cout << "\nAfter merge: \n";
  list8->merge_with(*list9);
  list8->print();
  cout << "Front Pointer " << list8->getFront() << "\n";
  cout << "Back Pointer " << list8->getBack() << "\n";
  cout << list8->length() << "\n";

  //suffixMax
  List<int> *listY = new List<int>();
  listY->push_front(4);
  listY->push_front(5);
  listY->push_front(2);
  listY->push_front(7);
  listY->push_front(1);
  listY->push_front(4);
  listY->push_front(12);
  listY->push_front(-18);
  listY->push_front(6);
  listY->push_front(0);

  cout << "\nBefore suffix: \n";
  listY->print();

  List<int> *listX = listY->suffix_maxes();
  cout << "\nAfter suffix: \n";
  listX->print();


  //compareWith
  List<int> *listQ = list5->clone();
  listQ->push_back(0);
  list5->push_back(18);

  cout << "\nList: \n";
  list5->print();

  cout << "\nList: \n";
  listQ->print();

  int z;
  z = list5->compare_with(*listQ);
  cout << z << "\n" ;






  list->clear();
  list2->clear();
  list3->clear();
  list4->clear();
  list5->clear();
  list6->clear();
  list7->clear();

  delete list;
  delete list2;
  delete list3;
  delete list4;
  delete list5;
  delete list6;
  delete list7;


  /***  UNCOMMENT THIS CODE ONCE YOU HAVE WRITTEN YOUR
   *     slow_list FUNCTION
   *
   *    THIS WILL BE YOUR LAB EXERCISE FOR WEEK-03

  list = slow_list(n);

  cout << "starting slow_remove_all (n=" << n << ")" << endl;
  ndel = list->slow_remove_all(0);
  cout << "slow_remove_all done!" << endl;
  cout << "    num-deleted:    " << ndel << endl;
  cout << "    list-len after: " << list->length()   << endl;

  delete list;

  **************************************/

  return 0;
}
