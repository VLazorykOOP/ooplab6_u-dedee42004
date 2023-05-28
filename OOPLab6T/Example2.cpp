class Korin {
	public:
		virtual void Rivnya() = 0;
	};
	class Lin : public Korin {
	private:
		double a;
		double b;
		double x;
	public:
		Lin() :a(2), b(10) { cout << "Linear equation of the form: " << a << "x = " << b << endl; }
		Lin(double ai, double bi) : a(ai), b(bi) { cout << "Linear equation of the form: " << a << "x = " << b << endl; }

		void Rivnya() override {
			x = b / a;
			cout << "x = " << x << endl;
		}
	};
	class Kvad :public Korin {
	private:
		double a, b, c;
		double x1, x2;
	public:
		Kvad() :a(1), b(2), c(1)
		{
			if (b > 0)
			{
				cout << "Quadratic equation of the form: " << a << "x^2+" << b << "x";
			}
			else cout << "Quadratic equation of the form: " << a << "x^2" << b << "x";
			if (c > 0)
			{
				cout << "+" << c << " = 0" << endl;
			}
			else cout << c << " = 0" << endl;
		}
		Kvad(double ai, double bi, double ci) :a(ai), b(bi), c(ci)
		{
			if (b > 0)
			{
				cout << "Quadratic equation of the form: " << a << "x^2+" << b << "x";
			}
			else cout << "Quadratic equation of the form: " << a << "x^2" << b << "x";
			if (c > 0)
			{
				cout << "+" << c << " = 0" << endl;
			}
			else cout << c << " = 0" << endl;
		}
		void Rivnya() override {
			double d;
			d = b * b - 4 * a * c;
			if (d < 0)
			{
				cout << "There is no solution" << endl;
			}
			else
			{
				x1 = (-b - sqrt(d)) / (2 * a);
				x2 = (-b + sqrt(d)) / (2 * a);
				cout << "x1 = " << x1 << ";\tx2 = " << x2 << endl;
			}
		}
	};
	class Bikvad : public Korin {
	private:
		double a, b, c;
		double x1, x2, x3;
	public:
		Bikvad() :a(1), b(-5), c(-36)
		{
			if (b > 0)
			{
				cout << "BiQuadratic equation of the form: " << a << "x^4+" << b << "x^2";
			}
			else cout << "BiQuadratic equation of the form: " << a << "x^4" << b << "x^2";
			if (c > 0)
			{
				cout << " +" << c << endl;
			}
			else cout << " " << c << endl;
		}
		Bikvad(double ai, double bi, double ci) :a(ai), b(bi), c(ci)
		{
			if (b > 0)
			{
				cout << "BiQuadratic equation of the form: " << a << "x^4+" << b << "x^2";
			}
			else cout << "BiaQuadratic equation of the form: " << a << "x^4" << b << "x^2";
			if (c > 0)
			{
				cout << "+" << c << " = 0" << endl;
			}
			else cout << c << " = 0" << endl;
		}
		void Rivnya() override {
			double d;
			double x1x, x2x;
			d = b * b - 4 * a * c;
			x1x = (-b - sqrt(d)) / 2 * a;
			x2x = (-b + sqrt(d)) / 2 * a;
			if (x1x > 0)
			{
				cout << "x1 = " << sqrt(x1x) << "; x2 = " << -sqrt(x1x) << endl;
			}
			if (x2x > 0)
			{
				cout << " x3 = " << sqrt(x2x) << "; x4 = " << -sqrt(x2x) << endl;
			}
			if (x1x < 0 && x2x < 0)
			{
				cout << "Not solution" << endl;
			}
		}
	};
	class Rozv
	{
	public:
		void Rivnya(Korin* korin)
		{
			korin->Rivnya();
		}
	};
