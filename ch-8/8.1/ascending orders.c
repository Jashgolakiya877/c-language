 #include <stdio.h>
 main ()
    {
 
        int number[30];
 
        int i, j, a, n;
        printf("Enter the number 1: ");
        scanf("%d", &n);
 
        printf("Enter the number 2:");
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
 
    
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 
        printf("The numbers arranged in descending order are given below\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        }
 
    }
