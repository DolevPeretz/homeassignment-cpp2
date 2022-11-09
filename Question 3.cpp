//#include <iostream>
//#include <stdexcept>
//using namespace std;
//
//
//class CVectorInt
//{
//	 //TODO: your code here
//public:
//	CVectorInt(int a)
//	{ 
//		this->capacityP = a;
//		this->Array_num = new int[this->capacityP];
//
//	}
//	int size()
//	{ 
//		return this->sizeP;
//	}
//
//	int capacity()
//	{ 
//		return this->capacityP; 
//	}
//	void push_back(int n)
//	{
//		
//		this->Array_num[sizeP] = n;
//		++sizeP;
//		isFull();
//	}
//	void isFull()
//	{
//		if (sizeP == capacityP )
//		{
//			int *temp= new int[this->capacityP * 2];
//			for (int i = 0; i < this->capacityP; i++) 
//			{
//				temp[i] = this->Array_num[i];
//			}
//			this->capacityP *= 2;
//			delete[] this->Array_num;
//			this->Array_num = temp;
//		}
//	
//	}
//	void check_helf() 
//	{
//		int helf_cap = this->sizeP * 2;
//		if ((this->capacityP) > helf_cap) 
//		{
//			if (this->capacityP % 2 == 1)
//			{
//				this->capacityP = (this->capacityP + 1) / 2;
//			}
//			else {
//				this->capacityP /= 2;
//			}
//		}
//	}
//	void pop_back() 
//	{
//		--sizeP;
//		check_helf();
//		int* temp= new int[this->capacityP];
//		for (int i = 0; i < this->sizeP; i++)
//		{
//			temp[i] = this->Array_num[i];
//		}
//		delete[] this->Array_num;
//		this->Array_num = temp;
//	}
//	
//	bool empty() 
//	{
//		if (this->sizeP == 0) 
//		{
//			return true;
//		}
//		return false;
//	}
//	void reserve(int m) 
//	{
//		this->capacityP += m;
//		int* temp = new int[this->capacityP];
//		if (this->sizeP ) 
//		{
//			for (int i = 0; i < this->sizeP; i++)
//			{
//				temp[i] = this->Array_num[i];
//			}
//		}
//		delete[] this->Array_num;
//		this->Array_num = temp;
//	}
//	const int& operator[](int index)const
//	{
//		if (index < 0 || index >= this->sizeP) {
//			cout << "\n Error : inndex " << index << "out of range" << endl;
//			exit(1);;
//		}
//		return this->Array_num[index];
//	}
//	int& operator[](int index) 
//	{
//		if (index < 0 || index >= this->sizeP) {
//			cout << "\n Error : inndex " << index << "out of range" << endl;
//			exit(1);;
//		}
//		return this->Array_num[index];
//	}
//	void clear() 
//	{
//		delete[] this->Array_num;
//		this->sizeP = 0;
//		this->capacityP = 0;
//	}
//	void remove(int index)
//	{
//		int point = 0;
//		this->sizeP -= 1;
//		check_helf();
//		int* temp = new int[this->capacityP];
//		for (int i = 0; i < this->sizeP+1; i++)
//		{
//			if (i != index) 
//			{
//				temp[point] = this->Array_num[i];
//				point++;
//			}
//			continue;
//		}
//		delete[] this->Array_num;
//		this->Array_num = temp;
//	}
//	
//protected:
//
//private:
//	int sizeP = 0;
//	int capacityP;
//	int *Array_num;
//	
//};
//
//int main(int argc, char* argv[])
//{
//	// some code to use the class
//	try
//	{
//		CVectorInt v(5);
//
//		for (int i = 0; i < 5; i++)
//		{
//			v.push_back(i);
//		}
//		std::cout << "the size is: " << v.size() << std::endl;
//		std::cout << "the capacity is: " << v.capacity() << std::endl;
//		v.push_back(1);
//		std::cout << "the size is: " << v.size() << std::endl;
//		std::cout << "the capacity is: " << v.capacity() << std::endl;
//		while (!v.empty())
//		{
//			v.pop_back();
//		}
//		std::cout << "the size is: " << v.size() << std::endl;
//		std::cout << "the capacity is: " << v.capacity() << std::endl;
//		v.reserve(15);
//		std::cout << "the size is: " << v.size() << std::endl;
//		std::cout << "the capacity is: " << v.capacity() << std::endl;
//		for (int i = 0; i < 15; i++)
//		{
//			v.push_back(i);
//		}
//		v[5] = 3;
//		for (int i = 0; i < v.size(); i++)
//		{
//			std::cout << v[i] << " ";
//		}
//		std::cout << std::endl;
//		v.clear();
//		std::cout << "the size is: " << v.size() << std::endl;
//		std::cout << "the capacity is: " << v.capacity() << std::endl;
//	}
//	catch (const std::exception& e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//
//	return 0;
//}