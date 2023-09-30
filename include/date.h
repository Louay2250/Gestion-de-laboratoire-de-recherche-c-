#ifndef DATE_H
#define DATE_H


class date
{
public:
    int days;
    int months;
    int years;
    void setDays(int d);
    void setMonths(int m);
    void setYears(int y);
    int getDays();
    int getMonths();
    int getYears();
    void addDays(int numDays);


    date(int d=0,int m=0, int y=0);
    void print();


    virtual ~date();

protected:

private:

};

#endif // DATE_H
