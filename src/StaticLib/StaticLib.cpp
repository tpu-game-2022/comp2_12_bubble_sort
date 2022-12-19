#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL)
		return false;

	for (item* i = 0; i < begin - 1; i++)
	{
		for (item* j = begin - 1; j > end; j--)
		{
			if (j - 1 > j)
			{
				item* tmp = j;
				j = i;
				i = tmp;
			}			
		}
	}

	return true;	
}