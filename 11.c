#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr_malloc = (int *)malloc(5 * sizeof(int));
    int *arr_calloc = (int *)calloc(5, sizeof(int));

    if (arr_malloc == NULL || arr_calloc == NULL) {
        perror("Memory allocation failed");
        return EXIT_FAILURE;
    }

    printf("Memory allocated using malloc:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr_malloc[i] = i * 2);
    }
    printf("\n");

    printf("Memory allocated using calloc (initialized to zero):\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr_calloc[i]);
    }
    printf("\n");

    arr_malloc = (int *)realloc(arr_malloc, 10 * sizeof(int));

    if (arr_malloc == NULL) {
        perror("Memory reallocation failed");
        free(arr_calloc);
        return EXIT_FAILURE;
    }

    printf("Memory reallocated using realloc:\n");
    for (int i = 5; i < 10; ++i) {
        printf("%d ", arr_malloc[i] = i * 2);
    }
    printf("\n");

    free(arr_malloc);
    free(arr_calloc);

    return EXIT_SUCCESS;
}
