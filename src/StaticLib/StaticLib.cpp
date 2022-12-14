#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == nullptr || end == nullptr || end - begin < 0) return false;

	for (item* item_i = begin; item_i < end; item_i++)
	{
		for (item* item_j = item_i + 1; item_j < end; item_j++)
		{
			if (item_i->key > item_j->key)
			{
				item item = *item_i;
				*item_i = *item_j;
				*item_j = item;
			}
		}
	}

	return true;
}
