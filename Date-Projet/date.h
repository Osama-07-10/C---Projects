#include <chrono>
#include <iostream>
#include <string>

class date {
protected:
    int year, month, day;
public:
    friend istream & operator >>(istream & in,date & t );
    friend ostream & operator <<(ostream & out , date & t);

    date() {
        day=1;
        month=1;
        year=1990;


    }
    date (const date &d) {
        this->year=d.year;
        this->month=d.month;
        this->day=d.day;


    }
    date& operator =(const date &x) {

        this->year=x.year;
        this->month=x.month;
        this->day=x.day;
        return *this;
    }



        char* toString() {
        check(day,month,year);
            char *result=new char[11];


            result[0] = (day / 10) + '0';
            result[1] = (day % 10) + '0';
            result[2] = '/';


            result[3] = (month / 10) + '0';
            result[4] = (month % 10) + '0';
            result[5] = '/';


            result[6] = (year / 1000) + '0';
            result[7] = ((year / 100) % 10) + '0';
            result[8] = ((year / 10) % 10) + '0';
            result[9] = (year % 10) + '0';
            result[10] = '\0';

            return result;


    }
    int  check(int day,int month,int year) {
        if (month < 1 || month > 12) {
            cout << "Invalid month!" << endl;
            return 1;
        }

        if (day < 1) {
            cout << "Invalid day!" << endl;
            return 1;
        }
         if (day>31) {
            cout<<"invalid input\n";

            return 1;
        }

            if (month==2 &&day >28) {
            if (year%4==0 && year % 100 != 0 || year%400==0) {
                cout<<"invalid input\n"<<endl;

                return 1;
            }


            }
             if (month==4||month==6|| month==9||month==11 && day>30) {
                cout<<"invalid input\n";

                return 1;
            }
           else return 0;

        }
    void setdate (int d,int m,int y) {
        if (check(d,m,y)==0) {
            ;

            this-> day=d;
            this->month=m;
            this->year=y;
        }
        else{
            cout<<"invalid date "<<d<<'/'<<m<<'/'<<y<<endl;
            return;
        }
    }

    int getday() {
        return day;
    }
    int getmonth() {
        return month;

    }
    int getyear() {
        return year;

    }
    void leapyear() {
        if (year%400==0) {
            cout<< "true\n";
        }
        else if (year % 100 ==0){
            cout << "false\n";
        }
        else if (year%4==0) {
            cout<< "true\n";
        }
        else
            cout<< "false\n";
    }
    int compare(const date& o) {

            if (this->year > o.year)
                return -1;
            else if (this->year < o.year)
                return 1;
            else {
                if (this->month > o.month)
                    return -1;
                else if (this->month < o.month)
                    return 1;

                else {
                    if (this->day > o.day)
                        return -1;
                    else if (this->day < o.day)
                        return 1;
                    else
                        return 0;
                }
            }
        }

    date copyform( date & a ) {

        this->year=a.year;
        this->month=a.month;
        this->day=a.day;

    }
    ~date() {

    };
    };




istream & operator >>(istream & in,date & t ) {
    t.check(t.day,t.month,t.year);
    char x='/';
    cin>>t.day>>x>>t.month>>x>>t.year;
    return in;
};

ostream & operator <<(ostream & out , date & t) {
    t.check(t.day,t.month,t.year);
    cout<<t.day<<"/"<<t.month<<"/"<<t.year;
    return out;
}

// Created by Osama on 23/09/2025.
//

#ifndef UNTITLED1_DATE_H
#define UNTITLED1_DATE_H

#endif //UNTITLED1_DATE_H