#pragma once
#include "../head.h"

namespace e1_22
{
	// 1. A(1,2) A(2,1) A(2,2)
	// A(1,2) = 2^2 = 4
	// A(2,1) = A(2-1,2) = A(1,2) = 2^2 = 4
	// A(2,2) = A(2-1, A(2,2-1)) = A(1, A(2,1)) = A(1,4) = 2^4 = 16

	//         | 2^j              i==1&&j>=1
	//  A(i,j)=| A(i-1,2)         i>=2 && j=1
	//         | A(i-1, A(i,j-1)) i,j>=2
	auto ackermanns_function(long long i, long long j)
	{
		if (i < 1 && j < 1)
			return 0.;
		if (i == 1)
		{
			return std::pow(2ll, j);
		}
		else
		{
			if (j == 1)
			{
				return ackermanns_function(i - 1, 2);
			}
			else // j >= 2 
			{
				return ackermanns_function(i - 1, ackermanns_function(i, j - 1));
			}
		}
	}

	auto test()
	{
		std::cout << "A(1,2) = " << ackermanns_function(1, 2) << std::endl;
		std::cout << "A(2,1) = " << ackermanns_function(2, 1) << std::endl;
		std::cout << "A(2,2) = " << ackermanns_function(2, 2) << std::endl;
	}
}
