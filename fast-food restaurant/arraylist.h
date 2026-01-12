//
// Created by Osama on 17/10/2025.
//

#ifndef MINI_PROJECT_ARRAYLIST_H
#define MINI_PROJECT_ARRAYLIST_H



#pragma once

template<typename T>
class ArrayList // concrete class
{
protected:
	int n=0;
	T* a; // container
	int capacity;// maximum size
	void resize(int capacity);
public:
	ArrayList(int newCapacity = 5) {
		capacity = newCapacity;
		a = new T[capacity];
		}
	ArrayList(const ArrayList<T> & obj) {
		this-> capacity = obj.capacity;
		this-> a = new T[this->capacity];
		this->n = obj.n;
		for (int i = 0; i < obj.n; ++i)
			this->a[i] = obj.a[i];
	}
	~ArrayList() {
		if (a) delete[] a;
		a = nullptr;
	}
	ArrayList<T>& operator=(const ArrayList<T>& obj) {
		if (this == &obj)  return *this;
		if (this->a) delete[] a;
		this->capacity = obj.capacity;
		this->a = new T[this->capacity];
		this->n = obj.n;
		for (int i = 0; i < obj.n; ++i)
			this->a[i] = obj.a[i];
		return *this;
	}
virtual bool empty()const {
		return n<=0;
	}
virtual int size()const {return n;}

	virtual bool  add(const T& item) {
		if (this->size() >= capacity)
			resize(1);
		a[n] = item;
		++n;
		return true;

	};
	virtual bool remove(const T& item){
		if (this->empty()) return false;
		int pos = find(item);
		if (pos == -1)  return false;

		for (int i = pos; i < this->n-1; i++)
			a[i] = a[i + 1];

		this->n;
		return true;
	}
	virtual bool update(const T& newitem, int pos) { this->a[pos] = newitem; return true; }

	virtual int find(const T& item) const{

		if (this->empty())  return -1;
		int i = 0;
		for (i = 0; i < this->n && a[i] != item; ++i);
		if (i < this->n)  return i;
		else
			return -1;
	}
	virtual void clearAll(){
		this->n = 0;
	}
 T & get(int i) {

		return a[i];

	}
	};
// template<typename T>
//  bool  ArrayList<T>::add(const T& item) {
// 	 if (this->size() >= capacity)  resize(capacity);
// 	 int pos = 0;
// 	 for (; pos <this->n && item > a[pos]; ++pos);
// 	 for (int i = this->n; i > pos; --i)
// 		 a[i] = a[i - 1];
// 	 this->a[pos] = item;
// 	 this->n++;
// 	 return true;
// }
 template<typename T>
 void ArrayList<T>::resize(int newcapacity) {
	 capacity = capacity + newcapacity;
	 T* newArray = new  T[capacity];
	 for(int i = 0; i < this->n; ++i)
		 newArray[i] = this->a[i];
	 delete[] this->a;
	  a = newArray;

 }

#endif //MINI_PROJECT_ARRAYLIST_H