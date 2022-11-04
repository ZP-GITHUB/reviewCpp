// 08Reference.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define LOG(x) std::cout << x << std::endl

void Increment(int value)
{
    value++;
}

void Increment2(int& value)
{
    value++;
}

void Increment3(int* value)
{
    //value++;//这样递增的是地址
    (*value)++; //由于符号的优先级，递增符号会优先执行，所以前面要加括号先解引用
}

int main()
{
    int a = 5;
    Increment(a);
    LOG(a);
    std::cout << "Hello World!\n";
    Increment2(a);
    LOG(a);
    Increment3(&a);
    LOG(a);

    int x = 5;
    int y = 8;

    int& ref = x;
    ref = y;
    //ref引用的对象并不会变成y，而是把x的值变成8

    int* ref1 = &x;
    *ref1 = 2;
    //x = 2

    ref1 = &y;
    *ref1 = 1;
    //y = 1

    LOG(x);
    LOG(y);


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
