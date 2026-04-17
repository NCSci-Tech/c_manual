#include <stdio.h>

struct Template {
    int id;
    char class[6];
    float rating;
};

typedef struct {
    int x;
} exp;

void inc(struct Template a, struct Template *b) {
    a.id++;
    b->id++;
}

int main(void) {
    
    struct Template build1 = {1, "Type A", 9.5};
    struct Template build2 = {.id = 2, .class = "Type B", .rating = 2.3};
    struct Template build2_dev = build2;
    build2_dev.id = 3;
    struct Template *bld_ptr = &build1;
    
    printf("%d,%s,%.1f\n", build1.id, build1.class, build1.rating);
    printf("%d,%s,%.1f\n", build2.id, build2.class, build2.rating);
    printf("%d,%s,%.1f\n", build2_dev.id, build2_dev.class, build2_dev.rating);
    
    inc(build2, &build2_dev);

    printf("%d :: %d\n", build2.id, build2_dev.id);

    exp exp_build = { 25 };

    printf("%d\n", exp_build.x);

    printf("%d,%s,%.1f\n", bld_ptr->id, bld_ptr->class,bld_ptr->rating);

    return 0;
}
