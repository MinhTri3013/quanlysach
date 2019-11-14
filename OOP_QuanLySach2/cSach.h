#ifndef __CSACH_H__
#define __CSACH_H__

#include <iostream>
#include <string>
using namespace std;

class cSach
{
private:
	string MA;
	string TEN;
	int GIA;
public:
	friend ostream& operator<<(ostream& out, cSach iSach);
	friend istream& operator>>(istream& in, cSach& iSach);

	~cSach();

	string getMA();
	string getTEN();
	int getGIA();
};

ostream& operator<<(ostream& out, cSach iSach);
istream& operator>>(istream& in, cSach& iSach);

#endif // !__CSACH_H__
