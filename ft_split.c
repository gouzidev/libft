static int count_words(char const *s1, char c)
{
    int i;
    int count;
    int end = strlen(s1);

    i = 0;
    while (s1[i])
    {
        if (s1[i] == c)
            i++;
        else
        // if not space
        {
            count++;
            while (s1[i])
            {
                if (s1[i] != c)
                    i++;
            }

        }
        i++;
    }
}
char **ft_split(char const *s, char c)
{

}