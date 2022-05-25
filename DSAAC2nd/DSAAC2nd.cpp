#include "ch1/p1_32_Recursive_method_for_permutations.h"
#include "ch1/e1_22_ackermann's_function.h"
#include "ch1/e1_33_Greatest_common_divisor.h"
#include "ch1/e1_24_subset_generation.h"
#include "ch2/p2_4_Horner.h"

int main()
{
	{
		// Let us evaluate value of 2x3 - 6x2 + 2x - 1 for x = 3
		int poly[] = { 2, -6, 2, -1 };
		int x = 3;
		int n = sizeof(poly) / sizeof(poly[0]);
		std::cout << "Value of polynomial is " << p2_4::horner(poly, n, x) << std::endl;
	}
    {
        auto str = std::string("abc");
        std::vector<std::string> v{std::string(str.size(), '1')};
        e1_24::subset(v, str, 0, 0);
        std::cout << " e1_24 end\n";
    }
    {
        char c[] = { "abc" };
        p1_32::permutations(c, 0, sizeof(c) / sizeof(c[0]) - 1);
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
