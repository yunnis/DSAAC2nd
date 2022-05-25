#pragma once
#include "../head.h"

namespace p2_4
{
	template<class T>
	T horner(T coeff[], int n, const T& x)
	{
		// 计算n阶多项式在点x处的值, 系数为coeff[0:n]
		T value = coeff[0];
		for (int i = 1; i < n; i++)
		{
			value = value * x + coeff[i];
		}
		return value;
	}
}
