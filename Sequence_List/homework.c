/********************************************************
*
*	Homework Demo.
*	课后作业代码
*
*	Need to outline the source.
*
*********************************************************/

#include"sq_list.h"


bool del_min_1(SqList* L, ElemType* value) {
	if (L->length == 0)
		return false;		//表空，中止返回操作
	value = L->data[0];

	int pos = 0;		//假定0号元素值最小

	//寻找最小元素
	for (int i = 1; i < L->length; ++i) {
		if (L->data[i] < value) {
			value = L->data[i];
			pos = i;
		}
	}

	L->data[pos] = L->data[L->length - 1];	//空出的位置由最后一位补充（取代）

	L->length--;
	return true;
}


ElemType del_min_2(SqList* L) {
	ElemType value;
	value = L->data[0];

	if (L->length == 0)
		return false;		//表空，中止返回操作

	int pos = 0;		//假定0号元素值最小
	//寻找最小元素
	for (int i = 1; i < L->length; ++i) {
		if (L->data[i] < value) {
			value = L->data[i];
			pos = i;		//记录当前最小元素的位置，便于删除后进行填充
		}
	}

	L->data[pos] = L->data[L->length - 1];	//空出的位置由最后一位补充（取代）

	L->length--;
	return value;
}

void reverse_list_1(SqList* L) {
	ElemType temp;		//临时变量，原地操作(in place)

	for (int i = 0; i < L->length / 2; ++i) {
		temp = L->data[i];
		L->data[i] = L->data[L->length - i - 1];		//为数组下标，所以长度需要-1
		L->data[L->length - i - 1] = temp;
	}
}

void delete_elem(SqList* L, ElemType x) {
	int k = 0, i = 0;

	while (i < L->length) {
		if (L->data[i] == x)		//当前元素为x，记录++k
			++k;
		else
			L->data[i - k] = L->data[i];	//如果不等于x，则将当前元素往前移k个位置
		++i;
	}
	L->length = L->length - k;		//当前顺序表的长度
}

void delete_range(SqList* L, int lower, int high) {
	if (lower >= high) {
		printf("Error (delete_range(s,t)) - lower(%d) >= high(%d)\n", lower, high);
		return false;
	}
	if (L->length == 0) {
		printf("Error (List is null)\n\n");
		return false;
	}

	//遍历，寻找在(lower,high)之间的值，并删除，补充
	int k = 0;
	for (int i = 0; i < L->length; ++i) {
		if (L->data[i] > lower && L->data[i] < high) {
			L->data[i] = L->data[i + 1];	//用后一个元素取代当前元素
			L->length--;		//被取代后表长-1
		}
	}
}

bool delete_piece_range(SqList* L, int lower, int high) {
	int i, j;
	if (lower >= high) {
		printf("Error (delete_range(s,t)) - lower(%d) >= high(%d)\n", lower, high);
		return false;
	}
	if (L->length == 0) {
		printf("Error (List is null)\n\n");
		return false;
	}

	for (i = 0; i < L->length && L->data[i] < lower; ++i)	//寻找值大于等于lower的第一个元素
		;
	if (i > L->length)
		return false;		//所有值均小于lower，范围有问题
	for (j = 0; j < L->length && L->data[j] <= high; ++j)	//寻找值大于high的第一个元素
		;
	for (; j < L->length; ++j, ++i)
		L->data[i] = L->data[j];	//TODO: 当(j-i)的长度大于(length-j)时的处理方式
	L->length = i;
	return true;
}

