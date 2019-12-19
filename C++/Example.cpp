// BASIC EXAMPLE ALGORITHM

// BASIC AVERAGE ALGORITHM

// Procedures:
/*
Algorithm Average(list, n)
{
    sum <- 0
    for each element in x in list run n times
    Begin
        sum <- sum + x;
    End
    avg <- sum / n
    return avg
}

*/
// METHOD:

float Average(int L[], int n)
{
    // Declares variable to hold value
    float sum = 0.0;

    // prodedure is done here.
    for (int i = 0; i < n; i++)
    {
        sum = sum + L[i]
    }
    // Adds the total average to
    float avg = sum / n;

    // solves prodecure
    return avg;
}

// TESTING:
int main()
{
    // Test CODE HERE:
}