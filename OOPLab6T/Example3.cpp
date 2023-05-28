class Transport {
	public:
		virtual void Ryx() = 0;
	};

	class Korabel :virtual public Transport {
	public:
		void Ryx() override
		{
			cout << "Tyyy TYYYyyy!" << endl;
		}
	};

	class Pass_Transport : virtual public Transport {
	public:
		void People()
		{
			cout << "Bla Bla Bla!" << endl;
		}
		void Ryx() override
		{
			cout << "Bi Biip!" << endl;
		}
	};

	class Pass_Korabel : public Korabel, public Pass_Transport
	{
	public:
		void Music()
		{
			cout << "Bymc BymC Bymc!" << endl;
		}
		void Ryx() override
		{
			cout << "Tyyy Bymcc TYYYyyy TyyyYy!" << endl;
		}
	};

	class Shym
	{
	public:
		void Ryx(Transport* t)
		{
			t->Ryx();
		}
	};
	int main()
	{
		cout << "OOP. Example for laboratory work #6.\n";

		char ch = '5';
		do {
			system("cls");
			MenuExample();
			ch = cin.get();

			cin.get();

			switch (ch) {
			case '1': {
				cout << " Example1  \n";
				R1 a1, b1(1, 2, 3, 4.5, 52);
				R2 a2, b2(1, 2, 3, 4.5, 5, 6, 7, 8, 9, 10);
				R1V a1v, b1v(1, 2, 3, 4.5, 52);
				R2V a2v, b2v(1, 2, 3, 4.5, 5, 6, 7, 8, 9, 10);

				cout << "Test !\n";
				cout << "Size for Base " << sizeof(Base) << endl;
				cout << "Size for D " << sizeof(D) << endl;
				cout << "Size for D1 " << sizeof(D1) << endl;
				cout << "Size for D2 " << sizeof(D2) << endl;
				cout << "Size for BD " << sizeof(BD) << endl;
				cout << "Size for R1 " << sizeof(R1) << endl;
				cout << "Size for R2 " << sizeof(R2) << endl;
				cout << "\n" << endl;
				cout << "Size for Base " << sizeof(Base) << endl;
				cout << "Size for DV " << sizeof(DV) << endl;
				cout << "Size for D1V " << sizeof(D1V) << endl;
				cout << "Size for D2V " << sizeof(D2V) << endl;
				cout << "Size for BDV " << sizeof(BDV) << endl;
				cout << "Size for R1V " << sizeof(R1V) << endl;
				cout << "Size for R2V " << sizeof(R2V) << endl;

				cout << "Size for object class R1 " << sizeof(R1) << " or  "
					<< sizeof(a1) << " or  " << sizeof(b1) << endl;
				cout << "Size for object class R2 " << sizeof(R2) << " or  "
					<< sizeof(a2) << " or  " << sizeof(b2) << endl;
				cout << "Size for object class R1V " << sizeof(R1V) << " or  "
					<< sizeof(a1v) << " or  " << sizeof(b1v) << endl;
				cout << "Size for object class R2V " << sizeof(R2V) << " or  "
					<< sizeof(a2v) << " or  " << sizeof(b2v) << endl;
				b1v.showDat();
				b2v.showDat();
				return 0;
				break;
			}
			case '2': {
				cout << " Example2  \n";
				Rozv rivnyan;
				cout << "Test Linear equation" << endl;
				Lin La(2, 14);
				rivnyan.Rivnya(&La);
				cout << "Constructor ()" << endl;
				Lin Lb;
				rivnyan.Rivnya(&Lb);
				cout << "Test Quadratic equation" << endl;
				Kvad Kc(2, 9, -18);
				rivnyan.Rivnya(&Kc);
				Kvad Ke(2, -5, -25);
				rivnyan.Rivnya(&Ke);
				Kvad Kj(1, -1, 1);
				rivnyan.Rivnya(&Kj);
				cout << "Constructor ()" << endl;
				Kvad Kd;
				rivnyan.Rivnya(&Kd);
				cout << "Test BiQuadratic equation" << endl;
				Bikvad Bt(1, 1, -30);
				rivnyan.Rivnya(&Bt);
				cout << "Constructor ()" << endl;
				Bikvad By;
				rivnyan.Rivnya(&By);
				break;
			}
			case '3': {
				Shym f;
				Korabel kor;
				Pass_Korabel pkor;
				Pass_Transport pt;
				f.Ryx(&kor);
				f.Ryx(&pkor);
				pkor.People();
				f.Ryx(&pt);
				pt.People();

				break;
			}
			case '4':  return 0;
			case 'e':  return 0;
			}
			cout << " Press any key and enter\n";
			ch = cin.get();
		} while (ch != '6');


	}
