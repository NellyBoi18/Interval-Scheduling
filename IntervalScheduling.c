#include <stdio.h>
#include <stdlib.h>

// Struct that stores start and end times
struct interval {
    int start;
    int end;
};

// comparator to send to qsort
int comparator(const void* p, const void* q) {
    int compP = ((struct interval*)p) -> start;
    int compQ = ((struct interval*)q )-> start;
    return compP >= compQ;
}

// Determines the number of intervals scheduled
int scheduler(struct interval jobs[], int numJobs) {
    // Sorting the array based on earliest finish.
    qsort(jobs, numJobs, sizeof(struct interval), comparator);

    int i = 0;
    int j = 1;
    int count = 1;

    // Going through the jobs
    while(i < numJobs && j < numJobs) {
        // If *i* end time is less than or equal to *j* start time
        if(jobs[i].end <= jobs[j].start) {
            // j is now the new end
            i = j;
            // Increase intervals scheduled count
            count++;
        }

        j++;
    }

    return count;
}

int main() {
    // Getting user input for number of instances
    int instances;
    scanf("%d", &instances);
    // Creating array to store each instance's intervals
    int instanceIntervals[instances];
    
    // Getting num job and start/end times in each instance
    int x = 0;
    while (x < instances) {
        // User input for number of jobs
        int numJobs;
        scanf("%d", &numJobs);
        // Creating an array of type interval to store each job's start and end time
        struct interval jobs[numJobs];

        // Looping through number of jobs
        for (int y = 0; y < numJobs; y++) {
            // User input for start/end time of each job
            int startTime;
            int endTime;
            scanf("%d",&startTime);
            scanf("%d",&endTime);

            // Storing start/end times in interval struct in array
            jobs[y].start = startTime;
            jobs[y].end = endTime;
        }

        // Calculating interval scheduling
        int result = scheduler(jobs, numJobs);

        // Storing result in array to print after
        instanceIntervals[x] = result;

        x++;
    }

    // Printing number of intervals
    for (int x = 0; x < instances; x++) {
        printf("%d\n", instanceIntervals[x]);
    }

    return 0;
}