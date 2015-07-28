#include<iostream>
using namespace std;

template<class T>
class LinearList
{
private:
	// 0������Ԫ�ص����򼯺�
	T *elements;
	int length;
	int size;

public:
	// ���캯��
	LinearList(int MaxListSize = 10);

	// ��������,ɾ����
	~LinearList();

	// �����Ϊ���򷵻�t r u e�����򷵻�false
	bool IsEmpty() const;

	// ���ر�Ĵ�С (������Ԫ�ظ���)
	int Length() const;

	// Ѱ�ұ��е�k ��Ԫ�أ����������浽x �У���������ڣ��򷵻�false
	bool Find(int k, T& x) const; 

	// ����Ԫ��x�ڱ��е�λ�ã����x ���ڱ��У��򷵻�0
	int Search(const T& x) const; 

	// ɾ�����е�k ��Ԫ�أ����������浽x �У����������޸ĺ�����Ա�
	LinearList<T> Delete(int k, const T& x);

	// �ڵ�k��Ԫ��֮�����x�����������޸ĺ�����Ա�
	LinearList<T> Insert(int k, const T& x);



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
	assert(index >= 0 && index < this->length);

}

template<class T>
LinearList<T> LinearList<T>::Insert(int index, const T& obj) const
{
	assert(index >= 0 && index < this->length);

}