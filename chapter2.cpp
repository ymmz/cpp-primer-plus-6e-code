#include<iostream>

using namespace std;

//2.7.1
void test1()
{
	cout << "name£ºtest£¬address£ºtest" << endl;
}

//2.7.2
void test2()
{
	long x = 0;
	cout << "Enter the number of long:";
	cin >> x;
	cout << x << " long is equal to " << x * 220 << " ma" << endl;
}

//2.7.3
void test3_1()
{
	cout << "Three blind mice" << endl;
}
void test3_2()
{
	cout << "See how they run" << endl;
}

//2.7.4
void test4()
{
	int age;
	cout << "Enter your age£º";
	cin >> age;
	cout << age << " years are equal to " << age * 12 << " months" << endl;
}

//2.7.5
int test5(int celsius)
{
	return celsius * 1.8 + 32.0;
}

//2.7.6
double test6(double years)
{
	return years * 63240;
}

//2.7.7
void test7(int hour, int minu)
{
	cout << "Time: " << hour << ":" << minu << endl;
}


int main()
{
	cout << "chapter2 code:" << endl;


	test1();

	test2();

	test3_1();
	test3_1();
	test3_2();
	test3_2();

	test4();

	cout << "Please enter a Celsius value:";
	int celsius;
	cin >> celsius;
	cout << celsius << " degrees Celsius is " << test5(celsius) << " degrees Fathrenheit." << endl;

	cout << "Enter the number of light years:";
	double years;
	cin >> years;
	cout << years << " light years = " << test6(years) << " astronomical units." << endl;

	int hour, minu;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minuters: "  ;
	cin >> minu;
	test7(hour, minu);



	return 0;
}