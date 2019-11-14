#include "cHoaDon.h"



cHoaDon::cHoaDon()
{
}

cHoaDon::cHoaDon(cSach iSach, int soLuong)
{
	SACH = iSach;
	SOlg = soLuong;
	fTinhGia();
}


cHoaDon::~cHoaDon()
{
}

int cHoaDon::getGIA()
{
	return GIA;
}

void cHoaDon::fTinhGia()
{
	GIA = SOlg * SACH.getGIA();
}

ostream& operator<<(ostream& out, cHoaDon iHD)
{
	out << iHD.SACH;
	out << "	So luong: " << iHD.SOlg << "	Gia HD: " << iHD.GIA << endl;
	return out;
}
