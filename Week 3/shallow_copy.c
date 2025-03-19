# include <stdio.h>

struct mystruct {
    int val;
    char *name;
};



int main() {
    char name[] = "Test";
    struct mystruct s1 = {12, name};
    struct mystruct s2 = s1;
    s1.name[0] = 't';
    s2.val = 2;

    printf("%d %d\n", s1.val, s2.val);
    printf("%s %s\n", s1.name, s2.name);

    return 0;
}

