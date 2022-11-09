//#include <iostream>
//
//class MyBool
//{
//public:
//	MyBool(bool b) : m_val(b) {};
//
//	
//
//	//TODO: Your code here
//	bool operator&&(const MyBool other) const{
//		return other.m_val && this->m_val;;
//	};
//	void set_mval(bool val)
//	{
//		this->m_val = val;
//	}
//	bool get_mval()
//	{
//		return this->m_val;
//	}
//
//
//private:
//	bool m_val;
//};
//
//MyBool notNull(int* intPtr)
//{
//	return intPtr != nullptr;
//}
//
//MyBool greaterThanZero(int* intPtr)
//{
//	return *intPtr > 0;
//}
//
//int main(int argc, char* argv[])
//{
//	int* a = nullptr;
//	int val = 5;
//	int* b = &val;
//
//
//	// the long way to check
//	if (a != nullptr && *a > 0)
//	{
//		++* a;
//		std::cout << "*a is " << *a << std::endl;
//	}
//
//	// using our functions
//	if (notNull(b) && greaterThanZero(b))
//	{
//		++* b;
//		std::cout << "*b is " << *b << std::endl;
//	}
//
//	// using our functions again
//
//	if (notNull(a) && greaterThanZero(a))
//	{
//		++* a;
//		std::cout << "*a is " << *a << std::endl;
//	}
//
//	return 0;
//}
////2.
////Yes, it was successfully compiled, there was no compilation error - the syntax was normal,
//// the compiler did not detect an error.
////3.
////No, There was  runtime error,
////4.
////A runtime error was made because the value of the pointer was not updated and
////we tried to check if  nullptr is value bigger then 0 when we use greaterThanZero func
////The boolean  operator&& and cannot implement short-circuit evaluation.
////operator&& they do not sequence their left operand before the right one. 
////so we gat start the greaterThanZero 
