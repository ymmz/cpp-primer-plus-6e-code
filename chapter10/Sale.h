#ifndef SALE_H
#define SALE_H

namespace SALES
{
class Sales
{
public:
    Sales();
    Sales(const double ar[],int n);
    void setSales();
    void showSales() const;
private:
    static const int QUARTERS=4;
    double sales[QUARTERS];
    double average;
    double min;
    double max;
};
}

#endif