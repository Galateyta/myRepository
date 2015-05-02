#include <iostream>
#define TEST C
	#if TEST == A
		void test()
		{
			std::cout << "A" << std::endl;
		}
	#elif TEST == B
		void test()
		{
			std::cout << "B" << std::endl;
		}
	#else 
		void test()
		{
			std::cout << "C" << std::endl;
		}
	#endif


/*#define B
#ifdef A
	void test()
	{
		std::cout << "A" << std::endl;
	}
#endif
#ifdef B
	void test()
	{
		std::cout << "B" << std::endl;
	}
#endif
#ifdef C
	void test()
	{
		std::cout << "C" << std::endl;
	}
#endif
*/