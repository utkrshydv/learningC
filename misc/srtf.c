#include<stdio.h>

void main()
{
    int a[10], b[10], x[10];
    int waiting[10], turnaround[10], completion[10];
    int i, j, smallest, count = 0, time, n;
    double avg = 0, tt = 0, end;

    printf("\nEnter the number of Processes: ");
    scanf("%d", &n);

    // Input arrival and burst times
    for (i = 0; i < n; i++)
    {
        printf("\nEnter arrival time of process %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nEnter burst time of process %d: ", i + 1);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
        x[i] = b[i];

    b[9] = 9999; // Sentinel value for comparison

    // Shortest Job Next (Preemptive)
    for (time = 0; count != n; time++)
    {
        smallest = 9;
        for (i = 0; i < n; i++)
        {
            if (a[i] <= time && b[i] < b[smallest] && b[i] > 0)
                smallest = i;
        }
        b[smallest]--;
        if (b[smallest] == 0)
        {
            count++;
            end = time + 1;
            completion[smallest] = end;
            waiting[smallest] = end - a[smallest] - x[smallest];
            turnaround[smallest] = end - a[smallest];
        }
    }

    // Print table header
    printf("\n%-5s %-10s %-10s %-10s %-15s %-10s", "PID", "Burst", "Arrival", "Waiting", "Turnaround", "Completion");

    // Print process details
    for (i = 0; i < n; i++)
    {
        printf("\n%-5d %-10d %-10d %-10d %-15d %-10d", i + 1, x[i], a[i], waiting[i], turnaround[i], completion[i]);
        avg += waiting[i];
        tt += turnaround[i];
    }

    // Print averages
    printf("\n\nAverage Waiting Time: %lf", avg / n);
    printf("\nAverage Turnaround Time: %lf\n", tt / n);
}
