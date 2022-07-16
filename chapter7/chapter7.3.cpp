#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(box b);
void set(box *b);
int main()
{
    box b={"test",4,5,6,0};
    set(&b);
    show(b);

    return 0;
}
void show(box b)
{
    cout<<"box.maker is: "<<b.maker<<endl
        <<"box.height is: "<<b.height<<endl
        <<"box.width is: "<<b.width<<endl
        <<"box.length is: "<<b.length<<endl
        <<"box.volume is: "<<b.volume<<endl;
}
void set(box* b)
{
    b->volume=b->height*b->width*b->length;
}