#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};   
    char queue[100];
    int front = 0, rear = 0;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (ch == ' ') continue;   

        freq[ch]++;
        queue[rear++] = ch;   

       
        while (front < rear && freq[queue[front]] > 1)
            front++;

        if (front == rear)
            printf("-1 ");
        else
            printf("%c ", queue[front]);
    }

    return 0;
}
