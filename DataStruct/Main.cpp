#include<stdio.h>
#include<stdlib.h>
///*스택*/
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
///*스택*/
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
///*스택*/
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
///*스택 코드*/
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
///* 여기까지가 스택ㄱ코드 (스택의 추상화) */
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
///*스택 코드 InitStack*/
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
///* 여기까지가 스택ㄱ코드 (스택의 추상화) */
//void main() {
//
//	Stack st;
//
//	InitStack(&st); //초기화하는 함수 
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
///*스택 코드100개의 스텍 만들기 */
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
///* 여기까지가 스택ㄱ코드 (스택의 추상화) */
//void main() {
//
//	Stack st[100]; 
//
//	//그중하나만 스택 쓰기
//	InitStack(&st[0]); //초기화하는 함수 
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
///*스택 -원소의 갯수 결정 동적으로 (오류 처리는 없지만 가장 최종 스텍!!!!!)  */
//typedef struct _stack_tag {
//	int* stack; //동적메모리를 저장하기위해 포인터로 
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
///* 여기까지가 스택ㄱ코드 (스택의 추상화) */
//void main() {
//
//	Stack st;
//
//	//그중하나만 스택 쓰기
//	InitStack(&st,5); //초기화하는 함수 
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
///*스택 - 위에 코드를 객체지향으로 바꾼다면..? stdlib.h 필요   */
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
//// c++에서는 초기화함수와 마무리함수는 알아서 됨 
///* 여기까지가 스택 코드 (스택의 추상화) */
//void main() {
//
//	Stack st;
//
//
//	//st야 넣어줘 
//	st.Push(100);
//	st.Push(200);
//	st.Push(300);
//
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//	printf("%d\n", st.Pop());
//}


/*스택 - 위에 코드를 객체지향으로 바꾼다면..?  */
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
// c++에서는 초기화함수와 마무리함수는 알아서 됨 
/* 여기까지가 스택 코드 (스택의 추상화) */
void main() {

	Stack st;
	Stack st2(1000);// 최대 1000개가 필요함 자동적으로 Stack() 을 실행 

	//st야 넣어줘 
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