#include "cSach.h"

ostream& operator<<(ostream& out, cSach iSach)
{
	out << "Ma: " << iSach.MA << "	Ten: " << iSach.TEN << "	Gia: " << iSach.GIA << endl;
	return out;
}

istream& operator>>(istream& in, cSach& iSach)
{
	cout << "Nhap vao ma sach: ";
	in >> iSach.MA;
	cout << "Nhap vao ten sach: ";
	in.ignore();
	getline(in, iSach.TEN);
	cout << "Nhap vao gia sach: ";
	in >> iSach.GIA;
	return in;
}

cSach::~cSach()
{
	MA = "";
	TEN = "";
	GIA = -1;
}

string cSach::getMA()
{
	return MA;
}

string cSach::getTEN()
{
	return TEN;
}

int cSach::getGIA()
{
	return GIA;
}
