#ifndef __CACCOUNT_H__
#define __CACCOUNT_H__

#include "cListSach.h"

class cAccount
{
protected:
	string ID;
	string PASS;
	int TYPE;
public:
	cAccount();
	~cAccount();
};

#endif // !__CACCOUNT_H__