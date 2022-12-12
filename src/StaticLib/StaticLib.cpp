#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (!begin || !end || end -begin < 0)return false;
	if (end - begin < 2)return true;
	int changef = 1;
	while (changef) {
		changef = 0;
		for (int c_num = 0; begin+c_num != end-1; c_num++) {

			if (begin[c_num].key > begin[c_num+1].key) {
				item temp = begin[c_num];
				begin[c_num] = begin[c_num+1];
				begin[c_num + 1] = temp;
				changef = 1;
			}
		}
	}
	return true;
}
