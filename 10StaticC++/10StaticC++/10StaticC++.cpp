// 10StaticC++.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int s_Variable = 5;

void Function()
{

}

struct EntityA
{
    int x, y;

    void Print()
    {
        std::cout << x << "," << y << std::endl;
    }
};


struct EntityB
{
    static int x, y;

    void Print()
    {
        std::cout << x << "," << y << std::endl;
    }
};

int EntityB::x;
int EntityB::y;

struct EntityC
{
    static int a, b;

    static void Print()
    {
        std::cout << a << "," << b << std::endl;
    }
};

int main()
{
    EntityA e;
    e.x = 2;
    e.y = 3;

    EntityA e1 = { 5, 6 };

    e.Print();
    e1.Print();

    EntityB eb;
    eb.x = 4;
    eb.y = 5;

    EntityB eb1;
    eb1.x = 7;
    eb1.y = 8;

    eb.Print();  //7,8
    eb1.Print(); //7,8

 
    EntityC::a = 4;
    EntityC::b = 5;

   
    EntityC::a = 7;
    EntityC::b = 8;

    EntityC::Print();  //7,8
    EntityC::Print(); //7,8

    std::cout << s_Variable << std::endl;
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
