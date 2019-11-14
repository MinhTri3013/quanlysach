#include "cListHD.h"



cListHD::cListHD()
{
}


cListHD::~cListHD()
{
}

void cListHD::fTinhGia()
{
	if (LIST.empty()) {
		GiA = 0;
		return;
	}
	vector<cHoaDon>::iterator iter;
	int i = -1;
	int sum = 0;
	for (iter = LIST.begin(); iter != LIST.end(); iter++) {
		i++;
		sum += LIST[i].getGIA();
	}
	GiA = sum;
}

ostream& operator<<(ostream& out, cListHD list)
{
	if (list.LIST.empty()) {
		out << "List Hoa don rong!" << endl;
		return out;
	}
	vector<cHoaDon>::iterator iter;
	int i = -1;
	for (iter = list.LIST.begin(); iter != list.LIST.end(); iter++) {
		i++;
		out << list.LIST[i] << endl;
	}
	return out;
}
