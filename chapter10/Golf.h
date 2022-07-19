#ifndef GOLF_H
#define GOLF_H
class Golf
{
public:
    Golf();
    Golf(const char *name,int hc=10);
    void setgolf();
    void handicap(int hc);
    void showgolf() const;
private:
    static const int LEN=40;
    char fullname[LEN];
    int handicap_;
};


#endif