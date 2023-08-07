#include <stdio.h>
 #include <stdlib.h>
  int main()
   {
    int arr[30], size, i, regno, flag=0;

    printf("Enter size of array. \n");
    scanf("%d",&size);

    printf("Enter %d array elements one by one \n",size);
    for (i=0; i<size; i++) {
        scanf("%d \n",&arr[i]);
    }

    printf("Enter the reg no to find \n");
    scanf("%d",&regno);

    for(i=0;i<size;i++) {
        if (regno == arr[i]) {
            flag++;
        }
    }

    if (flag>0) {
        printf("The reg no %d is present in the array.",regno);
    } else {
        printf("The reg no %d is not present in the array.",regno);
}
}
