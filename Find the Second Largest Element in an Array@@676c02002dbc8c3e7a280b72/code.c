#include <stdio.h> 
int main() { 
    int N; 
    scanf("%d", &N); 
    int arr[N]; 
    for (int i = 0; i < N; i++) { 
        scanf("%d", &arr[i]); } 
        int largest = -2147483648, secondLargest = -2147483648; 
        for (int i = 0; i < N; i++) { 
            if (arr[i] > largest) { 
                secondLargest = largest; largest = arr[i]; } 
            else if (arr[i] > secondLargest && arr[i] < largest) { 
                secondLargest = arr[i]; } } 
            if (secondLargest == -2147483648) { 
                printf("-1\n"); } 
            else { printf("%d\n", secondLargest); } 
            return 0; }