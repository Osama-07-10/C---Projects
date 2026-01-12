//
// Created by Osama on 17/12/2025.
//

#ifndef PROJECT_2_LINKED_STACK_H
#define PROJECT_2_LINKED_STACK_H


#include "ArrayStack.h"
template<typename t>

struct listNodeType {
    arraystack<t>* stk;
    listNodeType<t> * back;
    listNodeType<t>* next;
};
template<typename t>
class DLCList :public listNodeType<t> {
private:
    listNodeType<t>* cur;
    int size;

public:

    DLCList(int n = 6) {
        size = n;
       cur = new listNodeType<t>;
        cur->stk = new arraystack<t>(100);
        cur->next = cur;//عشان دائرية ما بزبط يكون فيه null
        cur->back = cur;
        listNodeType<t>* p;
        p=cur;
        for (int i = 0; i < size-1; i++) {
            p->next = new listNodeType<t>;
            p->next->stk = new arraystack<t>(100);
            p->next->back = p;
            p=p->next;
        }
        p->next = cur;
        cur->back = p;
        }
   ;
    ~DLCList() {

        if (cur==nullptr) {
            return;
        }
        listNodeType<t>* first=cur->next;

for (int i=0; first!=cur ;++i) {
    listNodeType<t>* last=first;
    first=first->next;
    delete last->stk;
    delete last;
}
        delete first->stk;
        delete first;
        cur=nullptr;
        size=0;



    };

    bool deleteCurrent(){
if (size==0) {
    return false;
}
        if (cur->next == cur) {
            delete cur->stk;
            delete cur;
            cur = nullptr;
            size = 0;
            return true;
        }

        listNodeType<t>*p=cur;
        cur=cur->next;
        cur->back=p->back;
        p->back->next=cur;
        delete p->stk;
        delete p;

        --size;
return true;



    };
    arraystack<t>*  getCurrentStack() const {
        if (cur==nullptr||size==0) {
            return nullptr;
        }
        return cur->stk;
    };
    void    goBackward(int nNodes) {
if (nNodes==0) {
    return;
}

for (int i=0;i<nNodes;++i) {
    if (nNodes==0||cur==nullptr) {return;}
    cur=cur->back;

}

    };
    void goForward(int nNodes) {
        if (nNodes==0||cur==nullptr) {return;}
        for (int i=0;i<nNodes;++i) {
            cur=cur->next;

        }
    };

    bool    isEmpty() {
        return cur==nullptr||size==0;
    };
};


#endif //PROJECT_2_LINKED_STACK_H