#include <iostream>
#include <cstdlib>
using namespace std;
#include "date.h"
#include<fstream>
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    ofstream  f;;
    ifstream d;
    d.open("osama.txt");
    if (!d.is_open()) {
        cout<<"Can't op\n";
    }
    else
        cout<<"Open\n";


    cout<<"Enter the number of date you wont to enter from file\n";
    int x;
    cin>>x;

    date *c=new date[x];

    int n, m, y;
    char slash;

    cout << "Dates from file:\n";
    int i=0;
    while (d >> n >> slash >> m >> slash >> y) {
        c[i].setdate(n,m,y);
        ++i;
    }
    if (i==x) {
        for (int j=0;j<i;++j) {
            cout<<"Dates "<< c[j].toString()<<endl;

        }


        cout<<" \n enter the date via kb\n";
        cout<<"if you wont to modify the date press 1 if not press 0";
        int q;
        cin>>q;
     if (q>1){cout<<"theres error int the number of dates entered\n";return 0;}//this for modify
        else if (q==1) {
            cout<<"enter the number of the date you wont to edit \n";
            int y;
            cin>>y;
            if (y>x){cout<<"invalid enterd\n";return 1;}// number of date in array

                cout<<"enter the the date you wont \n";
                int r,f,g;
                cin>>r>>f>>g;;
                c[y-1].setdate(r,f,g);
                cout<<"the date is\n"<<c[y-1].toString()<<endl;


        }

            f.open("osama.txt");
            if (!d.is_open()) {
                cout<<"Can't op\n";
            }
            else
                cout<<"Open\n";

            for (int j=0;j<i;++j) {
                f<< c[j].toString()<<endl;

            }
            cout<<"Test and display if the year is leap or not\n";
            for (int z=0;z<x;++z) {
                cout<<c[z]<<endl;
                c[z].leapyear();
            }
            cout<<"Compare all dates pairwise and display the results\n";
            for (int y=0;y<x-1;++y) {
                cout<<c[y].compare(c[y+1])<<endl;
            }



        ////to here/////
        ///
        // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
    }
    else{cout<<"invalid enterd \n";}//for any problem in number of date in file

    f.close();
        delete[] c;

}