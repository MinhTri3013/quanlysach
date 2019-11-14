#ifndef __CLISTSACH_H__
#define __CLISTSACH_H__

#include "cSach.h"
#include <vector>

class cListSach
{
private:
	vector <cSach> LIST;
public:
	friend ostream& operator<<(ostream& out, cListSach iList);
	friend istream& operator>>(istream& in, cListSach& iList);

	int fSearch(string tenSach);
	void fDeleteOne(int pos);
};

ostream& operator<<(ostream& out, cListSach iList);
istream& operator>>(istream& in, cListSach& iList);

#endif // !__CLISTSACH_H__
