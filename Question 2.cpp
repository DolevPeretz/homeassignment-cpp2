//#include <chrono>
//#include <iostream>
//#include <vector>
//#include <thread>
//#include <Windows.h>
//
//
//
//constexpr size_t ITERATIONS = 1000 * 1000ULL;
//constexpr size_t OP1_PARAM = 2ULL;
//constexpr size_t OP2_PARAM = 1ULL;
//constexpr size_t EXPECTED_SUM = 1000001000000ULL;
//CRITICAL_SECTION critical;
//
//size_t gSum = 0;
//int sim = 1;
//
//void operation1(size_t arg) {
//	std::cout << "Performing operation1" << std::endl;
//	for (size_t i = 0; i < ITERATIONS; i++) {
//		EnterCriticalSection(&critical);
//		gSum += (arg + i);
//		LeaveCriticalSection(&critical);
//	}
//	std::this_thread::sleep_for(std::chrono::seconds(5)); //Simulate some heavy work
//	std::cout << "Operation1 Performed" << std::endl;
//}
//
//
//void operation2(size_t arg) {
//	std::cout << "Performing operation2" << std::endl;
//	for (size_t i = 0; i < ITERATIONS; i++) {
//		EnterCriticalSection(&critical);
//		gSum += (arg * i);
//		LeaveCriticalSection(&critical);
//	}
//	std::this_thread::sleep_for(std::chrono::seconds(10));  //Simulate some heavy work
//	std::cout << "Operation2 Performed" << std::endl;
//}
//
//
//int main(int argc, char** argv)
//{
//	auto start = std::chrono::steady_clock::now();
//	InitializeCriticalSection(&critical);
//
//	std::thread t1(operation1,OP1_PARAM);
//	std::thread t2(operation2,OP2_PARAM);
//
//	t1.join();
//	t2.join();
//
//
//	auto end = std::chrono::steady_clock::now();
//
//	std::cout << "Total execution duration in milliseconds: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << std::endl;
//	std::cout << "Result:  " << gSum << ", " << (gSum == EXPECTED_SUM ? "success" : "failure!") << std::endl;
//	std::cout << "Press enter to exit" << std::endl;
//	getchar();
//	DeleteCriticalSection(&critical);
//	return 0;
//}
////Improve execution time by using multi-threading  
//// need to block the Critical Sectio when the operation1 and operation2 use in the same gsum , 
//// i use in CRITICAL_SECTION critical , In the same way I could choose:
////Mutex
////Semaphore
////Event,
