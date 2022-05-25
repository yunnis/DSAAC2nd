#pragma once
#include "../head.h"
// 子集 用代码序表示
// 2^n n位字符
// ie. abc = {}, {a}, {b}, {c}, {ab}, {ac}, {bc}, {abc}
//          000, 001, 010, 100, 011,  101,  110,  111

namespace e1_24
{
	void subset(std::vector<std::string>& ret, std::string str, int pos, int ans)
	{

		if (str.size() == pos)
		{
			//ret.push_back(ans);
			//std::cout << str << std::endl;
			return;
		}
		else
		for (int i = pos; i < str.size(); ++i)
		{
			auto c = str[i];
			str[i] = '*';
			auto s = std::string( str.size(), '1' );
			for (size_t i = 0; i < str.size(); i++)
			{
				if (str[i] == '*')
					s[i] = '0';
			}
			if (std::find(ret.begin(), ret.end(), s) == ret.end())
			ret.push_back(s);
			subset(ret, str, pos + 1, 1*i+ans);
			str[i] = c;
		}
	}
}
