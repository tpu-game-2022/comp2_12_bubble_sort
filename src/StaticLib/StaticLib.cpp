#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (!begin || !end ||  end < begin)
	{
		return false;
	}
	
	int save_key;
	char save_value[256];
	for (int i = 0; i < end->key - 1; i++)
	{
		for (int j = end->key - 2; j > i;j--)
		{
			if (begin[j].key > begin[j + 1].key)
			{
				save_key = begin[j].key;
				strcpy_s(save_value, 256, begin[j].value);
				begin[j].key = begin[j + 1].key;
				strcpy_s(begin[j].value, 256, begin[j + 1].value);
				begin[j + 1].key = save_key;
				strcpy_s(begin[j + 1].value, 256, save_value);
			}
		}
	}
	return true;
}
