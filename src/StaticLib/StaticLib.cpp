#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	item cp;
	int array_size = end - begin;
	if (begin == NULL||end==NULL)return false;
	if (array_size<0)return false;

	for (int i = 0;i < array_size;i++)
	{
		for (int j = i + 1;j < array_size;j++)
		{
			if (begin[i].key > begin[j].key)
			{
				cp = begin[i];
				begin[i] = begin[j];
				begin[j] = cp;
			}
		}
	}
	return true;
}
