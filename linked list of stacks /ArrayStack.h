
//
// Created by Osama on 02/12/2025.
//

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
template<typename t>
class arraystack {
private:
    t* st;
    int maxcapacity;
    int n;
public:
    arraystack(int maxsize=5 ) {
        st = new t[maxsize];
        maxcapacity = maxsize;
        n=0;

    };
    ~arraystack() {
        if (st)delete []st;st=nullptr;
    };
    bool empty() {
        return n<=0;
    }
    int size() {
        return n;
    }
    arraystack(const arraystack<t> & obj):st(nullptr) {
        copy(obj);
        //اذا كانت فاضة اذا الفاضية بتكون trash بالتالي رح تدخل علي الشرط ويحذف التراش وبالتالي خطآ


    };
    void copy(const arraystack<t> & obj) {
        if (obj.empty()){return;}
        if (st) {
            delete [] st;
        }
        st=new t[obj.maxcapacity];
        maxcapacity = obj.maxcapacity;
        n=obj.n;
        for (int i=0;i<obj.size();++i) {
            st[i] = obj.st[i];
        }



    };
    arraystack<t> & operator=(const arraystack<t>& obj) {
        if (this==&obj) {return *this;}
        copy(obj);

        return *this;
    }


    ;bool full(){
        return n>=maxcapacity;
    }
    virtual void push(const t& elem) {
        if (full()) {return;}
        st[n]=elem;
        ++n;

    };
    virtual t& top() {
        if (empty()) {exit(1);}
        return st[n-1];

    };
    virtual void pop() {
        if (empty()) {exit(1);}
        --n;
    };



};
#endif // ARRAYSTACK_H
