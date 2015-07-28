#include<iostream>
#include "Exceptions.h"
using namespace std;

template<class T>
class LinearList
{
private:
	// 0������Ԫ�ص����򼯺�
	T *elements;

	// ���Ա��е�Ԫ�ظ���
	int length;

	// ���Ա������
	int size;

public:
	// ���캯��
	LinearList(int MaxListSize = 10);

	// ��������,ɾ����
	~LinearList();

	// �����Ϊ���򷵻�true,���򷵻�false
	bool IsEmpty() const;

	// ���ر�Ĵ�С (������Ԫ�ظ���)
	int Length() const;

	// Ѱ�ұ��е�index ��Ԫ�أ����������浽obj�У���������ڣ��򷵻�false
	bool Find(int index, T& obj) const; 

	// ����Ԫ��obj�ڱ��е�λ�ã����obj ���ڱ��У��򷵻�0
	int Search(const T& obj) const;

	// ɾ�����е�index ��Ԫ�أ����������浽obj �У����������޸ĺ�����Ա�
	LinearList<T> Delete(int index, const T& obj);

	// �ڵ�k��Ԫ��֮�����obj�����������޸ĺ�����Ա�
	LinearList<T> Insert(int index, const T& obj);
};

template<class T>
LinearList<T>::LinearList(int MaxListSize = 10)
{
	assert(MaxListSize >= 0);
	this->elements = new T[size = MaxListSize];
	length = 0;
}

template<class T>
LinearList<T>::~LinearList()
{
	delete []this->elements;
	this->elements = NULL;
}

template<class T>
bool LinearList<T>::IsEmpty() const
{
	return this->length == 0;
}

template<class T>
int LinearList<T>::Length() const
{
	return this->length;
}

template<class T>
bool LinearList<T>::Find(int index, T& obj) const
{
	if (index >= 0 && index < this->length)
	{
		obj = this->elements[index];
		return true;
	}
	return false;
}

template<class T>
int LinearList<T>::Search(const T& obj) const
{
	for (int index = 0; index < this->length; ++index)
	{
		if (this->elements[index] == obj)
			return index;
	}
	return -1;
}

template<class T>
LinearList<T> LinearList<T>::Delete(int index, const T& obj) const
{
	if (this->Find(index, obj))
	{
		for (int i = index, n = --this->length; i < n; ++i)
			this->elements[i] = this->elements[i + 1];
		return *this;
	}
	else throw OutOfBounds();
}

template<class T>
LinearList<T> LinearList<T>::Insert(int index, const T& obj) const
{
	if (index >= 0 && index < this->length)
	{
		for (int i = index, n = ++this->length; i < n; ++i)
			this->elements[i + 1] = this->elements[i];
		this->elements[index] = obj;
		return *this;
	}
	else if (index < 0 || index>length)
		throw OutOfBounds();
	else throw NoMem();
}