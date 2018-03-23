// Chapter 10 Objects and Classes, Programming Exercises #3, Page 575
// chap10_4ex.h -- class definition for Sales
#ifndef sales_h_
#define sales_h_

namespace SALES
{
    const int QUARTERS = 4;
    class Sales
    {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        void setSales(const double ar[], int n);
        void setSales();
        void showSales() const;
    };
}

#endif