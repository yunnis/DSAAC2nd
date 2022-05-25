#include "../head.h"

namespace _1_32
{
    template<typename T>
    void permutations(T list[], int k, int m)
    {
        if (k == m)
        {

            copy(list, list + m + 1, std::ostream_iterator<T>(std::cout, ""));
            std::cout << std::endl;
        }
        else
        {
            for (int i = k; i < m; ++i)
            {
                std::swap(list[i], list[k]);
                permutations(list, k + 1, m);
                std::swap(list[i], list[k]);
            }
        }
    }
}