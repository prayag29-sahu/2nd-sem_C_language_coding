#include <stdio.h>
#include <conio.h>
void main()
// Program to find greater number of five numbers
{
  int a, b, c, d, e;
  // clrscr();
  printf("enter five numbers:");
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
  if (a > b)
  { // open of if a>b
    if (a > c)
    { // open of if a>c
      if (a > d)
      { // open of if a>d
        if (a > e)
          printf("a is greater");
        else // a<e or a=e
        {    // open of else a<e or a=e
          if (a < e)
            printf("e is greater");
          else // a=e
            printf("a is equal to e and greater than b,c,d");
        } // close of else a<e or a=e
      } // close of if a>d
      else // a<d or a=d
      {    // open of else a<d or a=d
        if (d > a)
        { // open of if a<d
          if (d > e)
          { // open of if d>e
            printf("d is greater");
          } // close of if d>e
          else // d<e or d=e
          {    // open of else d<e or d=e
            if (e > d)
              printf("e is greater");
            else // d=e
              printf("d is equal to e and greater than a,b,c");
          } // close of else d<e or d=e
        } // close of if a<d
        else // a=d
        {    // open of else a=d
          if (d > e)
            printf("a is equal to d and greater than b,c,e");
          else // d<e or d=e
          {    // open of else d<e or d=e
            if (e > d)
              printf("e is greater");
            else // d=e
              printf("a is equal to d and e and greater than b,c");
          } // close of else d<e or d=e
        } // close of else a=d
      } // close of else a<d or a=d
    } // close of if a>c
    else // a<c or a=c
    {    // open of else a<c or a=c
      if (c > a)
      { // open of if a<c
        if (c > d)
        { // open of if c>d
          if (c > e)
            printf("c is greater");
          else // c<e or c=e
          {    // open of else c<e or c=e
            if (e > c)
              printf("e is greater");
            else // e=c
              printf("e is equal to c and greater than a,b,d");
          } // close of else c<e or c=e
        } // close of if c>d
        else // c<d or c=d
        {    // open of else c<d or c=d
          if (d > c)
          { // open of if c<d
            if (d > e)
              printf("d is greater");
            else // d<e or d=e
            {    // open of else d<e or d=e
              if (e > d)
                printf("e is greater");
              else // d=e
                printf("d is equal to e and a,b,c");
            } // close of else d<e or d=e
          } // close of if c<d
          else // c=d
          {    // open of else c=d
            if (d > e)
              printf("c is equal to d and greater than a,b,e");
            else // d<e pr d=e
            {    // open of else d<e or d=e
              if (e > d)
                printf("e is greater");
              else // d=e
                printf("c is equal to d and e and greater than a,b");
            } // close of else d<e or d=e
          } // close of else c=d
        } // close of else c<d or c=d
      } // close of if a<c
      else // a=c
      {    // open of else a=c
        if (c > d)
        { // open of if c>d
          if (c > e)
            printf("a is equal to c and greater than b and d and e");
          else // c<e or c=e
          {    // open of else c<e or c=e
            if (e > c)
              printf("e is greater");
            else // c=e
              printf("a is equal to c and e and greater than b and d");
          } // close of else c<e or c=e
        } // close of if c>d
        else // c<d or c=d
        {    // open of else c<d or c=d
          if (d > c)
          { // open of if c<d
            if (d > e)
              printf("d is greater");
            else // d<e or d=e
            {    // open of else d<e or d=e
              if (e > d)
                printf("e is greater ");
              else // d=e
                printf("d is equal to e and greater a and b and c");
            } // close of else d<e or d=e
          } // close of if c<d
          else // c=d
          {    // open of else c=d
            if (d > e)
              printf("a is equal to c and d and greater than b and e");
            else // d<e or d=e
            {    // open of else d<e or d=e
              if (e > d)
                printf("e is greater");
              else // d=e
                printf("a is equal to c and d and e and greater than b");
            } // close of else d<e or d=e
          } // close of else c=d
        } // close of else c<d or c=d
      } // close of else a=c
    } // close of else a<c or a=c
  } // close of if a>b
  else // a<b or a=b
  {    // open of else a<b or a=b
    if (b > a)
    { // open of if a<b
      if (b > c)
      { // open of if b>c
        if (b > d)
        { // open of if b>d
          if (b > e)
            printf("b is greater");
          else // b<e or b=e
          {    // open of else b<e or b=e
            if (e > b)
              printf("e is greater");
            else // b=e
              printf("b is equal to e and greater than a,c,d");
          } // close of else b<e or b=e
        } // close of if b>d
        else // b<d or b=d
        {    // open of else b<d or b=d
          if (d > b)
          { // open of if b<d
            if (d > e)
              printf("d is greater");
            else // d<e or d=e
            {    // open of else d<e or d=e
              if (e > d)
                printf("e is greater ");
              else // d=e
                printf("d is equal to e and greater than a,b,c");
            } // close of else d<e or d=e
          } // close of if b<d
          else // b=d
          {    // open of else b=d
            if (d > e)
              printf("b is equal to d and greater than a,c,e");
            else // d<e or d=e
            {    // open of else d<e or d=e
              if (e > d)
                printf("e is greater");
              else // d=e
                printf("b is equal to d and e and greater than a,c");
            } // close of else d<e or d=e
          } // close of else b=d
        } // close of else b<d or b=d
      } // close of if b>c
      else // b<c or b=c
      {    // open of else b<c or b=c
        if (c > b)
        { // open of if b<c
          if (c > d)
          { // open of if c>d
            if (c > e)
              printf("c is greater");
            else // c<e or c=e
            {    // open of else c<e or c=e
              if (e > c)
                printf("e is greater");
              else // c=e
                printf("c is equal to e and greater than a,b,d");
            } // close of else c<e or c=e
          } // close of if c>d
          else // c<d or c=d
          {    // open of else c<d or c=d
            if (d > c)
            { // open of if c<d
              if (d > e)
                printf("d is greater");
              else // d<e or d=e
              {    // open of else d<e or d=e
                if (e > d)
                  printf("e is greater");
                else // d=e
                  printf("d is equal to e and greater than a,b,c");
              } // close of else d<e or d=e
            } // close of if c<d
            else // c=d
            {    // open of else c=d
              if (d > e)
                printf("c is equal to d and greater than a,b,e");
              else // d<e or d=e
              {    // open of else d<e or d=e
                if (e > d)
                  printf("e is greater");
                else // d=e
                  printf("c is equal to d and e and greater than a,b");
              } // close of else d<e or d=e
            } // close of else c=d
          } // open of else c<d or c=d
        } // close of if b<c
        else // b=c
        {    // open of else b=c
          if (c > d)
          { // open of if c>d
            if (c > e)
              printf("b is equal to c and greater than a,d,e");
            else // c<e or c=e
            {    // open of else c<e or c=e
              if (e > c)
                printf("e is greater ");
              else // c=e
                printf("b is equal to c and e and greater than a,d");
            } // close of else c<e or c=e
          } // close of if c>d
          else // c<d or c=d
          {    // open of else c<d or c=d
            if (d > c)
            { // open of if c<d
              if (d > e)
                printf("d is greater");
              else // d<e or d=e
              {    // open of else d<e or d=e
                if (e > d)
                  printf("e is greater");
                else // d=e
                  printf("d is equal to e and greater than a,b,c");
              } // close of else d<e or d=e
            } // close of if c<d
            else // c=d
            {    // open of else c=d
              if (d > e)
                printf("b is equal to c and d and greater than a,e");
              else // d<e or d=e
              {    // open of else d<e or d=e
                if (e > d)
                  printf("e is greater");
                else // d=e
                  printf("b is equal to c and d and e and greater than a");
              } // close of else d<e or d=e
            } // close of else c=d
          } // close of else c<d or c=d
        } // close of else b=c
      } // close of else b<c or b=c
    } // close of if a<b
    else // a=b
    {    // open of else a=b
      if (b > c)
      { // open of if b>c
        if (b > d)
        { // open of if b>d
          if (b > e)
            printf("a is equal to b and greater than c,d,e");
          else // b<e or b=e
          {    // open of else of b<e or b=e
            if (e > b)
              printf("e is greater");
            else // b=e
              printf("a is equal to b and e and greater than c and d");
          } // close of else of b<e or b=e
        } // close of if b>d
        else // b<d or b=d
        {    // open of else b<d or b=d
          if (d > b)
          { // open of if b<d
            if (d > e)
              printf("d is greater");
            else // d<e or d=e
            {    // open of else d<e or d=e
              if (e > d)
                printf("e is greater");
              else // d=e
                printf("d is equal to e and greater than a,b,c");
            } // close of else d<e or d=e
          } // close of if b<d
          else // b=d
          {    // open of else b=d
            if (d > e)
              printf("a is equal to b and d and greater than c,e");
            else // d<e or d=e
            {    // open of else d<e or d=e
              if (e > d)
                printf("e is greater");
              else // d=e
                printf("a is equal to b and d and e and greater than c");
            } // close of else d<e or d=e
          } // close of else b=d
        } // close of else b<d or b=d
      } // close of if b>c
      else // b<c or b=c
      {    // open of else b<c or b=c
        if (c > b)
        { // open of if b<c
          if (c > d)
          { // open of if c>d
            if (c > e)
              printf("c is greater");
            else // c<e or c=e
            {    // open of else c<e or c=e
              if (e > c)
                printf("e is greater");
              else // c=e
                printf("c is equal to e and greater than a,b,d");
            } // close of else c<e or c=e
          } // close of if c>d
          else // c<d or c=d
          {    // open of else c<d or c=d
            if (d > c)
            { // open of if c<d
              if (d > e)
                printf("d is greater");
              else // d<e or d=e
              {    // open of else d<e or d=e
                if (e > d)
                  printf("e is greater");
                else // d=e
                  printf("d is equal to e and greater than a,b,c");
              } // close of else d<e or d=e
            } // close of if c<d
            else // c=d
            {    // open of c=d
              if (d > e)
                printf("c is equal to d and greater than a,b,e");
              else // d<e or d=e
              {    // open of else d<e or d=e
                if (e > d)
                  printf("e is greater");
                else // d=e
                  printf("c is equal to d and e and greater than a,b");
              } // close of else d<e or d=e
            } // close of c=d
          } // close of else c<d or c=d
        } // close of if b<c
        else // b=c
        {    // open of else b=c
          if (c > d)
          { // open of if c>d
            if (c > e)
              printf("a is equal to b and c and greater than d,e");
            else // c<e or c=e
            {    // open of else c<e or c=e
              if (e > c)
                printf("e is greater");
              else // c=e
                printf("a is equal to b and c and e and greater than d");
            } // close of else c<e or c=e
          } // close of if c>d
          else // c<d or c=d
          {    // open of else c<d or c=d
            if (d > c)
            { // open of if c<d
              if (d > e)
                printf("d is greater");
              else // d<e or d=e
              {    // open of else d<e or d=e
                if (e > d)
                  printf("e is greater");
                else // d=e
                  printf("d is equal to e and greater than a,b,c");
              } // close of else d<e or d=e
            } // close of if c<d
            else // c=d
            {    // open of else c=d
              if (d > e)
                printf("a is equal to b,c,d and greater than e");
              else // d<e or d=e
              {    // open of else d<e or d=e
                if (e > d)
                  printf("e is greater");
                else // d=e
                  printf("all numbers are same");
              } // close of else d<e or d=e
            } // close of else c=d
          } // close of else c<d or c=d
        } // close of else b=c
      } // close of else b<c or b=c
    } // close of else a=b
  } // close of else a<b or a=b
  getch();
}