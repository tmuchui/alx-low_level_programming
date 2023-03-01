char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, k = 0, carry = 0;
    int n1_len = strlen(n1);
    int n2_len = strlen(n2);
    int max_len = (n1_len > n2_len) ? n1_len : n2_len;

    if (size_r <= max_len + 1)
        return (0);

    for (i = n1_len - 1, j = n2_len - 1, k = max_len; i >= 0 && j >= 0; i--, j--, k--)
    {
        int sum = (n1[i] - '0') + (n2[j] - '0') + carry;
        r[k] = (sum % 10) + '0';
        carry = sum / 10;
    }

    while (i >= 0)
    {
        int sum = (n1[i] - '0')
