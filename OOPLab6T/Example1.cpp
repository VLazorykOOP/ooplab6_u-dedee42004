#include <iostream>
using namespace std;
//example 1
class Base {
protected:
	int dat;
	double a[5] = { 9,2,8,1,4 };
public:
	Base() : dat(1) {}
	Base(int d) : dat(d) {}
};
class D: protected Base{
protected:
	int datd;
public:
	D() : datd(1) {}
	D(int d) : datd(d) {}
	D(int dat, int datd) : Base(dat),datd(datd) {}
};
class D2 :protected D {
protected:
	int d2;
public:
	D2() : d2(1) {}
	D2(int d) : d2(d) {}
	D2(int datd1, int datd2, int d2) : D(datd1,datd2), d2(d2) {}
};
class D1 :protected D, protected D2 {
protected:
	int d1;
public:
	D1() : d1(1) {}
	D1(int d) : d1(d) {}
	D1(int datd1,int datd2,int d2a,int d2b,int d2c,int d1) : D(datd1,datd2), D2(d2a,d2b,d2c), d1(d1) {}
};
class BD :protected Base, protected D {
protected:
	int bd;
public:
	BD() : bd(1) {}
	BD(int d) : bd(d) {}
	BD(int dat, int b, int c, int d) : Base(dat), D(b,c), bd(d) {}
};
class R1 : protected BD {
protected:
	int r1;
public:
	R1() : r1(1) {}
	R1(int d) : r1(d) {}
	R1(int dat, int b, int c, int d, int r1) : BD(dat, b, c, d), r1(r1 + 1.) {}
};
class R2 :protected D1,protected D2{
protected:
	int r2;
public:
	R2() : r2(1) {}
	R2(int d) : r2(d) {}
	R2(int datd1, int datd2, int d2a, int d2b, int d2c, int d1,int d1a,int d1b,int d1c, int r2) : D1(datd1, datd2, d2a, d2b, d2c, d1), D2(d1a, d1b, d1c), r2(r2 + 1.) {}
};

//VIRTUAL
class DV :virtual protected Base {
protected:
	int d1;
public:
	DV() : d1(1) {}
	DV(int d) : d1(d) {}
	DV(int d, int dt) : Base(d), d1(dt) {}
};
class D2V :virtual protected DV {
protected:
	int d2v;
public:
	D2V() : d2v(1) {}
	D2V(int d) : d2v(d) {}
	D2V(int d1,int d2, int dt) : DV(d1,d2), d2v(dt) {}
};
class D1V :virtual public DV, virtual protected D2V{
protected:
	int d1;
public:
	D1V() : d1(1) {}
	D1V(int d) : d1(d) {}
	D1V(int datd1, int datd2, int d2a, int d2b, int d2c, int d1) : DV(datd1, datd2), D2V(d2a, d2b, d2c), d1(d1) {}
};
class BDV :virtual public DV, virtual public Base {
protected:
	int bdv;
public:
	BDV() : bdv(1) {}
	BDV(int d) : bdv(d) {}
	BDV(int dat, int b, int c, int d) :Base(dat), DV(b, c), bdv(d) {}
};
class R1V :virtual protected BDV {
protected:
	int r1;
public:
	R1V() : r1(1) {}
	R1V(int d) : r1(d) {}
	R1V(int dat, int b, int c, int d, int r1) :BDV(dat, b, c, d), r1(r1 + 1.) {}
	void showDat()
	{
		cout << "  bdv =  " << bdv << endl;
		cout << "BDV::Base::dat =  " << BDV::Base::dat << endl;
		cout << "BDV::DV::Base::dat =  " << BDV::DV::Base::dat << endl;
	}
};
	class R2V :virtual protected D1V, virtual protected D2V {
	protected:
		int r2;
	public:
		R2V() : r2(1) {}
		R2V(int d) : r2(d) {}
		R2V(int datd1, int datd2, int d2a, int d2b, int d2c, int d1, int d1a, int d1b, int d1c, int r2) : D1V(datd1, datd2, d2a, d2b, d2c, d1), D2V(d1a, d1b, d1c), r2(r2 + 1.) {}
		void showDat()
		{
			cout << "  d1 =  " << d1 << endl;
			cout << "  d2v =  " << d2v << endl;
			cout << "D1V::DV::Base::dat =  " << D1V::DV::Base::dat << endl;
			cout << "D2V::DV::Base::dat =  " << D2V::DV::Base::dat << endl;
			cout << "D1V::D2V::DV::Base::dat =  " << D1V::D2V::DV::Base::dat << endl;
		}
	};

	void MenuExample() {
		cout << "     Menu Example   \n";
		cout << "    1   Example 1  \n";
		cout << "    2   Example 2  \n";
		cout << "    3   Example 3  \n";

		cout << "    4 or e  Exit \n";

	}
