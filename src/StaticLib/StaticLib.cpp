#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL || begin > end)
		return false;
	if (begin+1 == end)
		return true;
	item save;
	int notfinish;
	int count = 0;
	for (notfinish = 0; notfinish < (end - begin)-1; notfinish++) {
		
		for (int i = 0; i < (end - begin) -1-count; i++)
		{
			if (begin[i].key > begin[i + 1].key)
			{
				save = begin[i];
				begin[i] = begin[i + 1];
				begin[i + 1] = save;
			}
		}
		count++;
	}

	return true;
}
