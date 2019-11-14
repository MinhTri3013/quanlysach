#include "cSach.h"
#include "cListSach.h"

int main()
{
	cListSach list;
	cin >> list;
	cout << list;

	string tenSach;
	cout << endl << "Nhap vao ten sach can tim: ";
	cin >> tenSach;
	int pos = list.fSearch(tenSach);
	cout << pos;
}

