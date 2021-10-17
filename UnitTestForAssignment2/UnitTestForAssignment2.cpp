#include "pch.h"
#include <stdio.h>
#include <stdbool.h>

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForAssignment2
{
	TEST_CLASS(UnitTestForAssignment2)
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
	};
}
