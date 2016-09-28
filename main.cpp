#include "MyString.h"
#include <assert.h>

//void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
//void test7();


int main()
{
	try
	{
		//test1();
		test2();
		test3();
		test4();
		test5();
		test6();
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

/*void test1()
{
	std::cout << "Test 1 : String s\n" << std::endl;
	String s;
	assert(s[0] == '\0');
	std::cout << s[0] << std::endl;
}*/
void test2()
{
	std::cout << "\Test 2 : String s(firststring)\n" << std::endl;
	String s("firststring");
	    assert(s[0] == 'f');
		assert(s[1] == 'i');
		assert(s[2] == 'r');
		assert(s[3] == 's');
		assert(s[4] == 't');
		assert(s[5] == 's');
		assert(s[6] == 't');
		assert(s[7] == 'r');
		assert(s[8] == 'i');
		assert(s[9] == 'n');
		assert(s[10] == 'g');
	std::cout << s << std::endl;
}
void test3()
{
	std::cout << "\nTest 3 : s1 = firstString s2 = SecondString (+=)\n" << std::endl;
	String s1("firstString");
	String s2("SecondString");
	s1 += s2;
	assert(s1 == "firstStringSecondString");
	std::cout << s1 << std::endl;
}
void test4()
{
	std::cout << "\nTest 4 : size(String s(10))\n" << std::endl;
	String s(10);
	assert(s.size() == 10);
	std::cout << s.size() << std::endl;
}
void test5()
{
	std::cout << "\nTest 5 : firstStringProverkaString Contain\n" << std::endl;
        String s1("firstStringProverkaString");
        String s2("ingPro");
        assert(s1.contain(s2) == 8);
		assert(s1.contain('t') == 4);
        std::cout << "String s1 : " << s1 << std::endl;
        std::cout << "Contain <ingPro> ? " << s1.contain(s2) << std::endl;
        std::cout << "Contain <t> ? " << s1.contain('t') << std::endl;
}
void test6()
{
	std::cout << "\nTest 6: <firstString> + <SecondString>\n" << std::endl;
	String s1("firstString");
	String s2("SecondString");
	String s3 = s1 + s2;
	assert(s3 == "firstStringSecondString");
	std::cout << s3 << std::endl;
}
