#include"sq_list.h"
#include"func.h"
//#include"func.c"

int main() {
	SqList list;
	
	//****************初始化***************************
	init_list(&list);
	print_info(list, 0);
	
	//***************插入操作*****************************
	for(int i = 1; i <= MAXSIZE; ++i) {		//在规定范围内插入元素
		list_insert(&list, i, rand() % 50);
	}
	
	print_info(list, 1);

	/***************删除操作******************************/

	int pos = 0, value = 0;
	printf("Input the pos to delete: ");
	scanf("%d", &pos);
	list_delete(&list, pos, &value);
	
	printf("list_delete(list, %d, %d)\n",pos,value);	//TODO:value的值显示不出来
	print_info(list, 2);
	//TODO:将delete函数封装起来


	//***************查找操作(按值/按位查找)*****************************/
	/*
	int value_locate;
	printf("Input the locate_elem value: ");
	scanf("%d", &value_locate);
	printf("locate_elem(list, %d)\n\n", locate_elem(list, value_locate));
	
	int pos_get;
	printf("Input the get_elem pos: ");
	scanf("%d", &pos_get);
	printf("get_elem(list , %d)\n\n",get_elem(list, pos_get));
	*/


	/********************************************************
	*
	*	Testify for Homework Demo.
	*	课后作业代码测试
	*
	*	Need to outline the source.
	*
	*********************************************************/
	/*
	printf("(Homework 17-1) mininum of the list is %d\n", del_min_2(&list));
	print_info(list,6);	//打印删除最小值后的顺序表

	printf("(Homework 17-2) Reverse all elements in Sq_list.\n");
	reverse_list_1(&list);
	print_info(list,7);	//打印逆置后的顺序表
	
	printf("(Homework 17-3) delete all elements == 11.\n");//TODO:增加鲁棒性
	delete_elem(&list, 11);//删除所有=11的元素
	print_info(list, 8);


	printf("(Homework 17-3) delete all elements range(11,20).\n");//TODO:增加鲁棒性
	delete_range(&list, 11, 20);
	print_info(list, 9);
	*/

	printf("(Homework 17-3) delete all elements pieces position range(19,28).\n");
	delete_piece_range(&list, 19, 28);
	print_info(list, 10);

	return 0;
}