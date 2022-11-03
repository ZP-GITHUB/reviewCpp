// 03VariablesC++.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    std::cout << "char" << std::endl;
    char a = 'A';
    std::cout << a << std::endl;
    char b = 65;
    std::cout << b << std::endl; //打印出来也是A

    std::cout << "short" << std::endl;
    short c = 65;
    std::cout << c << std::endl;
    short d = 'A';
    std::cout << d << std::endl; //打印出来也是65

    std::cout << "float" << std::endl;
    float e = 5.5;  //鼠标放到5.5上实际是double(8字节)
    std::cout << e << std::endl;

    float f = 5.5f;  //鼠标放到5.5f上才是float(4字节)
    std::cout << f << std::endl;

    std::cout << "bool" << std::endl;
    bool g = false; //bool类型只占一个字节
    std::cout << g << std::endl;
    std::cout << sizeof(bool) << std::endl;

    std::cout << "int" << std::endl;
    int variable = 8;  //有符号数，第一位表示正负，后面只有31位表示数值
    //unsigned int variable = 8;  //无符号数，后面只有32位表示数值
    std::cout << variable << std::endl;
    variable = 20;
    std::cout << variable << std::endl;
    std::cin.get();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
