// vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<memory>
using namespace std;

struct Review {
    string title;
    int rating;
    double price;
};

bool operator<(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2);
bool FillReview(shared_ptr<Review> &rr);
void ShowReview(const shared_ptr<Review> &rr);
bool cmp1(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2);
bool cmp2(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2);
bool cmp3(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2);
bool cmp4(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2);
bool cmp5(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2);
int main()
{

    vector<shared_ptr<Review> > books;
    shared_ptr<Review> temp;
    while (FillReview(temp))
        books.push_back(temp);
    if (books.size() > 0)
    {
        cout << "Thank you. You entered the following "
             << books.size() << " ratings:\n"
              << "Rating\tBook\tprice\n";
        for_each(books.begin(), books.end(), ShowReview);
        vector<shared_ptr<Review> > show(books.begin(),books.end());
        char s;
        while(true)
        {
            cout<<"please how to sort:\n"
                <<"a)origin\tb)by title\tc)by rate up\n"
                <<"d)by rate down\te)by price up\tf)by price down\n"
                <<"q)quit\n";
            cin>>s;
            if(s=='q')
            {
                cout<<"Bye!"<<endl;
                break;
            }
            cin.get();
            switch(s)
            {
                case 'a':
                    cout << "Sorted by origin:\nRating\tBook\tprice\n";
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
                case 'b':
                    cout << "Sorted by title:\nRating\tBook\tprice\n";
                    sort(show.begin(),show.end(),cmp1);
                    for_each(show.begin(),show.end(), ShowReview);
                    break;
                case 'c':
                    cout << "Sorted by rate up:\nRating\tBook\tprice\n";
                    sort(show.begin(),show.end(),cmp2);
                    for_each(show.begin(),show.end(), ShowReview);
                    break;
                case 'd':
                    cout << "Sorted by rate down:\nRating\tBook\tprice\n";
                    sort(show.begin(),show.end(),cmp3);
                    for_each(show.begin(),show.end(), ShowReview);
                    break;
                case 'e':
                    cout << "Sorted by price up:\nRating\tBook\tprice\n";
                    sort(show.begin(),show.end(),cmp4);
                    for_each(show.begin(),show.end(), ShowReview);
                    break;
                case 'f':
                    cout << "Sorted by price down:\nRating\tBook\tprice\n";
                    sort(show.begin(),show.end(),cmp5);
                    for_each(show.begin(),show.end(), ShowReview);
                    break;
                default:
                    cout<<"please valid char~~"<<endl;
            }
        }
    }
    else
        cout << "No entries. ";
    cout << "Bye.\n";
    // cin.get();
    return 0;
}

bool operator<(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}


bool FillReview(shared_ptr<Review> &rr)
{
   rr.reset(new Review);
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin,rr->title);
    if (rr->title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr->rating;
    std::cout << "Enter book price: ";
    std::cin >> rr->price;
    if (!std::cin)
        return false;
    // get rid of rest of input line
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const shared_ptr<Review> &rr)
{
    std::cout << rr->rating << "\t" << rr->title <<'\t'<<rr->price<< std::endl; 
}
bool cmp1(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2)
{
    return r1->title<r2->title;
}
bool cmp2(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2)
{
    return r1->rating<r2->rating;
}
bool cmp3(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2)
{
    return r1->rating>r2->rating;
}
bool cmp4(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2)
{
    return r1->price<r2->price;
}
bool cmp5(const shared_ptr<Review> &r1, const shared_ptr<Review> &r2)
{
    return r1->price>r2->price;
}