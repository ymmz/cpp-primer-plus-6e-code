// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include<exception>
using namespace std;

class message:public logic_error
{
public:
    message(double a=0,double b=0,const char *s="exception error\n")
    :v1(a),v2(b),logic_error(s)
    {}
    void show()const
    {
        cout<<"arguments "<<v1<<" and "<<v2<<" has error! "<<what()<<endl;
    }

private:
    double v1;
    double v2;
};
class bad_hmean:message
{
private:
    double v1;
    double v2;
public:
    bad_hmean(double a = 0, double b = 0) : v1(a), v2(b),message(a,b,"invalid arguments: a = -b\n"){}
    void mesg();
};

inline void bad_hmean::mesg()
{   
    std::cout << "hmean(" << v1 << ", " << v2 <<"): "<<endl;
    show();
}

class bad_gmean:message
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0, double b = 0) : v1(a), v2(b),message(a,b,"arguments should be >= 0\n"){}
    void mesg();
};

inline void bad_gmean::mesg()
{  
    std::cout << "gmean(" << v1 << ", " << v2 <<"): "<<endl;
    show();
}
