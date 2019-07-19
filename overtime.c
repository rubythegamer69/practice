# include <stdio.h>

int main(void)
{
    float income[10], salary[10], ovrincome[10];         //array declarations
    int hours[10], overtime[10];
    char name[10][10];
    for (int i = 0; i < 10; i++)                        //loop to input data in arrays
    {
        do                                             // do while loop to check if worker is valid for overtime or salary
        {
            printf("Welcome. You are the %d worker.\n", i + 1);    //statement telling the user the array location they are in
            printf("Enter your name:\n");
            scanf("%s", name[i]);
            printf("Enter your salary in Rs:\n");
            scanf("%f", &income[i]);
            printf("Enter hours you have worked:\n");
            scanf("%d", &hours[i]);
            if (hours[i] < 40)                //error message if hours are not valid for overtime ors salary
            {
                printf("You have not accumaled enough hours.please try again when you have clocked 40 or more hours.\n");
            }
        }
        while (hours[i] < 40);                //end of while
    }
    for (int i = 0; i < 10; i++)                //loop for printing data
    {
        overtime[i] = hours[i] - 40;            //calculation of overtime hours
        ovrincome[i] = overtime[i] * 12;        //calculation of overtime pay
        salary[i] = income[i] + ovrincome[i];   //calculation of total salary
        printf("Name: %s\n", name[i]);          //beginning of output
        printf("Income: %.2f\n", income[i]);
        printf("Worked Hours: %d\n", hours[i]);
        printf("Overtime: %d\n", overtime[i]);
        printf("Overtime pay: Rs%.2f\n", ovrincome[i]);
        printf("Total Salary: Rs%.2f\n\n", salary[i]);    //end of output
    }
        
}
