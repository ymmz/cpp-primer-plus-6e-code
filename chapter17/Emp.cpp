#include"Emp.h"
using namespace std;

abstr_emp::abstr_emp()
{
    fname="empty";
    lname="empty";
    job="empty";
}
abstr_emp::abstr_emp(const std::string &fn,const std::string &ln,const std::string &j)
{
    fname=fn;
    lname=ln;
    job=j;
}
void abstr_emp::ShowAll() const
{
    cout<<"fname: "<<fname<<endl
        <<"lname: "<<lname<<endl
        <<"job: "<<job<<endl;
}
void abstr_emp::SetAll()
{
    cout<<"enter data:"<<endl;
    cout<<"first name: ";
    cin>>fname;
    cout<<"last name: ";
    cin>>lname;
    cout<<"job: ";
    cin>>job;
    cin.get();
    
}
void abstr_emp::WriteAll(std::ofstream &out)
{
    out<<fname<<endl<<lname<<endl<<job<<endl;
}
void abstr_emp::GetAll(std::ifstream &in)
{
    getline(in,fname);
    getline(in,lname);
    getline(in,job);
}
std::ostream& operator<<(std::ostream& os,const abstr_emp &e)
{
    os<<"name: "<<e.fname<<" "<<e.lname<<endl;
    os<<"job: "<<e.job<<endl;
    return os;
}
abstr_emp::~abstr_emp(){}

employee::employee()
    :abstr_emp()
{}
employee::employee(const std::string &fn,const std::string &ln,const std::string &j)
    :abstr_emp(fn,ln,j)
{}
void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}
void employee::SetAll()
{
    abstr_emp::SetAll();
}
void employee::WriteAll(std::ofstream &out)
{
    out<<'a'<<endl;
    abstr_emp::WriteAll(out);
}
void employee::GetAll(std::ifstream &in)
{
    abstr_emp::GetAll(in);
}

manager::manager()
    :abstr_emp()
{
    inchargeof=0;
}
manager::manager(const std::string &fn,const std::string &ln,const std::string &j,int ico)
    :abstr_emp(fn,ln,j)
{
    inchargeof=ico;
}
manager::manager(const abstr_emp &e,int ico)
    :abstr_emp(e)
{
    inchargeof=ico;
}
manager::manager(const manager& m)
    :abstr_emp(m)
{
    inchargeof=m.inchargeof;
}
void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    cout<<"inchargeof: "<<inchargeof<<endl;
}
void manager::SetAll()
{
    abstr_emp::SetAll();
    cout<<"inchargeof: ";
    cin>>inchargeof;
    cin.get();
}
void manager::WriteAll(std::ofstream &out)
{
    out<<'b'<<endl;
    abstr_emp::WriteAll(out);
    out<<inchargeof<<endl;
}
void manager::GetAll(std::ifstream &in)
{
    abstr_emp::GetAll(in);
    in>>inchargeof;
    in.get();
}
manager::~manager(){}


fink::fink()
    :abstr_emp()
{
    reportsto="empty";
}
fink::fink(const std::string &fn,const std::string &ln,const std::string &j,const std::string &rpo)
    :abstr_emp(fn,ln,j)
{
    reportsto=rpo;
}
fink::fink(const abstr_emp &e,const std::string &rpo)
    :abstr_emp(e)
{
    reportsto=rpo;
}
fink::fink(const fink& f)
    :abstr_emp(f)
{
    reportsto=f.reportsto;
}
void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout<<"reportsto: "<<reportsto<<endl;
}
void fink::SetAll()
{
    abstr_emp::SetAll();
    cout<<"reportsto: ";
    getline(cin,reportsto);
}
void fink::WriteAll(std::ofstream &out)
{
    out<<'c'<<endl;
    abstr_emp::WriteAll(out);
    out<<reportsto<<endl;
}
void fink::GetAll(std::ifstream &in)
{
    abstr_emp::GetAll(in);
    getline(in,reportsto);
}
fink::~fink(){}


highfink::highfink()
    :abstr_emp(),manager(),fink()
{}
highfink::highfink(const std::string &fn,const std::string &ln,const std::string &j,const std::string &rpo,int ico)
    :abstr_emp(fn,ln,j),manager(fn,ln,j,ico),fink(fn,ln,j,rpo)
{}
highfink::highfink(const abstr_emp &e,const std::string &rpo,int ico)
    :abstr_emp(e),manager(e,ico),fink(e,rpo)
{}
highfink::highfink(const fink &f,int ico)
    :abstr_emp(f),manager(f,ico),fink(f)
{}
highfink::highfink(const manager &m,const std::string &rpo)
    :abstr_emp(m),manager(m),fink(m,rpo)
{}
highfink::highfink(const highfink& h)
    :abstr_emp(h),manager(h),fink(h)
{}
void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout<<"inchargeof: "<<manager::InchargeOf()<<endl;
    cout<<"reportsto: "<<fink::ReportsTo()<<endl;
}
void highfink::SetAll()
{
    abstr_emp::SetAll();
    cout<<"inchargeof: ";
    cin>>manager::InChargeOf();
    cin.get();
    cout<<"reporrtsto: ";
    getline(cin,fink::ReportsTo());
}
void highfink::WriteAll(std::ofstream &out)
{
    out<<'d'<<endl;
    abstr_emp::WriteAll(out);
    out<<manager::InChargeOf()<<endl;
    out<<fink::ReportsTo()<<endl;
}
void highfink::GetAll(std::ifstream &in)
{
    abstr_emp::GetAll(in);
    in>>manager::InChargeOf();
    in.get();
    getline(in,fink::ReportsTo());
}
highfink::~highfink(){}