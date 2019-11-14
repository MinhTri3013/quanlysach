#ifndef __CHOADON_H__
#define __CHOADON_H__

#include "cSach.h"

class cHoaDon
{
private:
	cSach SACH;
	int SOlg;
	int GIA;
public:
	cHoaDon();
	cHoaDon(cSach iSach, int soLuong);
	~cHoaDon();
	friend ostream& operator<<(ostream& out, cHoaDon iHD);
	
	int getGIA();
	void fTinhGia();
};
ostream& operator<<(ostream& out, cHoaDon iHD);

#endif // !__CHOADON_H__