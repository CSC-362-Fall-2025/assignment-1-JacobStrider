//Place your needed include statements here (This is roughly the equivelent of libraries in python)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  //Place your solution code here

  int n;
  int *numbers;

  /* Ask the user to input number of elements */
  printf("Enter a number of elements: ");
  scanf("%d", &n);

  /* Validate the size of elements */
  if (n <= 0) {
    printf(" No element to store.\n");
    return 0;
  }

  /* Time to allocate memory */
  numbers = (int *)malloc(n * sizeof(int));

  /* Fail check the allocation check */
  if (numbers == NULL) {
    printf("Memory Allocation FAILED.\n");
    return 1;
  }

  /* Read Elements */
  for (int i = 0; i < n; i++) {
    printf("Enter an Integer %d: ", i + 1);
    scanf("%d ", &numbers[i]);
  }

  /* Print Elements in Reverse Order */
  printf("Elements in Reverse Order:\n");
  for (int i = n - 1; i >= 0; i--) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  /* Free Allocated Memory */
  free(numbers);

  return 0;
}
