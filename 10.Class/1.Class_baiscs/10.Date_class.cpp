#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std ;

class Date
{
  public :
    Date(int d ,int m,int y);
    void set_date(int d , int m , int y) ;
    void print_date() ;
    void inc_one_day() ;
    bool equals(Date d);
    //getters methods
    int get_day(){return this->day;}
    int get_month(){return month;}
    int get_year(){return year;}
  private:
    int day;
    int month;
    int year ;
};
Date::Date(int d,int m,int y)
{
  set_date(d,m,y);
}
bool is_leap_year(int year)
{
  int r = year % 33 ;
  return (r==1 ||r==5 ||r==9 ||r==13 ||r==17 ||r==22 ||r==26 ||r==30);
}
int days_of_month(int m , int y)
{
  if(m<7)
    return 31 ;
  else if (m<12)
    return 30 ;
  else if (m==12)
    return is_leap_year(y) ? 30:29 ;
  else
    abrot();
}
void Date::set_date(int d,int m,int y)
{
  if(y<0 || m<1 || m >12 ||d<1 || d > days_of_month(m,y))
        abort();
  day = d ;
  month = m ;
  year = y ;
}
void Date::print_date()
{
  cout << day << '/' << month << '/' << year << endl ;
}
void Date::inc_one_day()
{
  day++;
  if (day > days_of_month(month,year))
  {
    day = 1 ;
    month++;
    if(month > 12)
    {
      month = 1;
      year++;
    }
  }
}
bool Date::equals(Date date)
{
  return (day == date.day && month == date.month && year == date.year) ;
}

int main() {
  Date bd(30,12,1387);
  vector<Date> dates ;
  dates.push_back(bd);
  dates.push_back(Date(1,1,1));
  dates[0].print_date();

  vector<Date> dates2(100,Date(1,1,1));

  return 0;
}
