#include<iostream>
using namespace std;

template<class T>
class LinearList
{
private:
	// 0个或多个元素的有序集合
	T *elements;
	int length;
	int size;

public:
	// 构造函数
	LinearList(int MaxListSize = 10);

	// 析构函数,删除表
	~LinearList();

	// 如果表为空则返回t r u e，否则返回false
	bool IsEmpty() const;

	// 返回表的大小 (即表中元素个数)
	int Length() const;

	// 寻找表中第k 个元素，并把它保存到x 中；如果不存在，则返回false
	bool Find(int k, T& x) const; 

	// 返回元素x在表中的位置；如果x 不在表中，则返回0
	int Search(const T& x) const; 

	// 删除表中第k 个元素，并把它保存到x 中；函数返回修改后的线性表
	LinearList<T> Delete(int k, const T& x);

	// 在第k个元素之后插入x；函数返回修改后的线性表
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