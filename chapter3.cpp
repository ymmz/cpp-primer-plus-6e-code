#include<iostream>

using namespace std;


//3.7.1
void test1()
{
	const int t = 12;
	cout << "Please enter your height:";
	int height;
	cin >> height;
	cout << height << " in is equal to " <<(int) height / t << " ft " << height % t << " in" << endl;
}

//3.7.2
void test2()
{
	const int t = 12;
	const double k = 2.2;
	const double m = 0.0254;
	cout << "Please your height(ft in):";
	int x, y;
	cin >> x >> y;
	double height = (x * t + y) * m;
	cout << "Please your weight:";
	int z;
	cin >> z;
	double weight = z / k;
	cout << "Your BMI is " << (weight / height) * (weight / height) << endl;
}

//3.7.3
void test3()
{
	cout << "Please enter a latitude in degrees,minutes and seconds:" << endl;
	int degree, minute, second;
	cout << "First, enter the degrees:";
	cin >> degree;
	cout << "Next, enter the minutes of arc:";
	cin >> minute;
	cout << "Finally, enter the seconds of arc:";
	cin >> second;
	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << 1.0 * degree + 1.0 * minute / 60.0 + 1.0 * second / 60.0 / 60.0 << " degree" << endl;
}

//3.7.4
void test4()
{
	long long second;
	cout << "Enter the number of seconds:";
	cin >> second;
	const long long m = 60;
	const long long h = 60 * 60;
	const long long d = 24 * 60 * 60;
	long long days = second / d;
	second %= d;
	long long hour = second / h;
	second %= h;
	long long minute = second / m;
	second %= m;
	cout << second << " seconds = " << days << " days, " << hour << " hours, " << minute << " minutes, " << second << " seconds" << endl;
}

//3.7.5
void test5()
{
	long long world, other;
	double ratio;
	cout << "Enter the world's population:";
	cin >> world;
	cout << "Enter the population of the US:";
	cin >> other;
	ratio = 1.0 * other / world;
	cout << "The population of the US is " << ratio * 100 << "% the world population" << endl;
}

//3.7.6
void test6()
{
	long long length, used;
	double ratio;
	cout << "Enter the length:";
	cin >> length;
	cout << "Enter how much gas is used:";
	cin >> used;
	ratio = 1.0 * length / used;
	cout << "average is " << ratio << endl;
}

//3.7.7
void test7()
{
	double r1;
	cout << "Enter the ratio:";
	cin >> r1;
	double used = r1 / 3.875;
	double length = 62.14;
	cout << r1 << " l/100km is equal to " << used / length << " mpg" << endl;
}


int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();


	return 0;
}