// DataStructuresAlgorithmAndApplicationsInCpp2nd.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "ch1/1_32_Recursive_method_for_permutations.h"
#include "ch1/e1_22_ackermann's_function.h"
#include "ch1/e1_33_Greatest_common_divisor.h"
#include "ch1/e1_24_subset_generation.h"

int main()
{
    {
        auto str = std::string("abc");
        std::vector<std::string> v{std::string(str.size(), '1')};
        e1_24::subset(v, str, 0, 0);
        std::cout << " e1_24 end\n";
    }
    {
        char c[] = { "abc" };
        _1_32::permutations(c, 0, sizeof(c) / sizeof(c[0]) - 1);
    }

    {
        e1_22::test();
    }
    {
        std::cout << e1_23::gcd(20, 30) << std::endl;
        std::cout << e1_23::gcd(112, 42) << std::endl;
        std::cout << e1_23::gcd(3, 6) << std::endl;
        std::cout << e1_23::gcd(200, 2400) << std::endl;
    }
    std::cout << "Hello World!\n";
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
