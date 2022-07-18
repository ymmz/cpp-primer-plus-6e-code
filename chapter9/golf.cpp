#include "golf.h"
using namespace std;

void setgolf(golf &g,const char *name,int hc)
{
    cout<<"set golf fot provided info"<<endl;
    strcpy(g.fullname,name);
    g.handicap=hc;
}
int setgolf(golf &g)
{
    cout<<"set golf for your entered info"<<endl;
    cout<<"enter name: "<<endl;
    cin.getline(g.fullname,Len);
    if(g.fullname[0]=='\0')
    {
        cout<<" enter empty string !"<<endl;
        return 0;
    }
    cout<<"enter handicap: "<<endl;
    cin>>g.handicap;
    cin.get();



}
void handicap(golf &g,int hc)
{
    cout<<"set handicap for new value"<<endl;
    g.handicap=hc;
}
void showgolf(const golf &g)
{
    cout<<"g.fullname: "<<g.fullname<<endl
        <<"g.handicap: "<<g.handicap<<endl;
}