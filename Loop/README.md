# វង្វិលជុំ

[<< Prev >>](https://github.com/samreachyan/c-program-basic/tree/main/Condition "Previous") | [<< Next >>](https://github.com/samreachyan/c-program-basic/tree/main/Function "Next")

ការវង្វិលជុំ ជាផ្នែកសំខាន់ខ្លាំងមួយរបស់ភាសាស៊ី។ យើងនិងសិក្សាការវង្វិលជុំ៣ ៖

## for - Loop
```
for(express1; express2; express3) {
    // code;
}
```

![For flow chart](https://cdn.programiz.com/sites/tutorial2program/files/c-for-loop.jpg)

```
#include <stdio.h>

void main() {
    int i;
    for(i=0; i<10; i++){
        printf("%d \n", i);
    }
    //output: 0 1 2 3 4 5 6 7 8 9
}
```

1. express1 ការតាងអថេរ `i` ពេលចូលក្នុង Loop for នោះ `i=0`
2. express2 ពិនិត្យ `i=0` នោះតូចជាង `i<10` ពិតនោះ វាចូលទៅ execute កូដ printf();
3. express3 ក្រោយពីធ្វើការចប់សព្វគ្រប់អស់ក្នុង for loop នោះ វាចូលទៅ `i++` មានន័យថា `i=2` 
4. វាមកចូលមកពិនិត្យ express2 ឡើងវិញទៀត បើពិតធ្វើ execute កូដក្នុង ​for loop ទៀត រួចចូលទៅ express3
5. for Loop ត្រូវបានបញ្ចប់នៅពេល ​express មិនពិតឬ false

```
// រកផលបូកពីលេខ​ 1 ទៅតួទី n
#include <stdio.h>
void main() {
    int num, count, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    for(count = 1; count <= num; ++count) {
        sum += count;
    }

    printf("Sum = %d", sum);
}
```

## while - Loop

while Loop ជាវង្វិលជុំមួយដែលវាមានត្រូវពិនិត្យលក្ខខ័ណ រួចអនុវត្តកូដក្នុងខ្លួនវា។ 
```
while(condition) {
    // code;
}
```

![While Loop](https://cdn.programiz.com/sites/tutorial2program/files/c-while-loop_0.jpg)


ឧទាហរណ៍ ៖

```
// រកផលបូកចំនួនពី​ 1 ដល់ n
#include <stdio.h>
void main() {
    int i=1, num, sum=0;
    printf("Enter n = ");
    scanf("%d", &num);

    while(i <= num) {
        sum += i;
        i++;
    }
}
```

1. while វាត្រូវពិនិត្យលក្ខខ័ណក្នុង `(condition)` បើពិត វានឹងអនុវត្តកូដក្នុង while ។ 
2. អនុវត្តចប់ហើយ វាឡើងទៅពិនិត្យលក្ខខ័ណ `condition` របស់ while ទៀត បើពិត វានឹងអនុវត្តកូដក្នុង while ម្តងទៀត។
3. while loop ត្រូវបានបញ្ចប់នៅពេល condition មិនពិតឬ `false` ។ 

## do while - Loop

do while វាស្រដៀងនឹង while ដែរតែវាអនុវត្តរួចហើយទើបពិនិត្យលក្ខខ័ណ។ 
```
do {
    // code;
} while(condition);
```

![do while loop](https://cdn.programiz.com/sites/tutorial2program/files/c-do-while-loop_0.jpg)

```
// រកផលបូកសរុប បញ្ចូលដោយអ្នកប្រើប្រាស់ វាបញ្ចប់ពេលតម្លៃស្មើ 0 

#include <stdio.h>
void main()
{
    int number, sum = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number;
    } while(number != 0);

    printf("Sum = %.d",sum);
}
```

1. do while គឺត្រូវអនុវត្តកូដជាមុនរហូតដល់ ពិនិត្យ `condition` 
2. បើពិត អនុវត្ត do while ទៀត
3. បើ `condition` មិនពិត do while loop ត្រូវបានបញ្ចប់

## break
ប្រើសម្រាប់បញ្ចប់ លក្ខខ័ណ ណាមួយពេលអនុវត្ត។

![break key](https://cdn.programiz.com/sites/tutorial2program/files/c-break-statement-works.jpg)

## continue
ប្រើសម្រាប់ រំលង កូដនៅក្រោយវា។ 

![continue](https://cdn.programiz.com/sites/tutorial2program/files/c-continue-statement-works.jpg)

## goto
ប្រើសម្រាប់ ផ្លាស់ទីទៅកន្លែងផ្សេងមួយទៀតតាម label នោះ។

```
while loop;
goto label1;
for loop;

label1:
printf();

```

កូដត្រូវបានអនុវត្ត `while loop` រួចហើយជួប `goto` វាបានរំលង `for loop` ទៅអនុវត្ត `printf();` រួចក៏ចប់កម្មវិធី។

