## File - ឯកសារ 

[<< Prev >>](https://github.com/samreachyan/c-program-basic/tree/main/Structure "Previous") | [<< Next >>](https://sakcode.net "Next")

## ស្វែងយល់ពី File (ឯកសារ)
សម្រាប់អ្នករៀនសរសេរកម្មវិធីថ្មី ពេលសរសេរកម្មវិធី `C/C++` តែងមានចម្ងល់ថា ពេលយើងបញ្ចូលទិន្នន័យទៅក្នុងកម្មវិធី ហើយពេលបិទវាហើយ យើងបើកវាវិញ វាមិនមានទិន្នន័យអ្នកត្រូវបង្ហាញមកវិញ។ ដូច្នេះវាបានបាត់នៅពេលដែលបិទកម្មវិធី។ ដើម្បីដោះស្រាយបញ្ហានេះ គឺត្រូវរក្សាទុកទិន្នន័យក្នុង file (data.txt, ឬ data.bin)។ សម្រាប់បច្ចេកវិទ្យាថ្មីគេរក្សាទុកទិន្នន័យក្នុង database (Mysql, Oracle Database, MongoDB...)។ សម្រាប់ការរក្សាទុកទិន្នន័យក្នុង file បើសិនគេលួចបានគេអាចយកទៅប្រើឬមើលបាន ដូច្នេះយើងអាច Encrypt ឯកសាររបស់យើង នោះកម្មវិធីរបស់យើងកាន់តែសុវត្ថិភាពជាងមុនទៀត (តែដើម្បីកាន់តែច្បាស់ ចូរស្រាវជ្រាវបន្ថែមទៀតពេលក្រោយ)។ 

និយាយពេលឯកសារដែលយើងនឹងរៀន៖
1. Text file (data.txt) ជាប្រភេទឯកសារអក្សរធម្មតាអាចបើកមើល ងាយអាន
2. Binary file (data.bin) ជាប្រភេទឯកសារ binary (0, 1, និងអក្សរមិនងាយអានយល់) អាចថាវាសុវត្ថិភាជាង text​ file ដែរ។ 

## ប្រមាណវិធីប្រភេទឯកសារ

Logic នៃការដំណើរការក្នុងប្រភេទឯកសារ គួរអនុវត្តន៍៖
1. បង្កើតឈ្មោះឯកសារ
2. បើកឯកសារ
3. បញ្ចូលទិន្នន័យ ឬអានទិន្នន័យនៅក្នុងឯកសារ
4. បិទឯកសារ

## អនុវត្តការបើកឯកសារ

ក្នុងភាសាស៊ី
```
FILE *fp;

​​​​​ទីតាំងឈ្មោះឯកសារ┐        ┌── ម៉ូដ
fp = open("data.txt", "w"); // បើកឯកសារ
fp = open("data.txt", "r"); // អានឯកសារ

​​​​​ទីតាំងឈ្មោះឯកសារ (1) ──────┐                ┌─── (2) ម៉ូដឬប្រភេទការបើកឯកសារ
fp = fopen("E:\\c_programming\data.txt", "w"); // បើកឯកសារ ពីថត `E:\\c_programming`​ 
```

ស្វែងយល់ពី `Mode` ឬ `ម៉ូដ` នៃការបើកឯកសារ 


|           ម៉ូដ           ​​   |          អត្ថន័យ            |
| -------------------------- | ------------------------ |
| w | បើកឯកសារ |
| r | អានឯកសារ |
| a | បន្ថែមទិន្នន័យទៅក្នុងឯកសារ |
| w+ | បើកឯកសារនិងបន្ថែមទិន្នន័យទៅក្នុងឯកសារ |
| r+ | អានឯកសារនិងបន្ថែមទិន្នន័យទៅក្នុងឯកសារ |
| a+ | បន្ថែមទិន្នន័យទៅក្នុងឯកសារនិងបើកឯកសារ |
| wb | បើកឯកសារនិងបន្ថែមទិន្នន័យទៅក្នុងឯកសារជាប្រភេទ Binary |
| rb | អានឯកសារនិងបន្ថែមទិន្នន័យទៅក្នុងឯកសារជាប្រភេទ Binary |
| ab | បន្ថែមទិន្នន័យទៅក្នុងឯកសារនិងបើកឯកសារជាប្រភេទ Binary |
| wb+ | បើកឯកសារ អានឯកសារនិងបន្ថែមទិន្នន័យទៅក្នុងឯកសារជាប្រភេទ Binary |
| rb+ | អានឯកសារ បន្ថែមទិន្នន័យទៅក្នុងឯកសារជាប្រភេទ Binary |

ការបិទឯកសារ 
```
fclose(fp);
```

## មុខងារសំខាន់ៗក្នុងឯកសារ

| function	| purpose |	
| --------- | ------- |
| fopen ()	| បង្កើតឯកសារថ្មី ឬបើកឯកសារដែលមានស្រាប់ |
| fclose ()	| បិទឯកសារ |
| fprintf () | បញ្ចូលទិន្នន័យទៅក្នុងឯកសារ |
| fscanf() | អានទិន្នន័យនៃឯកសារ |
| getc() | អានតែមួយអក្សរពីឯកសារ |
| putc() | បញ្ចូលទិន្នន័យតែមួយអក្សរក្នុងឯកសារ |
| getw() | អានតែមួយ ប្រភេទទិន្នន័យជាលេខមួយ ពីឯកសារ |
| putw() | បញ្ចូលទិន្នន័យតែមួយ ប្រភេទទិន្នន័យជាលេខមួយ ក្នុងឯកសារ |
| fseek() | កំណត់ទីតាំងចង្អុលណាមួយជាក់លាក់នៃឯកសារ |
| ftell() | បង្ហាញទីតាំងនៃឯកសារ |
| rewind() | កំណត់ទីតាំងចង្អុលទៅដើមរបស់ឯកសារ |

## អនុវត្តកូដ

អានកូដមើលតើមានន័យដូចម្តេច?
```cpp
#include <stdio.h>
int main() {
    int i;
    FILE * fptr;
    char fn[50];
    char str[] = "Learn on sakcode.net\n";
    fptr = fopen("fputc_test.txt", "w"); // "w" defines "writing mode"
    for (i = 0; str[i] != '\n'; i++) {
        /* write to file using fputc() function */
        fputc(str[i], fptr);
    }
    fclose(fptr);    
}
```

យើងអាចបញ្ចូលទិន្នន័យទៅក្នុង ឯកសារ ជា `string` មួយជួរៗ
```cpp
#include <stdio.h>
int main() {
    FILE * fp;
    fp = fopen("fputs_test.txt", "w+");
    fputs("This is Guru99 Tutorial on fputs,", fp);
    fputs("We don't need to use for loop\n", fp);
    fputs("Easier than fputc function\n", fp);
    fclose(fp);
}
```

ឬមួយទៀត យើងអាចសាកជាមួយ `fprintf()`
```cpp
#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("fprintf_test.txt", "w"); // "w" defines "writing mode"
    /* write to file */
    fprintf(fptr, "Learning with me about C Programming\n");
    fclose(fptr);
}
```

អនុវត្តកូដ ជាមួយ ឯកសារប្រភេទ `Binary file`

```cpp
#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1, n2, n3;
};

int main() {
   int n;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("E:\\c_programming\program.bin","wb")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 1; n < 5; ++n) {
      num.n1 = n;
      num.n2 = 5*n;
      num.n3 = 5*n + 1;
      fwrite(&num, sizeof(struct threeNum), 1, fptr); 
   }
   fclose(fptr); 
}
```

អានទិន្នន័យពីឯកសារនោះជាមួយ `fread()`
```cpp
#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1, n2, n3;
};

int main() {
   int n;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("E:\\c_programming\program.bin","rb")) == NULL) { 
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 1; n < 5; ++n) {
      fread(&num, sizeof(struct threeNum), 1, fptr); 
      printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
   }
   fclose(fptr); 
  
   return 0;
}
```

## Exmaple 

អនុវត្តទី១ បញ្ចូលទិន្នន័យ៖

```cpp
#include <stdio.h>
int main()
{
   char name[50];
   int marks, i, num;

   printf("Enter number of students: ");
   scanf("%d", &num);

   FILE *fptr;
   fptr = (fopen("student.txt", "a"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }

   for(i = 0; i < num; ++i)
   {
      printf("For student%d\nEnter name: ", i+1);
      scanf("%s", name);

      printf("Enter marks: ");
      scanf("%d", &marks);

      fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
   }

   fclose(fptr);
   return 0;
}
```

អានឯកសារចេញពី `file` 
```cpp
#include <stdio.h>
struct student
{
   char name[50];
   int height;
};
int main() {
    struct student stud1[5], stud2[5];   
    FILE *fptr;
    int i;

    fptr = fopen("file.txt","wb");
    for(i = 0; i < 5; ++i) {
        fflush(stdin);
        printf("Enter name: ");
        gets(stud1[i].name);

        printf("Enter height: "); 
        scanf("%d", &stud1[i].height); 
    }

    fwrite(stud1, sizeof(stud1), 1, fptr);
    fclose(fptr);

    fptr = fopen("file.txt", "rb");
    fread(stud2, sizeof(stud2), 1, fptr);
    for(i = 0; i < 5; ++i) {
        printf("Name: %s\nHeight: %d", stud2[i].name, stud2[i].height);
    }
    fclose(fptr);
}
```

ចូរស្វែងយល់ ស្រាវជ្រាវបន្ថែមទៀត! នៅមានរបស់ផ្សេងៗច្រើនជាងនេះទៅទៀត ដែលមិនបានសរសេរលំអិត។

> អនុវត្តន័លំហាត់ជាច្រើនទៀតលើ [សាកកូដ - Sak Code](https://sakcode.net)

សំណាងល្អ 👍😃