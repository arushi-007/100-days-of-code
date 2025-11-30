#include <stdio.h>
#include <string.h>
int main(void) {
    char s[16];
    printf("Enter date (dd/mm/yyyy): ");
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = '\0';        
    char day[3], month[3], year[5];
    int n = sscanf(s, "%2[^/]/%2[^/]/%4s", day, month, year);
    if (n != 3) {
        printf("Invalid format\n");
        return 0;
    }
    static const char *abbr[13] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int m = atoi(month);
    if (m < 1 || m > 12) {
        printf("Invalid month\n");
        return 0;
    }
    printf("%s-%s-%s\n", day, abbr[m], year);
    return 0;
}
