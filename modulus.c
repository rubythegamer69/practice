 int year;
    do                //do while loop for the span of years between 1500 and 3000
    {
        printf("Enter the year:\n");            //input
        scanf("%d", &year);
        if (year < 1500 || year > 3000)        //if statement for checking the year range
        {
            printf("Invalid year,please input a valid year between 1500 and 3000\n");
        }
    }
    while (year < 1500 || year > 3000);        //end of do while loop
    
    if (year % 4 == 0)                        //checking if year is leap or not, using modulus.
    {
        printf("The year %d is a leap year\n", year);            //output
    }
    else
        printf("The year %d is not a leap year\n", year);
}
