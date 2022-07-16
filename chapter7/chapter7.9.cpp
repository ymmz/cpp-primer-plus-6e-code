#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

const int SLEN=30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[],int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[],int n);


int main()
{
    cout<<"Enter class size: ";
    int class_size;
    cin>>class_size;
    while(cin.get()!='\n')
    {
        continue;
    }
    student *ptr_stu=new student[class_size];
    int entered=getinfo(ptr_stu,class_size);
    for(int i=0;i<entered;i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete[] ptr_stu;
    cout<<"Done"<<endl;


    return 0;
}

int getinfo(student pa[],int n)
{
    int count=0;
    while(count<n)
    {
        cout<<"Enter student name: ";
        cin.getline(pa[count].fullname,SLEN);
        if(pa[count].fullname[0]=='\0')
        {
            break;
        }
        //cin.get();
        cout<<"Enter student hobby: ";
        cin.getline(pa[count].hobby,SLEN);
        //cin.get();
        cout<<"enter student ooplevel: ";
        cin>>pa[count].ooplevel;
        cin.get();
        count++;

    }
    cout<<"enter info finish!"<<endl;
    return count;
}
void display1(student st)
{
    cout<<"display1 info"<<endl
        <<"student name: "<<st.fullname<<endl
        <<"student hobby: "<<st.hobby<<endl
        <<"student opplevel: "<<st.ooplevel<<endl
        <<"display1 finish!"<<endl<<endl;
}
void display2(const student *ps)
{
    cout<<"display2 info"<<endl
        <<"student name: "<<ps->fullname<<endl
        <<"student hobby: "<<ps->hobby<<endl
        <<"student opplevel: "<<ps->ooplevel<<endl
        <<"display2 finish!"<<endl<<endl;
}
void display3(const student pa[],int n)
{
    cout<<"display3 info"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"student name: "<<pa[i].fullname<<endl
        <<"student hobby: "<<pa[i].hobby<<endl
        <<"student opplevel: "<<pa[i].ooplevel<<endl<<endl;
        
    }
    cout<<"display3 finish!"<<endl;
}