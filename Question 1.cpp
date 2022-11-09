//#include <functional>
//#include <iostream>
//using namespace std;
//
////1.Using std::function<>
////2.Passing as Pointer
////3.Using Lambdas
//
//float applyF1(float a, float b, function<float(float, float)> f)
//{
//	return f(a, b);
//}
//
//float applyF2(float a, float b, float(*f) (float,float))
//{
//	return f(a, b);
//}
//
//
//float applyF3(float a, float b, std::function<float(float, float)> f)
//{
//	return f(a, b);
//}
//
//float f2(float a, float b) {
//	return a * b;
//}
//float f1(float a, float b) {
//	return a + b;
//}
//
//int main(int argc, char* argv[])
//{
//	float fNum = 0;
//	
//	// calculate fNum = (2 * 3) + (4 * 5) + 6
//	//TODO: Your code here
//	//1.
//	// applyF1(4.0, 5.0, f2);
//	//2.
//	// applyF2(4.0, 5.0, f2);
//	//3.
//	//applyF3(2.0, 3.0, [](int x, int y) -> int {return x * y; });
//
//	fNum = applyF2(applyF2(applyF2(2.0, 3.0, f2), applyF2(4.0, 5.0, f2), f1), 6.0, f1);
//	cout << fNum;
//
//	return 0;
//}