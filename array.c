int main() 
{   
    int arr[5];
    int brr[7];
    int crr[10];
    int i;

    printf("Enter 5 elements for arr:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter 7 elements for brr:\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &brr[i]);
    }

    printf("Enter 10 elements for crr:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &crr[i]);
    }

    printf("\nArray arr: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nArray brr: ");
    for (i = 0; i < 7; i++) {
        printf("%d ", brr[i]);
    }

    printf("\nArray crr: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", crr[i]);
    }

    printf("\n");
}
