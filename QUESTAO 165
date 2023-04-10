#include <stdio.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;

  printf("Array antes da soma: ");
  for(int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  for(int i = 0; i < 5; i++) {
    *(ptr+i) += 1;
  }

  printf("Array depois da soma: ");
  for(int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");

  return 0;
}
