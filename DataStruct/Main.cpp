#include<stdio.h>
#include<stdlib.h>
///*����*/
//int stack[5];
//int top;
//void Push(int data) {
//	stack[top++] = data;
//}
//int Pop() {
//	return stack[--top];
//}
//void main() {
//	Push(100);
//	Push(200);
//	Push(300);
//
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//	printf("%d\n", Pop());
//}
//
///*����*/
//void Push(int stack[], int* top, int data) {
//	stack[(*top)++] = data;
//}
//int Pop(int stack[], int* top) {
//	return stack[--*top];
//}
//void main() {
//	int stack[5];
//	int top =0;
//
//	int stack2[5];
//	int top2 = 0;
//
//	Push(stack2, &top2, 10000);
//
//	Push(stack, &top, 100);
//	Push(stack, &top, 200);
//	Push(stack, &top, 300);
//
//	printf("%d\n", Pop(stack, &top));
//	printf("%d\n", Pop(stack, &top));
//	printf("%d\n", Pop(stack, &top));
//	
//	printf("%d\n", Pop(stack2, &top2));
//}

//
///*����*/
//typedef struct _stack_tag {
//	int stack[5];
//	int top ;
//}Stack;
//void Push(Stack* pst, int data) {
//	pst->stack[pst->top++] = data;
//}
//int Pop(Stack* pst) {
//	return pst->stack[--pst->top];
//}
//void main() {
//
//	Stack st1 = { 0 };
//
//	Stack st2 = { 0 };
//
//	Push(&st1, 10000);
//	Push(&st2, 100);
//	Push(&st2, 200);
//	Push(&st2, 300);
//
//	printf("%d\n", Pop(&st2));
//	printf("%d\n", Pop(&st2));
//	printf("%d\n", Pop(&st2));
//	printf("%d\n", Pop(&st1));
//}

//
///*���� �ڵ�*/
//typedef struct _stack_tag {
//	int stack[5];
//	int top;
//}Stack;
//void Push(Stack* pst, int data) {
//	pst->stack[pst->top++] = data;
//}
//int Pop(Stack* pst) {
//	return pst->stack[--pst->top];
//}
///* ��������� ���ä��ڵ� (������ �߻�ȭ) */
//void main() {
//
//	Stack st = { 0 };
//
//
//	Push(&st, 100);
//	Push(&st, 200);
//	Push(&st, 300);
//
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//}
//
///*���� �ڵ� InitStack*/
//typedef struct _stack_tag {
//	int stack[5];
//	int top;
//}Stack;
//void Push(Stack* pst, int data) {
//	pst->stack[pst->top++] = data;
//}
//int Pop(Stack* pst) {
//	return pst->stack[--pst->top];
//}
//void InitStack(Stack* pst) {
//	pst->top = 0;
//}
//void UninitStack(Stack* pst) {
//	pst->top = 0;
//}
///* ��������� ���ä��ڵ� (������ �߻�ȭ) */
//void main() {
//
//	Stack st;
//
//	InitStack(&st); //�ʱ�ȭ�ϴ� �Լ� 
//
//	Push(&st, 100);
//	Push(&st, 200);
//	Push(&st, 300);
//
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	UninitStack(&st);
//}
//
///*���� �ڵ�100���� ���� ����� */
//typedef struct _stack_tag {
//	int stack[5];
//	int top;
//}Stack;
//void Push(Stack* pst, int data) {
//	pst->stack[pst->top++] = data;
//}
//int Pop(Stack* pst) {
//	return pst->stack[--pst->top];
//}
//void InitStack(Stack* pst) {
//	pst->top = 0;
//}
//void UninitStack(Stack* pst) {
//	pst->top = 0;
//}
///* ��������� ���ä��ڵ� (������ �߻�ȭ) */
//void main() {
//
//	Stack st[100]; 
//
//	//�����ϳ��� ���� ����
//	InitStack(&st[0]); //�ʱ�ȭ�ϴ� �Լ� 
//
//	Push(&st[0], 100);
//	Push(&st[0], 200);
//	Push(&st[0], 300);
//
//	printf("%d\n", Pop(&st[0]));
//	printf("%d\n", Pop(&st[0]));
//	printf("%d\n", Pop(&st[0]));
//	UninitStack(&st);
//}
//
///*���� -������ ���� ���� �������� (���� ó���� ������ ���� ���� ����!!!!!)  */
//typedef struct _stack_tag {
//	int* stack; //�����޸𸮸� �����ϱ����� �����ͷ� 
//	int top;
//	int capacity;
//}Stack;
//void Push(Stack* pst, int data) {
//	pst->stack[pst->top++] = data;
//}
//int Pop(Stack* pst) {
//	return pst->stack[--pst->top];
//}
//void InitStack(Stack* pst, int cap) {
//	pst->stack = (int*)malloc(sizeof(int)*cap);
//	pst->top = 0;
//	pst->capacity = cap;
//}
//void UninitStack(Stack* pst) {
//	pst->top = 0;
//	free(pst->stack);
//}
///* ��������� ���ä��ڵ� (������ �߻�ȭ) */
//void main() {
//
//	Stack st;
//
//	//�����ϳ��� ���� ����
//	InitStack(&st,5); //�ʱ�ȭ�ϴ� �Լ� 
//
//	Push(&st, 100);
//	Push(&st, 200);
//	Push(&st, 300);
//
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	printf("%d\n", Pop(&st));
//	UninitStack(&st);
//}

//
///*���� - ���� �ڵ带 ��ü�������� �ٲ۴ٸ�..? stdlib.h �ʿ�   */
//struct Stack {
//	int* stack;
//	int top;
//	int capacity;
//	void Push(int data) {
//		stack[top++] = data;
//	}
//	int Pop() {
//		return stack[--top];
//	}
//	Stack (int cap=5) {
//		stack = (int*)malloc(sizeof(int)*cap);
//			top = 0;
//		capacity = cap;
//	}
//	~Stack() {
//		free(stack);
//	}
//};
//// c++������ �ʱ�ȭ�Լ��� �������Լ��� �˾Ƽ� �� 
///* ��������� ���� �ڵ� (������ �߻�ȭ) */
//void main() {
//
//	Stack st;
//
//
//	//st�� �־��� 
//	st.Push(100);
//	st.Push(200);
//	st.Push(300);
//
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//}


/*���� - ���� �ڵ带 ��ü�������� �ٲ۴ٸ�..?  */
struct Stack {
	int* stack;
	int top;
	int capacity;
	void Push(int data) {
		stack[top++] = data;
	}
	int Pop() {
		return stack[--top];
	}
	Stack(int cap = 5) {
		stack = (int*)malloc(sizeof(int)*cap);
		top = 0;
		capacity = cap;
	}
	~Stack() {
		free(stack);
	}
};
// c++������ �ʱ�ȭ�Լ��� �������Լ��� �˾Ƽ� �� 
/* ��������� ���� �ڵ� (������ �߻�ȭ) */
void main() {

	Stack st;
	Stack st2(1000);// �ִ� 1000���� �ʿ��� �ڵ������� Stack() �� ���� 

	//st�� �־��� 
	st.Push(100);
	st.Push(200);
	st.Push(300);

	st2.Push(100000);
	st2.Push(200000);
	st2.Push(3000000);

	printf("%d\n", st.Pop());
	printf("%d\n", st.Pop());
	printf("%d\n", st.Pop());


	printf("%d\n", st2.Pop());
	printf("%d\n", st2.Pop());
	printf("%d\n", st2.Pop());
}