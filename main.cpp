#include "MyString.h"
//#include <assert.h>

void test1();
void test2();
void test3();
void test4();
void test5();
//void test6();
//void test7();


int main()
{
	try
	{
		//		test1();
		test2();
		test3();
		test4();
		test5();
		//		test6();
		//		test7();
		//		test8();
	}
	catch (int e)
	{
		if (e == 1)
			std::cout << "\nExit out of string\n" << std::endl;
	}
	catch (std::bad_alloc())
	{
		std::cout << "\nBAD_ALLOC(NEW)\n" << std::endl;
	}
	system("pause");
	return 0;
}

void test1()
{
	String s;
//        assert(s[0] == '\0');
//        s.print(stdout);
}
void test2()
{
        String s("firststring");
 //       assert(s == "blabla");
 //       s.print(stdout);
        std::cout << s << std::endl;
 //       std::cout << s[3] << s[5] << std::endl;
}
void test3()
{
        String s1("firstString");
        String s2("SecondString");
        s1+=s2;
        //String s3 = s1 + s2;
 //       assert(s1 + s2 == "lalalabababa");
 //       
        std::cout << s1 << std::endl;
		std::cout << s1 + s2 << std::endl;
}
void test4()
{
        String s(10);
 //       assert(s.size() == 10)
 //       s.print(stdout);
        std::cout << s.size() << std::endl;
}
void test5()
{
        String s1("blablatralalal");
        String s2("bla");
 //     assert(s1.contain(s2) == 0);
        std::cout << s1 << std::endl;
        std::cout << s1.contain(s2) << std::endl;
        std::cout << s1.contain('t') << std::endl;
}
