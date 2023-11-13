// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "stdafx.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "modify z branch!\n";
    std::cout << "modify y branch!\n";
    std::cout << "modify x branch!\n";
    Test_CLASS(MultiplicationTests)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            int i = 2;
            int j = 0;
            int actual = i*j
            Assert::AreEqual(0, actual);
        }
         TEST_METHOD(TestMethod1)
        {
            int i = 13;
            int j = 1;
            int actual = i+j
            Assert::AreEqual(14, actual);
        }
         TEST_METHOD(TestMethod1)
        {
            int i = 4;
            int j = 2;
            int actual = i*j
            Assert::AreEqual(8, actual);
        }
         TEST_METHOD(TestMethod1)
        {
            int i = 13;
            int j = 1;
            int actual = i+j
            Assert::AreEqual(13, actual);
        }
         TEST_METHOD(TestMethod1)
        {
            int i = 5;
            int j = 4;
            int actual = i*j
            Assert::AreEqual(30, actual);
        }
    }
  
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
