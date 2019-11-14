#ifndef __CLISTHD_H__
#define __CLISTHD_H__

#include "cHoaDon.h"
#include <vector>

class cListHD
{
private:
	vector<cHoaDon>LIST;
	int GiA;
public:
	cListHD();
	~cListHD();

	void fTinhGia();
	friend ostream& operator<<(ostream& out, cListHD list);
};

ostream& operator<<(ostream& out, cListHD list);
#endif // !__CLISTHD_H__