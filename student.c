int numStudents = 0;
while (1)
{
  char c;
  printf("\nEnter a to add, p to print, q to quit: ");
  fgets(input, 256, stdin);
  if (sscanf(input, "%c", &c) != 1) continue;
  if (c == `q`)
  {
    break;
  }
  else if (c == 'p')
  {
    printStudents(students, numStudents);
    continue;
  }
  else if (c == 'a')
  {
    //new student
    printf("\nFirst Name: ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", students[numStudents].firstname);

    printf(" Last Name: ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", students[numStudents].lastname);

    printf(" Enter Age: ");
    students[numStudents].age = getInputNumber();
    printf(" Enter ID: ");
    students[numStudents].id = getInputNumber();

    numStudents++
  }
}

printf("\nGoodbye!\n");
}
