int compare(void *v, void *v2)
{
    int a = *(int *)v;
    int b = *(int *)v2;
    
    return (b - a);
}

int validTriangle(int *s)
{
    printf("[%d, %d, %d]\n", s[0], s[1], s[2]);

    if (s[0] == s[1] && s[2] == s[1] && s[0] != 0)
        return (1);
    if (s[0] + s[1] <= s[2] || s[0] + s[2] <= s[1] || s[1] + s[2] <= s[0])
        return (0);
    return (1);
}

int* maximumPerimeterTriangle(int sticks_count, int* sticks, int* result_count) {
    int nb_turn = sticks_count -  2;
    int c = 0;
    int *tab = malloc(sizeof(int)*3);
    
    qsort(sticks, sticks_count, sizeof(int), &compare);
    while(c < sticks_count - 2)
    {
        printf("[%d, %d, %d]\n", sticks[c], sticks[c+1], sticks[c+2]);
        if (validTriangle(&(sticks[c])))
        {
            tab[0] = sticks[c + 2];
            tab[1] = sticks[c + 1];
            tab[2] = sticks[c];
            *result_count = 3;
            return (tab);
        }
        c++;
    }
    tab[0] = -1;
    *result_count = 1;
    return (tab);
}
