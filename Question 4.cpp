////Question 4 - pointers
//
//#include <chrono>
//#include <iostream>
//#include <vector>
//#include <thread>
//#include <random>
//
//
//struct Payload {
//
//	Payload(uint64_t id_) :
//		id(id_),
//		veryLargeVector(1000 * 1000)
//	{}
//
//	uint64_t id;
//	std::vector<int> veryLargeVector;
//};
//
//void operation1(Payload* payload) {
//	std::cout << "Performing operation1 on payload " << payload->id << std::endl;
//	std::this_thread::sleep_for(std::chrono::seconds(5 + (std::rand() % (12 - 5 + 1))));  //Simulate some heavy work
//	std::cout << "Operation1 Performed" << std::endl;
//}
//
//void operation2(Payload* payload) {
//	std::cout << "Performing operation2 on payload " << payload->id << std::endl;
//	std::this_thread::sleep_for(std::chrono::seconds(std::chrono::seconds(5 + (std::rand() % (12 - 5 + 1)))));  //Simulate some heavy work
//	std::cout << "Operation2 Performed" << std::endl;
//}
//
//void dispacher_thread() {
//	Payload* payload = new Payload(1);
//	std::this_thread::sleep_for(std::chrono::seconds(2));  //Simulate some heavy work
//	std::thread* wt1 = new std::thread(&operation1, payload);
//	std::thread* wt2 = new std::thread(&operation1, payload);
//	//Waiting for wt1 & wt2 to finish is not allowed, dispacher_thread should exit after creating wt1 and wt2
//	wt1->detach();
//	wt2->detach();
//	delete wt1;
//	delete wt2;
//	std::this_thread::sleep_for(std::chrono::seconds(30));
//}
//
//int main(int argc, char** argv)
//{
//	std::cout << "Calling dispatcher thread" << std::endl;
//	std::thread t(&dispacher_thread);
//	t.join();
//	std::cout << "Press enter to exit" << std::endl;
//	getchar();
//	return 0;
//}
//
////detach(), makes separated the thread from the object and allowed execution to continue independently,
//// and then the thread object will no longer owns any thread.
////So the thread won't and impossible to delete it upon termination.
////I delete the thread object.