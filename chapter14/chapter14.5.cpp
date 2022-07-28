#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>
#include"Emp.h"
using namespace std;



int main()
{
    employee em("Trip","Harris","Thumper");
    cout<<em<<endl;
    em.ShowAll();
    manager ma("Amorphis","Spindragon","Nuancer",5);
    cout<<ma<<endl;
    ma.ShowAll();

    fink fi("Matt","Oggs","Oiler","Juno Barr");
    cout<<fi<<endl;
    fi.ShowAll();
    highfink hf(ma,"Curly Kew");
    hf.ShowAll();
    cout<<"pless a key for next phase:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();

    cout<<"Using an abstr_emp * pointer:\n";
    abstr_emp *tri[4]={&em,&fi,&hf,&hf2};
    for(int i=0;i<4;i++)
    {
        tri[i]->ShowAll();
    }
    return 0;
}
