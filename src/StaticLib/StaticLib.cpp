#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	int bubble_count = 0;

	if (begin == NULL || end == NULL)
	{
		return false;
	}
	if (end < begin)
	{
		return false;
	}
	do
	{
		bubble_count = 0;
		int i = 0;
		while (begin + i < end - 1)
		{
			if (begin[i].key <= begin[i + 1].key)
			{
				break;
			}
			item copy = begin[i];
			begin[i] = begin[i + 1];
			begin[i + 1] = copy;
			bubble_count = 1;
			i++;
		}
	} while (bubble_count == 1);

	return true;

}
