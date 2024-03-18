// Chef and Instant Noodles
// Chef has invented 
// 1
// 1-minute Instant Noodles. As the name suggests, each packet takes exactly 
// 1
// 1 minute to cook.

// Chef's restaurant has 
// �
// X stoves and only 
// 1
// 1 packet can be cooked in a single stove at any minute.

// How many customers can Chef serve in 
// �
// Y minutes if each customer orders exactly 
// 1
// 1 packet of noodles?

// Input Format
// The first and only line of input contains two space-separated integers 
// �
// X and 
// �
// Y — the number of stoves and the number of minutes, respectively.
// Output Format
// Print a single integer, the maximum number of customers Chef can serve in 
// �
// Y minutes
// Constraints
// 1
// ≤
// �
// ,
// �
// ≤
// 1000
// 1≤X,Y≤1000
#include <stdio.h>

int max_customers_served(int X, int Y) {
    // Calculate the maximum number of packets Chef can cook in Y minutes
    int max_packets = X * Y;
    
    return max_packets;
}

int main() {
    int X, Y;
    
    // Input
    scanf("%d %d", &X, &Y);
    
    // Output
    printf("%d\n", max_customers_served(X, Y));
    
    return 0;
}