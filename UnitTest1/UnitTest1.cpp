#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2(2)/6.2(2).cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestOddIndicesSum_SingleElementEven)
        {
            int a[] = { 2 };
            int size = 1;
            int expected = 0;
            int result = sumOddIndicesRecursive(a, size);
            if (result != expected) {
                printf("TestOddIndicesSum_SingleElementEven не пройшов: очікувалось %d, отримано %d\n", expected, result);
            }
        }

        TEST_METHOD(TestOddIndicesSum_SingleElementOdd)
        {
            int a[] = { 3 };  
            int size = 1;
            int expected = 0;
            int result = sumOddIndicesRecursive(a, size);
            if (result != expected) {
                printf("TestOddIndicesSum_SingleElementOdd не пройшов: очікувалось %d, отримано %d\n", expected, result);
            }
        }

        TEST_METHOD(TestOddIndicesSum_MultipleElements)
        {
            int a[] = { 1, 2, 3, 4, 5 };  
            int size = 5;
            int expected = 6; 
            int result = sumOddIndicesRecursive(a, size);
            if (result != expected) {
                printf("TestOddIndicesSum_MultipleElements не пройшов: очікувалось %d, отримано %d\n", expected, result);
            }
        }

        TEST_METHOD(TestOddIndicesSum_AllEven)
        {
            int a[] = { 2, 4, 6, 8 }; 
            int size = 4;
            int expected = 0;
            int result = sumOddIndicesRecursive(a, size);
            if (result != expected) {
                printf("TestOddIndicesSum_AllEven не пройшов: очікувалось %d, отримано %d\n", expected, result);
            }
        }

        TEST_METHOD(TestOddIndicesSum_Mixed)
        {
            int a[] = { 1, 3, 2, 5, 4 };  
            int size = 5;
            int expected = 4; 
            int result = sumOddIndicesRecursive(a, size);
            if (result != expected) {
                printf("TestOddIndicesSum_Mixed не пройшов: очікувалось %d, отримано %d\n", expected, result);
            }
        }
    };
}
