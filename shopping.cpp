/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 100000

// input data
int N, E, i;
int P[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %d", &N, &E));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &P[i]));

    // insert your code here
    
    printf("%d\n", 42); // change 42 with actual answer
    return 0;
}
