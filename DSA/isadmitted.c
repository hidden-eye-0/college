#include <stdio.h>
struct Student {
    char name[50];
    float mat, phy, che;
};
void admit(struct Student students[], int num) {
    float m_avg = 0, p_avg = 0, c_avg = 0;
    for (int i = 0; i < num; ++i) {
        m_avg += students[i].mat;
        p_avg += students[i].phy;
        c_avg += students[i].che;
    }
    m_avg /= num;
    p_avg /= num;
    c_avg /= num;
    printf("Admitted Students:\n");
    for (int i = 0; i < num; ++i) {
        if (students[i].mat > 90 && students[i].phy > p_avg && students[i].che > c_avg) {
            printf("%s\n", students[i].name);
        }
    }
}
int main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    if (num > 100)
        printf("Number of students exceeds the limit. Exiting...\n");
    struct Student students[100];
    for (int i = 0; i < num; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Math Marks: ");
        scanf("%f", &students[i].mat);
        printf("Physics Marks: ");
        scanf("%f", &students[i].phy);
        printf("Chemistry Marks: ");
        scanf("%f", &students[i].che);
    }
    admit(students, num);
}
