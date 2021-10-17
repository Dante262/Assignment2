#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
#include "main.h"
}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAssignment2
{
	TEST_CLASS(UnitTestAssignment2)
	{
	public:

		TEST_METHOD(Perimeter)
		{

			int	Result = 0;

			int LENGTH = 4;

			int WIDTH = 4;

			int* length;

			int* width;

			length = &LENGTH; //since pointers are required for getPerimeter to work we can't hardcode values

			width = &WIDTH;

			Result = getPerimeter(length, width);
			Assert::AreEqual(16, Result); //since perimeter is all the sides added together if all sides equal 4 then the perimeter is 16


		}



		TEST_METHOD(Area)
		{

			int	Result = 0;

			int LENGTH = 4;

			int WIDTH = 4;

			int* length;

			int* width;

			length = &LENGTH; // again due to a requirement of pointers we cannot use hardcoded values

			width = &WIDTH;

			Result = getArea(length, width);
			Assert::AreEqual(16, Result); // since Area is length * width, 4 * 4 is equal to 16

		}

		TEST_METHOD(SetLengthMin) 
		{

			int input = 1;

		   int LENGTH = 4;

		   int* length;

		   length = &LENGTH; // again due to a requirement of pointers we cannot use hardcoded values

		    setLength(input, length);
			

			Assert::AreEqual(input, LENGTH);
		}

		TEST_METHOD(SetLengthMax)
		{

			int input = 99;

			int LENGTH = 4;

			int* length;

			length = &LENGTH; // again due to a requirement of pointers we cannot use hardcoded values

			 setLength(input, length);

			 Assert::AreEqual(input, LENGTH);

		}

		TEST_METHOD(SetLengthOutOfBounds)
		{

			int input = -100;

			int LENGTH = 4;

			int* length;

			length = &LENGTH; // again due to a requirement of pointers we cannot use hardcoded values

			setLength(input, length);

			Assert::AreNotEqual(input, LENGTH);

		}


		TEST_METHOD(SetWidthMin)
		{

			int input = 1;

			int WIDTH = 4;

			int* width;

			width = &WIDTH; // again due to a requirement of pointers we cannot use hardcoded values

			setWidth(input, width);

			Assert::AreEqual(input, WIDTH);

		}

		TEST_METHOD(SetWidthMax)
		{

			int input = 99;

			int WIDTH = 4;

			int* width;

			width = &WIDTH; // again due to a requirement of pointers we cannot use hardcoded values

			setWidth(input, width);

			Assert::AreEqual(input, WIDTH);

		}

		TEST_METHOD(SetWidthOutOfBounds)
		{

			int input = -100;

			int WIDTH = 4;

			int* width;

			width = &WIDTH; // again due to a requirement of pointers we cannot use hardcoded values

			setWidth(input, width);

			Assert::AreNotEqual(input, WIDTH);

		}


	};

}
