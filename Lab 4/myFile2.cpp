#include "SetInt.h"

int main() {
	SetInt a; // object creation
	while (true) {
		cout << "add an element" << endl;
		int elem;
		cin >> elem;
		a.add(elem);
		cout << "current list:" << endl;
		int* list = a.tabElem();
		for (int i = 0; i < a.nbElem(); i++) {
			cout << *(list + i) << ",";
		}
		cout << endl;
		cout << "add another element" << endl;
		cout << "(Y)es/(N)o:" << endl;
		string chain;
		cin.clear();
		cin.sync();
		getline(cin, chain);
		//reads asequence of characters ending with an end of lineand store it in the chain
		//object (end of line not included)
		if (chain == "n" || chain == "N") {
			break;
		}
	}
	return 0;
}