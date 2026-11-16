#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0; //시작 위치를 0으로 설정한다
    int right = size - 1;   //끝 위치를 배열크기 -1로 설정한다

    while (left <= right) {     //시작 위치가 끝 위치보다 작거나 같은 동안 반복한다.
        int mid = left + (right - left) / 2;    //중간 위치를 계산한다.

        if (arr[mid] == target) {   //만약 중간 위치의 값이 찾음값과 같다면
            return mid;     //중간 위치를 변환하고 탐색을 종료한다.
        } else if (arr[mid] < target) {     //그렇지 않고 중간 위치의 값이 찾음값보다 작다면
            left = mid + 1; //시작 위치를 중간 위치 +1로 설정한다.
        } else {    //그렇지디 않다면
            right = mid - 1;    //끝 위치를 중간 위치 -1로 설정한다.
        }
    }

    return -1; // 반복이 종료될 떄까지 값을 찾지못한다면 -1을 변환한다.
}

int main() {
    int arr[] = { 2,5,8,12,16,23,38,56, 72, 91 };   //정렬된 배열을 선언한다.
    int size = sizeof(arr) / sizeof(arr[0]);    //배열의 크기를 계산한다.
    int target = 7;     //찾을 값을 설정한다.

    int result = binarySearch(arr, size, target);   //binarySearch 함수를 호출하여 결과를 저장한다.

    if (result != -1) {     //결과가 -1이 아니라면
        printf("값 %d은(는) 인덱스 %d에 있습니다.\n", target, result);   //값과 인덱스를 출력한다.
    } else {    //그렇지 않다면
        printf("값 %d은(는) 배열에 없습니다.\n", target);   //값이 없음을 출력한다.
    }

    return 0;   //프로그램 종료
}
