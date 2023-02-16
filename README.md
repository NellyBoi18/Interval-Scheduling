# Interval Scheduling
 This program implements the optimal althorigm for interval scheduling.

# Input:
The input will start with a positive integer, giving the number of instances that follow. For each instance, there will be a positive integer, giving the number of jobs. For each job, there will be a pair of positive integers *i* and *j* where *i* < *j*, and *i* is the start time, and *j* is the end time. 

**Input constraints:**
- 1 ≤ t ≤ 1000
- 1 ≤ n ≤ 100
- Strings only contain alphanumeric characters
- Strings are guaranteed to be the names of the nodes in the graph.

# Output: 
For each instance, the program outputs the number of intervals scheduled on a seperate line, terminated by a newline.

# Sample:
**Input:**\
2\
1\
1 4\
3\
1 2\
3 4\
2 6

**Output:**\
1\
2

The sample input has two instances. The first instance has one job to schedule with a start time of 1 and end time of 4. The second instance has 3 jobs.