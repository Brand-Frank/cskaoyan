/********************************************************
*
*	Homework Demo.
*	课后作业代码
*
*	Need to outline the source.
*
*********************************************************/

#include"sq_list.h"


/**
 * @brief P17-1 从顺序表中删除最小值的元素结点（唯一）并由-函数参数-返回被删除元素的值
 * @param L		顺序表
 * @param value	返回被删除元素的值
 *
 * @return bool 若删除成功，则返回true；否则返回false
 */
bool del_min_1(SqList* L, ElemType* value);

/**
 * @brief P17-1 从顺序表中删除最小值的元素结点（唯一）并由-函数-返回被删除元素的值
 * @param L		顺序表
 *
 * @return 被删除元素的值
 */
ElemType del_min_2(SqList* L);

/**
 * @brief P17-2 高效算法，逆置顺序表的所有元素，空间复杂度为O(1)
 * @param L		顺序表
 *
 * @return void
 */
void reverse_list_1(SqList* L);

/**
 * @brief P17-3 删除顺序表中所有值为x的数据元素，时间复杂度O(n),空间复杂度为O(1)
 * @param L		顺序表
 * @param x		指定要删除的值
 *
 * @return void
 */
void delete_elem(SqList* L, ElemType x);


/**
 * @brief P17-4 删除顺序表中范围为(lower,high)的数据元素
 * @param L		顺序表
 * @param lower	下限
 * @param high	上限
 *
 * @return void
 */
void delete_range(SqList* L, int lower, int high);

/**
 * @brief P17-4 删除顺序表中lower到high这一段的数据元素
 * @param L		顺序表
 * @param lower	起始位置
 * @param high	终点位置
 *
 * @return bool
 */
bool delete_piece_range(SqList* L, int lower, int high);