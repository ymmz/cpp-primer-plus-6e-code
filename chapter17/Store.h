#ifndef STORE_H
#define STORE_H
#include<fstream>
#include<string>
#include<iostream>
#include<vector>
class Store
{
public:
    Store(std::ofstream &os)
        :out(os)
    {}
    void operator()(const std::string &s)
    {
        int len=s.size();
        out.write((char*)&len,sizeof(len));
        out.write(s.c_str(),len);
    }
private:
    std::ofstream &out;
};

void ShowStr(const std::string &s)
{
    std::cout<<s<<std::endl;
}
void GetStrs(std::ifstream &in,std::vector<std::string> &arr)
{
    int len;
    while(in.read((char*)&len,sizeof(len)))
    {
        std::string s="";
        char ch;
        for(int i=0;i<len;i++)
        {
            in.get(ch);
            s+=ch;
        }
        arr.push_back(s);
    }
}

#endif