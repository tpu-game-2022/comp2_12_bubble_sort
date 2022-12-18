#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if(!begin || !end || begin > end)return false;

	int count = end - begin - 1;
	for (int i = 0; i < count; i++)
	{
		judgment_swap(&begin[0], count - i);
	}
	return true;
}

void judgment_swap(item* begin, const int roop_count)
{
	for (int i = 0; i != roop_count; i++)
	{
		if (begin[i].key > begin[i + 1].key)
		{
			item exchange = begin[i];
			begin[i] = begin[i + 1];
			begin[i + 1] = exchange;
		}
    }
}

