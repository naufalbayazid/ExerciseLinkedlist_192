#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};

class CircularLinkedList {
private:
	Node* LAST;
public:
	CircularLinkedList() {
		LAST = NULL;
	}
	void addNode();
	bool search(int rollno, Node** bayazid, Node** naufal);
	bool listEmpty();
	
};

void CircularLinkedList::addNode() {
	int nim; //membuat  data integer dengan nama variabel nim
	string nm; //membuat  data string dengan nama variabel nm
	cout << "\nEnter the roll number of the student : ";
	cin >> nim; //dimasukan kedalam nim
	cout << "\nEnter the name of the student : ";
	cin.ignore();
	getline(cin, nm);
	Node* newNode = new Node();	//membuat pointer baru dari Node ke newNode
	newNode->rollNumber = nim;
	newNode->name = nm;

	if (LAST == NULL || nim <= LAST->rollNumber) { //apabila last sama dengan null atau nim kurang dari last->rollNumber
		if (LAST != NULL && nim == LAST->rollNumber) {	//apabila last tidak sama dengan null dan nim last->rollNumber
			cout << "Buat linked list terlebih dahulu" << endl; //keluar dari tampilan itu
			return;
		}

		LAST = newNode; // last nya dibuat ke node
		newNode->next = LAST; //newNode dibuat jadi ke last
		return;
	}

	Node naufal = last;
	Node bayazid = null;


}

bool CircularLinkedList::search(int rollno, Node* bayazid, Node* naufal) {
	naufal = LAST->next;
	bayazid = LAST->next;
	while (naufal != LAST) {
		if (rollno == (naufal)->rollNumber) {
			return true;
		}