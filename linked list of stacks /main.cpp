#include <iostream>
#include "linked-stack.h"
#include "ArrayStack.h"
#include "fstream"
using namespace std;


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
/*
-n		invoke goBackward(n)
n		invoke goForward(n)
0 P char	push char on the stack in the current list node
0 D 		use "deleteCurrent" to delete the current listNode and its stack
*/


int main()
{

    fstream file;
    file.open("project.txt");
    if (!file.is_open()){
    cout << "Error opening file" << endl;}
    else cout << "File opened" << endl;


int number;
    file>>number;
    DLCList<char>l(number);
    int r;
    while ( file>>r) {
        if (r<0) {
            l.goBackward(-r);
        }
        else if (r>0) {
            l.goForward(r);
        }
        else {

            char w;
            file>>w;
            if (w=='P') {
                char s;
                file>>s;
                l.getCurrentStack()->push(s);

            }
            else if (w=='D') {
                l.deleteCurrent();
            }

        }

    }


while (!l.isEmpty()) {
    arraystack<char>*a=l.getCurrentStack();
    while (!a->empty()) {
        cout<<a->top();
        a->pop();
    }
    cout<<" ";
    l.deleteCurrent();




}
    file.close();

    return 0;

}