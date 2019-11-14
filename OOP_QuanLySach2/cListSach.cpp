#include "cListSach.h"

ostream& operator<<(ostream& out, cListSach iList)
{
	if (iList.LIST.empty()) {
		out << "LIST rong!" << endl;
		return out;
	}
	out << "=====LIST SACH=====" << endl;
	vector <cSach>::iterator iter;
	int i = -1;
	for (iter = iList.LIST.begin(); iter != iList.LIST.end(); iter++) {
		i++;
		out << iList.LIST[i];
	}
	return out;
}

istream& operator>>(istream& in, cListSach& iList)
{
	cout << "NHAP LIST SACH!" << endl;
	cout << "Nhap vao so sach: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "	Nhap cuon o vi tri " << i << endl;
		cSach temp;
		in >> temp;
		iList.LIST.push_back(temp);
	}
	return in;
}

int cListSach::fSearch(string tenSach)
{
	int count = 0;
	int pos;
	int i = -1;
	vector<cSach>::iterator iter;
	for (iter = LIST.begin(); iter != LIST.end(); iter++) {
		i++;
		if (tenSach == LIST[i].getTEN()) {
			count++;
			pos = i;
		}
	}
	if (count == 0) {
		return -1; // khong co sach trong list
	}
	else if (count == 1) {
		return pos; // co dung 1 cuon trung ten
	}
	else { // co nhieu hon 1 cuon trung ten
		cout << "Co nhieu cuon trung ten. Hay nhap ma sach: ";
		string maSach;
		cin >> maSach;
		i = -1;
		for (iter = LIST.begin(); iter != LIST.end(); iter++) {
			i++;
			if (maSach == LIST[i].getMA()) {
				return i;
			}
		}
		cout << "Ma sach khong co trong list!" << endl;
		return -1;
	}
}

void cListSach::fDeleteOne(int pos)
{
	int n = LIST.size();
	if (pos < 0 || pos >= n) {
		cout << "Vi tri nam ngoai list! " << endl;
		return;
	}
	int i = -1;
	vector<cSach>::iterator iter;
	for (iter = LIST.begin(); iter != LIST.end(); iter++) {
		i++;
		if (i == pos) {
			LIST.erase(iter);
			return;
		}
	}
}
