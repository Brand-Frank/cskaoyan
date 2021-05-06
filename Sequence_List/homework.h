/********************************************************
*
*	Homework Demo.
*	�κ���ҵ����
*
*	Need to outline the source.
*
*********************************************************/

#include"sq_list.h"


/**
 * @brief P17-1 ��˳�����ɾ����Сֵ��Ԫ�ؽ�㣨Ψһ������-��������-���ر�ɾ��Ԫ�ص�ֵ
 * @param L		˳���
 * @param value	���ر�ɾ��Ԫ�ص�ֵ
 *
 * @return bool ��ɾ���ɹ����򷵻�true�����򷵻�false
 */
bool del_min_1(SqList* L, ElemType* value);

/**
 * @brief P17-1 ��˳�����ɾ����Сֵ��Ԫ�ؽ�㣨Ψһ������-����-���ر�ɾ��Ԫ�ص�ֵ
 * @param L		˳���
 *
 * @return ��ɾ��Ԫ�ص�ֵ
 */
ElemType del_min_2(SqList* L);

/**
 * @brief P17-2 ��Ч�㷨������˳��������Ԫ�أ��ռ临�Ӷ�ΪO(1)
 * @param L		˳���
 *
 * @return void
 */
void reverse_list_1(SqList* L);

/**
 * @brief P17-3 ɾ��˳���������ֵΪx������Ԫ�أ�ʱ�临�Ӷ�O(n),�ռ临�Ӷ�ΪO(1)
 * @param L		˳���
 * @param x		ָ��Ҫɾ����ֵ
 *
 * @return void
 */
void delete_elem(SqList* L, ElemType x);


/**
 * @brief P17-4 ɾ��˳����з�ΧΪ(lower,high)������Ԫ��
 * @param L		˳���
 * @param lower	����
 * @param high	����
 *
 * @return void
 */
void delete_range(SqList* L, int lower, int high);

/**
 * @brief P17-4 ɾ��˳�����lower��high��һ�ε�����Ԫ��
 * @param L		˳���
 * @param lower	��ʼλ��
 * @param high	�յ�λ��
 *
 * @return bool
 */
bool delete_piece_range(SqList* L, int lower, int high);