#include <stdio.h>

int main()
{
    int option, input;
    int arr[20];
    int n=20;
    int top = -1;

    while (1)
    {

        printf("Enter option (1: Push, 2: Pop, 3: Display, 4: Exit):\n");
        scanf("%d", &option);

        if (option == 1)
        {
            if (top < n - 1)
            {
                printf("Input value to push: ");
                scanf("%d", &input);
                top++;
                arr[top] = input;
                printf("Input %d is pushed to stack.\n", input);
            }
            else
            {
                printf("Stack Overflow! Cannot push more elements.\n");
            }
        }
        else if (option == 2)
        {
            if (top >= 0)
            {
                input = arr[top];
                top--;
                printf("Input %d is popped from stack.\n", input);
            }
            else
            {
                printf("Stack Underflow! No elements to pop.\n");
            }
        }
        else if (option == 3)
        {
            if (top >= 0)
            {
                printf("Displaying Stack content:\n");
                for (int i = top; i >= 0; i--)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            else
            {
                printf("Stack is empty.\n");
            }
        }
        else if (option == 4)
        {
            printf("Exit...\n");
            break;
        }
        else
        {
            printf("Invalid input. Please enter a valid option (1-4).\n");
        }
    }

    return 0;
}


