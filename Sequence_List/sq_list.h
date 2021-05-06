/********************************************************
* 
*	Base Demos.
*	课内基础代码
*
*********************************************************/

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXSIZE 50		//顺序表最大长度(静态分配)
#define INITSIZE 10		//顺序表最大长度(动态分配)

typedef int ElemType;

/**
 * @brief 顺序表结构体(静态分配)
 */
typedef struct {
	ElemType data[MAXSIZE];		//存放顺序表元素中的数据
	int length;					//顺序表当前长度
}SqList;

/**
 * @brief 顺序表结构体(动态分配)
 */
typedef struct {
	ElemType *data;		//指示动态分配数组的指针
	int length;			//顺序表当前长度
	int MaxSize;		//顺序表的最大容量
}SeqList;

//print_info(list, option)
//extern char* option[] = { "init_list","list_insert","list_delete","locate_elem","get_elem",
//					"del_min_1","del_min_2","reverse_list_1" };


/**
 * @brief 初始化，构造一个空表（顺序表）
 * @param &L	顺序表
 *
 * @return void
 */
void init_list(SqList* L);

/**
 * @brief 增加动态数组的长度（顺序表）
 * @param *L	顺序表
 * @param len	增加的顺序表长度
 *
 * @return void
 */
void increase_size(SeqList* L, int len);


/**
 * @brief 插入操作（顺序表）
 * @param &L	顺序表
 * @param i		插入位置
 * @param e		待插入的元素
 *
 * @return bool
 *     True		插入成功 ||
 *     False	插入失败
 */
bool list_insert(SqList* L, int i, ElemType e);


/**
 * @brief 删除操作（顺序表）
 * @param &L	顺序表
 * @param i		待删除位置
 * @param e		待删除的元素
 *
 * @return bool:
 *     True		删除成功 ||
 *     False	删除失败
 */
bool list_delete(SqList* L, int i, ElemType* e);

/**
 * @brief 按值查找（顺序查找）- 在顺序表中查找第一个等于e元素,并返回其位序
 * @param L		顺序表
 * @param e		待删除的元素
 *
 * @return 位序
 */
int locate_elem(SqList L, ElemType e);

/**
 * @brief 按位查找 - 查找第i个位置上的元素
 * @param L		顺序表
 * @param i		待查找的位置
 *
 * @return 第i位上的元素值
 */
ElemType get_elem(SqList L, int i);


