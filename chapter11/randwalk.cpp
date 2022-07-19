// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include<fstream>
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    unsigned long max_step=0;
    unsigned long min_step=__LONG_MAX__;
    unsigned long sum_step=0;
    unsigned long count_step=0;

    ofstream out("log.txt");
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        out<<"Target Distance: "<<target<<", Step Size: "<<dstep<<endl;
        out<<steps<<": (x,y) = ("<<result.xval()<<", "<<result.yval()<<")"<<endl;
        
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            out<<steps<<": (x,y) = ("<<result.xval()<<", "<<result.yval()<<")"<<endl;
        }
        count_step++;
        if(max_step<steps)
        {
            max_step=steps;
        }
        if(min_step>steps)
        {
            min_step=steps;
        }
        sum_step+=steps;
        out << "After " << steps << " steps, the subject has the following location:\n";
        out << result << endl;
        result.polar_mode();
        out << " or\n" << result << endl;
        out << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        out<<"--------------------------------------------------------"<<endl;
        out<<"now max step is "<<max_step<<", min step is "<<min_step<<", average step is "<<(double)sum_step*1.0/count_step<<endl;
        out<<"--------------------------------------------------------"<<endl;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
