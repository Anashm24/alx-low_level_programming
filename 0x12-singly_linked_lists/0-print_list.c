/**
 * print_list: Entry point
 *
 * @count: number of nodes
 * @*h : a pointer of type list_t
 *
 * Return: numbe of nodes
size_t print_list(const list_t *h)
{
    size_t count = 0;  

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%d] %s\n", h->len, h->str);

        h = h->next;

        count++;
    }

    return count;  
}
