#pragma once
#include "../head.h"

namespace p2_4
{
	template<class T>
	T horner(T coeff[], int n, const T& x)
	{
		// ����n�׶���ʽ�ڵ�x����ֵ, ϵ��Ϊcoeff[0:n]
		T value = coeff[0];
		for (int i = 1; i < n; i++)
		{
			value = value * x + coeff[i];
		}
		return value;
	}
}
