#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	return false;

	if (begin == NULL || end == NULL)return false;
	if (end < begin) return false;
	int i, j;
	if (begin > end)
	{
		for (item* i = begin; i < end; i++)
		{
			for (item* j = i + 1; j < end; j++)
			{
				if (j->key < i->key) {
					item tmp = *i;
					*i = *j;
					*j = tmp;
				}
			}
		}
	}
	return true;
}