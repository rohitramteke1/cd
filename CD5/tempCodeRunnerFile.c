    // display first of each variable
    printf("\n");
    for (i = 0; i < no_pro; ++i)
    {
        if (i == 0 || (pro[i - 1].str[0] != pro[i].str[0]))
        {
            char c = pro[i].str[0];
            printf("FIRST OF %c: ", c);
            for (j = 0; j < TSIZE; ++j)
            {
                if (first[c - 'A'][j])
                {
                    printf("%c ", j);
                }
            }
            printf("\n");
        }
    }

    // display follow of each variable
    printf("\n");
    for (i = 0; i < no_pro; ++i)
    {
        if (i == 0 || (pro[i - 1].str[0] != pro[i].str[0]))
        {
            char c = pro[i].str[0];
            printf("FOLLOW OF %c: ", c);
            for (j = 0; j < TSIZE; ++j)
            {
                if (follow[c - 'A'][j])
                {
                    printf("%c ", j);
                }
            }
            printf("\n");
        }
    }
    // display first of each variable ß
    // in form A->ß
    printf("\n");
    for (i = 0; i < no_pro; ++i)
    {
        printf("FIRST OF %s: ", pro[i].str);
        for (j = 0; j < TSIZE; ++j)
        {
            if (first_rhs[i][j])
            {
                printf("%c ", j);
            }
        }
        printf("\n");
    }

    // the parse table contains '$'
    // set terminal['$'] = 1
    // to include '$' in the parse table
    terminal['$'] = 1;

    // the parse table do not read '^'
    // as input
    // so we set terminal['^'] = 0
    // to remove '^' from terminals
    terminal['^'] = 0;

    // printing parse table
    printf("\n");