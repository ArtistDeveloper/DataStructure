#include <stdio.h>
#define MAX 5
#define TRUE 1
#define FALSE 0

int queue[MAX];
int front = -1, rear = -1;

void enQueue(int data)
{
	if (qisFull() == TRUE) { // qisFull()해서 return값이 1이면 참이되어 == TRUE는 안해도 될 줄 알았는데..
		printf("queue가 꽉찼습니다.");
	}

	else queue[++rear] = data;
}

int deQueue()
{
	if (qisEmpty() == TRUE) {
		printf("queue가 비었습니다.");
	}

	else return queue[++front];
}

int qisEmpty()
{
	if (rear == front) {
		return TRUE;
	}
	
	else FALSE;
}

int qisFull()
{
	if (rear == MAX-1) {
		return TRUE;
	}
	
	else FALSE;
}

void qPrint()
{
	if (qisEmpty() == TRUE) {
		printf("queue가 비어서 print할 수 없습니다.");
	}

	else {
		for (int i = front+1; i < rear+1; i++) {
			printf("%d\n", queue[i]);
		}
	}
}

int main()
{
	int temp;
	enQueue(5);
	enQueue(3);
	enQueue(4);
	enQueue(1);
	enQueue(7);
	temp = deQueue();

	qPrint();

	system("pause");
	return 0;
}