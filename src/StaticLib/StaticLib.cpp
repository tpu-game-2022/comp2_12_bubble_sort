#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL)
		return false;
	if (end < begin)
		return false;

	int temp;

	/*for (auto i = begin; i != end; i++)
	{
		for(auto j = end - 1; j !=i; i--)
		{
			auto temp = j;
			if (temp < j)
			{
				temp = j;
				j = j + 1;
				//1 + j = temp;
			}
		}
	}*/
	
}
