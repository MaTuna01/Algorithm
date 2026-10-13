#include <iostream>

class CircularQueue {
private:
    int* arr;     // 힙(Heap)에 할당된 int 연속 배열의 첫 번째 원소 시작 주소를 저장하는 포인터
    int capacity; // 큐가 담을 수 있는 최대 칸 수
    int front;    // 가장 먼저 나갈 데이터의 인덱스(배열 번호)
    int rear;     // 새로운 데이터가 들어올 빈 슬롯의 인덱스(배열 번호)
    int count;    // 현재 큐에 들어있는 원소 수

public:
    // 생성자: 요청받은 크기만큼 int 배열을 힙 메모리에 동적 할당
    CircularQueue(int cap) : capacity(cap), front(0), rear(0), count(0) {
        // new int[cap]: int형 공간 cap개를 연속으로 확보하고, 그 시작 주소를 포인터 변수 arr에 전달
        arr = new int[capacity]; 
    }

    // 소멸자: 힙에 동적으로 잡은 배열 공간 전체를 해제
    ~CircularQueue() {
        delete[] arr; // 포인터 arr가 가리키는 배열 전체 메모리를 반납
    }

    bool is_full() const {
        return count == capacity;
    }

    bool is_empty() const {
        return count == 0;
    }

    // 데이터 삽입
    bool enqueue(int val) {
        if (is_full()) return false;

        // arr[rear]는 사실 *(arr + rear) 포인터 연산의 축약 표현입니다.
        // 즉, "arr 시작 주소에서 rear칸만큼 떨어진 메모리 위치에 값 쓰기"
        arr[rear] = val;

        // 모듈러(%) 연산: rear가 capacity에 도달하면 다시 0번 인덱스로 회전
        rear = (rear + 1) % capacity;
        count++;
        return true;
    }

    // 데이터 추출
    bool dequeue() {
        if (is_empty()) return false;

        // 데이터를 굳이 0 등으로 지우지 않고, front 인덱스를 다음 위치로 1칸 회전시킴
        front = (front + 1) % capacity;
        count--;
        return true;
    }

    // 가장 앞 원소 확인
    int peek() const {
        if (is_empty()) return -1;
        // 포인터 arr가 가리키는 배열에서 front번째 위치의 값을 읽어옴
        return arr[front]; 
    }

    int size() const {
        return count;
    }
};