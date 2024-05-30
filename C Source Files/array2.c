#include <stdio.h>
    struct student
    {
        char *name;
    };
    struct student s;
    struct student fun(void)
    {
        s.name = "newton";
        printf("%s\n", s.name);
        s.name = "alan";
        return s;
    }
    void main()
    {
        struct student m = fun();
        printf("%s\n", m.name);
        m.name = "turing";
        printf("%s\n", s.name);
    }
