Function:

char *cap_string(char *str)
{
    int i = 0;
    
    // Capitalize the first letter of the string
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;
    }

    // Go through the rest of the string and capitalize letters
    // after separators
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' ||
            str[i] == '}') {
            // If the next character is a letter, capitalize it
            if (str[i + 1] >= 'a' &&
