int main(int argc, char const *argv[])
{
    int i = 1;
    while (i < 12)
    {
        if (i > 5)
        {
            if (i == 7)
            {
                break;
            }
            printf("hi");
        }

        printf("%d", i);
        i++;
    }

    return 0;
}
