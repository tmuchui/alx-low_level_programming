void rev_string(char *s)
{
    int i, j;
    char temp;

    for (i = 0; s[i] != '\0'; i++)
    ;
    j = i - 1;

    for (i = 0; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
